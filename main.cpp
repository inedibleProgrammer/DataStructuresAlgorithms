#include <QCoreApplication>
#include <iostream>

#include "SinglyLinkedList/SinglyLinkedList.hpp"




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SinglyLinkedListData data1 =
    {
        0,
        0.5,
        "Hello!"
    };

    SinglyLinkedList linkedList;
    linkedList.AddNodeToHead(data1);
    linkedList.AddNodeToHead(data1);
    linkedList.AddNodeToHead(data1);
    linkedList.AddNodeToHead(data1);
    linkedList.AddNodeToHead(data1);
    linkedList.AddNodeToHead(data1);



    linkedList.PrintLinkedList();

    linkedList.DeleteNodeFromHead();

    std::cout << "\n\n";

    linkedList.PrintLinkedList();

    std::cout << "\n\n\n\n";
    std::cout << "End Of main()" << std::endl;

    return a.exec();
}

