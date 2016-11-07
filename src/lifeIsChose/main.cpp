#include <QApplication>
#include<QWindow>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   a.setWindowIcon(QIcon("picture/v7.ico"));

    return a.exec();
}
