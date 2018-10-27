#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include <iostream>
#include <string>

struct SinglyLinkedListData
{
    int         iData;
    double      dData;
    std::string strData;
};

class SinglyLinkedListNode
{
    private:
        SinglyLinkedListData  data;
        SinglyLinkedListNode* next;
    public:
        SinglyLinkedListNode();
        SinglyLinkedListNode(SinglyLinkedListData data);
        ~SinglyLinkedListNode();

        void SetData(const SinglyLinkedListData data);
        SinglyLinkedListData GetData() const;

        void SetNext(SinglyLinkedListNode* const next);
        SinglyLinkedListNode* GetNext() const;
};

class SinglyLinkedList
{
    private:
        SinglyLinkedListNode* head;
        SinglyLinkedListNode* tail;

    public:
        SinglyLinkedList();

        // Deletes all nodes recursively through SinglyLinkedListNode destructor
        ~SinglyLinkedList();

        void AddNodeToHead(SinglyLinkedListData data);

};


#endif /* SINGLY_LINKED_LIST_H */