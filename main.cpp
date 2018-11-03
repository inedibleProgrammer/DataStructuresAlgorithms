#include <QCoreApplication>
#include <iostream>

#include "SinglyLinkedList/SinglyLinkedList.hpp"




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "Beginning of main()" << "\n\n\n";

    SinglyLinkedListData dataArray[100];

    for(int i = 0; i < 100; i++)
    {
        dataArray[i].iData = i;
        dataArray[i].dData = double(i + 0.5);
        dataArray[i].strData = "Node: " + std::to_string(i);
    }

    SinglyLinkedList* linkedListPtr = new SinglyLinkedList();

    linkedListPtr->AddNodeToHead(dataArray[1]);
    linkedListPtr->AddNodeToTail(dataArray[2]);
    linkedListPtr->AddNodeToTail(dataArray[3]);
    linkedListPtr->AddNodeToTail(dataArray[4]);
    linkedListPtr->AddNodeToTail(dataArray[5]);
    linkedListPtr->AddNodeToTail(dataArray[6]);
    linkedListPtr->AddNodeToTail(dataArray[7]);

    linkedListPtr->PrintLinkedList();

    std::cout << "\n\n";

    linkedListPtr->DeleteLinkedList();

    linkedListPtr->PrintLinkedList();


    std::cout << "\n\n\n\n";
    std::cout << "End Of main()" << std::endl;

    return a.exec();
}




