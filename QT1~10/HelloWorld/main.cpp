#include <QCoreApplication>
//#include <iostream>
//#include <string>

#include <QTextStream>

/*
void do_cpp()
{
    std::string name;
    std::cout << "Please enter your name ";
    std::getline(std::cin,name);
    std::cout << "Hello" << name << "\n";
}
*/

void do_qt()
{
    QTextStream qin(stdin);
    QTextStream qout(stdout);

    qout << "Please enter your name:";
    qout.flush();
    QString name = qin.readLine();
    qout << "Hello " << name << "\n";
    qout.flush();
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

   // do.cpp();
    do_qt();

    return a.exec();
}
