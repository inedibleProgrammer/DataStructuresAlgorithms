#include <QCoreApplication>
#include <iostream>
#include "SinglyLinkedList/SinglyLinkedList.hpp"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SinglyLinkedList linkedList;
    linkedList.AddNode("First");
    linkedList.AddNode("Second");
    linkedList.AddNode("Third");
    linkedList.DisplayList();
    std::cout << "\nRemove Node: ";
    std::cout << linkedList.RemoveNode("Second");
    std::cout << "\n";
    linkedList.DisplayList();
    std::cout << "\n";
    std::cout << "End Of main()" << std::endl;

    return a.exec();
}

