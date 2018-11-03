
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
    delete this->next; 
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
    this->head = nullptr;
    this->tail = nullptr;
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
    if(this->tail == nullptr)
    {
        this->tail = new SinglyLinkedListNode(data);
        this->head = this->tail;
    }
    else
    {
        SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);
        this->tail->SetNext(temp);
        this->tail = temp;
        temp = nullptr;
    }
}

void SinglyLinkedList::DeleteNodeFromHead()
{
    if(this->head == nullptr)
    {
        return;
    }
    else
    {
        SinglyLinkedListNode* temp = this->head;
        this->head = this->head->GetNext();
        temp->SetNext(nullptr);
        delete temp;
    }
}

void SinglyLinkedList::DeleteNodeFromTail()
{
    if(this->tail == nullptr)
    {
        return;
    }
    else
    {
        SinglyLinkedListNode* temp = this->head;
        while(temp->GetNext() != this->tail)
        {
            temp = temp->GetNext();
        }
        this->tail = temp;
        temp = temp->GetNext();
        delete temp;
    }
}

void SinglyLinkedList::DeleteLinkedList()
{
    delete this->head;
    this->head = nullptr;
    this->tail = nullptr;
}

void SinglyLinkedList::PrintLinkedList()
{
    if(this->head == nullptr)
    {
        std::cout << "Empty List";
    }
    else
    {
        SinglyLinkedListNode* temp = head;
        while(temp != nullptr)
        {
            std::cout << "|" << temp->GetData().iData << "," << temp->GetData().dData << "," <<temp->GetData().strData << "|->";
            temp = temp->GetNext();
        }
    }
}
