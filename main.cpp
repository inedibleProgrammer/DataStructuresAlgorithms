#include <QCoreApplication>
#include <iostream>

#include "SinglyLinkedList/SinglyLinkedList.hpp"




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SinglyLinkedListData data1 =
    {
        1,
        1.0,
        "One!"
    };

    SinglyLinkedListData data2 =
    {
        2,
        2.0,
        "Two!"
    };

    SinglyLinkedListData data3 =
    {
        3,
        3.0,
        "Three!"
    };

    SinglyLinkedListData data4 =
    {
        4,
        4.0,
        "Four!"
    };

    SinglyLinkedListData data5 =
    {
        5,
        5.0,
        "Five!"
    };

    SinglyLinkedList linkedList;
    linkedList.AddNodeToHead(data1);
    linkedList.AddNodeToHead(data2);
    linkedList.AddNodeToHead(data3);
    linkedList.AddNodeToHead(data4);
    linkedList.AddNodeToHead(data5);
    linkedList.AddNodeToHead(data1);




    linkedList.PrintLinkedList();

    linkedList.DeleteNodeFromHead();

    std::cout << "\n\n";

    linkedList.PrintLinkedList();

    std::cout << "\n\n\n\n";
    std::cout << "End Of main()" << std::endl;

    return a.exec();
}

