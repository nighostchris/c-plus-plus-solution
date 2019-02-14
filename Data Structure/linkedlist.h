#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <iostream>
#include "node.h"

using namespace std;

template<typename T>
class LinkedList
{
    private:
        Node<T>* head;
    
    public:
        LinkedList();

        void insert_front(T data);
        void insert_back(T& data);
        void insert_node(Node<T>* ancestor, T& data);
        
        void delete_front(T& data);
        void delete_back(T& data);
        void delete_node(Node<T>* ancestor);
        
        Node<T>* find(T& data);
        bool empty();
        void traverse();
};

template<typename T>
LinkedList<T>::LinkedList() : head(nullptr)
{
}

template<typename T>
void LinkedList<T>::insert_front(T data)
{
    Node<T>* dummy = new Node<T>(data);

    if (empty())
    {    
        head = dummy;
    }
    else
    {
        Node<T>* temp = head;
        head = dummy;
        dummy->next = temp; 
    }
}

template<typename T>
void insert_back(T& data)
{

}

template<typename T>
void insert_node(Node<T>* ancestor, T& data)
{

}

template<typename T>        
void delete_front(T& data)
{

}

template<typename T>
void delete_back(T& data)
{

}

template<typename T>
void delete_node(Node<T>* ancestor)
{

}

template<typename T>        
Node<T>* find(T& data)
{
    if (!LinkedList<T>::empty())
    {
        Node<T>* temp = Node<T>::head;
        
        while (temp->next != nullptr)
        {
            if (temp->data == data)
            {
                return temp;
            }
            else
            {
                temp = temp->head;
            }
        }
    }

    return nullptr;
}

template<typename T>
bool LinkedList<T>::empty()
{
    return (head == nullptr);
}

template<typename T>
void LinkedList<T>::traverse()
{
    cout << "Data in LinkedList: ";

    Node<T>* temp = head;
    cout << temp->data;
    temp = temp->next;

    while(temp->next != nullptr)
    {
        cout << " -> " << temp->data;

        temp = temp->next;
    }
}

#endif