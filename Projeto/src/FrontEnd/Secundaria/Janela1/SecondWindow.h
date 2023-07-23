#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

class SecondWindow : public QWidget {
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = nullptr);

signals:
    void backClicked();
    void dataSubmitted(const QString &data1, const QString &data2, const QString &data3);

private slots:
    void onSubmit();

private:
    QLabel label1;
    QLabel label2;
    QLabel label3;
    QLineEdit lineEdit1;
    QLineEdit lineEdit2;
    QLineEdit lineEdit3;
    QPushButton backButton;
    QPushButton submitButton;
};

#endif 
