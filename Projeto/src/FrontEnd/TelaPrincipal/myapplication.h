#ifndef MYAPPLICATION_H
#define MYAPPLICATION_H

#include <QObject>
#include <QPushButton>

class MyApplication : public QObject
{
    Q_OBJECT

public:
    MyApplication(QObject *parent = nullptr) : QObject(parent) {}

public slots:
    void handleButton1Click();
    void handleButton2Click();
};

#endif // MYAPPLICATION_H
