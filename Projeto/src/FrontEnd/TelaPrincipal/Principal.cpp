#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTextEdit>
#include "myapplication.h"
#include "../Secundaria/Janela1/SecondWindow.h"


void sayHello(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    QVBoxLayout layout(&window);

    QPushButton button1("Botão 1");
    QPushButton button2("Botão 2");
    QTextEdit textArea;

    MyApplication myApp;
    SecondWindow secondWindow;

    QObject::connect(&button1, &QPushButton::clicked, [&]() {
        window.hide();
        secondWindow.show();
    });

    QObject::connect(&secondWindow, &SecondWindow::backClicked, [&]() {
        secondWindow.hide();
        window.show();
    });

    layout.addWidget(&button1);
    layout.addWidget(&button2);
    layout.addWidget(&textArea);

    window.show();

    app.exec();
}
