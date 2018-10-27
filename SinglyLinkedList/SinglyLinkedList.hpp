#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include <iostream>

struct Node
{
    std::string data;
    Node* next;
};

class SinglyLinkedList
{
    private:
        Node* head;
        Node* tail;
    public:
        SinglyLinkedList();
        void AddNode(std::string data);
        std::string RemoveNode(std::string data);
        void DisplayList();
        
};

SinglyLinkedList::SinglyLinkedList()
{
    this->head = nullptr;
    this->tail = nullptr;
}

void SinglyLinkedList::AddNode(std::string data)
{
    
    if(this->head == nullptr)
    {
        this->head = new Node;
        this->tail = head;
        this->head->data = data;
        this->head->next = nullptr;
    }
    else
    {
        this->tail->next = new Node;
        this->tail = this->tail->next;
        this->tail->data = data;
        this->tail->next = nullptr;
    }
}

std::string SinglyLinkedList::RemoveNode(std::string data)
{
    std::string returnData("Data not found");
    if(this->head == nullptr)
    {
        return returnData;
    }
    else
    {
        Node* removeNode = this->head;
        while(removeNode != nullptr)
        {
            if(removeNode->next->data == data)
            {
                returnData = removeNode->next->data;
                removeNode->next = removeNode->next->next;
                // removeNode->next = nullptr;
                delete removeNode->next;
            }
            removeNode = removeNode->next;
        }
    }
    return returnData;
}

void SinglyLinkedList::DisplayList()
{
    Node* printNode = this->head;
    while(printNode != nullptr)
    {
        std::cout << printNode->data << "->";
        printNode = printNode->next;
    }
}

#endif /* SINGLY_LINKED_LIST_H */