#include <QCoreApplication>
#include <iostream>

#include "SinglyLinkedList/SinglyLinkedList.hpp"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SinglyLinkedList linkedList;

    std::cout << "End Of main()" << std::endl;

    return a.exec();
}

