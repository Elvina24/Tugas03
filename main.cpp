#include <QCoreApplication>
#include "mythread.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

        MyThread thread1("V"), thread2("I"), thread3("N"), thread4("A");

        thread1.start();
        thread2.start();
        thread3.start();
        thread4.start();

        return a.exec();
    }
