
#include <string>
#include "SinglyLinkedList.hpp"

/*****************************************************************
* SinglyLinkedListNode
******************************************************************/

SinglyLinkedListNode::SinglyLinkedListNode()
{
    this->data.iData = 0;
    this->data.dData = 0.0;
    this->data.strData = "";
    this->next = nullptr;
}

SinglyLinkedListNode::SinglyLinkedListNode(SinglyLinkedListData data)
{
    this->data = data;
    this->next = nullptr;
}

SinglyLinkedListNode::~SinglyLinkedListNode()
{
    delete this->next; // This should call all following nodes' destructors
}

void SinglyLinkedListNode::SetData(const SinglyLinkedListData data)
{
    this->data = data;
}

SinglyLinkedListData SinglyLinkedListNode::GetData() const
{
    return this->data;
}

void SinglyLinkedListNode::SetNext(SinglyLinkedListNode* const next)
{
    this->next = next;
}

SinglyLinkedListNode* SinglyLinkedListNode::GetNext() const
{
    return this->next;
}

/**************************************************************
* SinglyLinkedList
**************************************************************/

SinglyLinkedList::SinglyLinkedList()
{
    this->head = nullptr;
    this->tail = nullptr;
}

SinglyLinkedList::~SinglyLinkedList()
{
    delete this->head; 
}

void SinglyLinkedList::AddNodeToHead(const SinglyLinkedListData data)
{
    if( this->head == nullptr )
    {
        this->head = new SinglyLinkedListNode(data);
        this->tail = head;
    }
    else
    {
        SinglyLinkedListNode* temp = head;
        this->head = new SinglyLinkedListNode(data);
        this->head->SetNext(temp);
        temp = nullptr;
    }
}

void SinglyLinkedList::AddNodeToTail(const SinglyLinkedListData data)
{
    
}

void SinglyLinkedList::PrintLinkedList()
{
    SinglyLinkedListNode* temp = head;
    while(temp != nullptr)
    {
        std::cout << "|" << temp->GetData().iData << "|" << temp->GetData().dData << "|" <<temp->GetData().strData << "|->";
        temp = temp->GetNext();
    }
}
