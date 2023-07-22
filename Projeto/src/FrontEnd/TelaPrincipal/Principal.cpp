#include "Principal.h"
#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTextEdit>

void sayHello(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    QVBoxLayout layout(&window);

    QPushButton button1("Botão 1");
    QPushButton button2("Botão 2");
    QTextEdit textArea;

    layout.addWidget(&button1);
    layout.addWidget(&button2);
    layout.addWidget(&textArea);

    window.show();

    app.exec();
}
