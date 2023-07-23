#include "SecondWindow.h"
#include <QMessageBox>  

SecondWindow::SecondWindow(QWidget *parent) : QWidget(parent),
    backButton("Voltar"), submitButton("Enviar"), label1("Digite o dado 1:"), label2("Digite o dado 2:"), label3("Digite o dado 3:") {

    QVBoxLayout *layout = new QVBoxLayout(this);

    layout->addWidget(&label1);
    layout->addWidget(&lineEdit1);
    layout->addWidget(&label2);
    layout->addWidget(&lineEdit2);
    layout->addWidget(&label3);
    layout->addWidget(&lineEdit3);
    layout->addWidget(&backButton);
    layout->addWidget(&submitButton);

    setLayout(layout);

    connect(&backButton, &QPushButton::clicked, this, &SecondWindow::backClicked);
    connect(&submitButton, &QPushButton::clicked, this, &SecondWindow::onSubmit);
}

void SecondWindow::onSubmit() {
    // Aqui você pode pegar os dados dos lineEdits e processá-los
    QString data1 = lineEdit1.text();
    QString data2 = lineEdit2.text();
    QString data3 = lineEdit3.text();

    // Verifique os dados e exiba uma mensagem de sucesso ou falha
    // Por exemplo:
    if (data1.isEmpty() || data2.isEmpty() || data3.isEmpty()) {
        QMessageBox::information(this, "Erro", "Todos os campos devem ser preenchidos!");
    } else {
        QMessageBox::information(this, "Sucesso", "Dados enviados com sucesso!");
    }
}
