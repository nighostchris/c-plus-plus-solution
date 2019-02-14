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
        ~LinkedList();

        void insert_front(T data);
        void insert_back(T data);
        void insert_node(Node<T>* ancestor, T data);
        
        void delete_front();
        void delete_back();
        void delete_node(T data);
        
        Node<T>* find(T data);
        bool empty();
        void traverse();
};

template<typename T>
LinkedList<T>::LinkedList() : head(nullptr)
{
}

template<typename T>
LinkedList<T>::~LinkedList()
{
    Node<T>* itr = head;

    while (itr != nullptr)
    {
        Node<T>* dummy = itr;
        itr = itr->next;
        delete dummy;
    }
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
void LinkedList<T>::insert_back(T data)
{
    Node<T>* dummy = new Node<T>(data);

    if (empty())
    {
        head = dummy;
    }
    else
    {
        Node<T>* itr = head;

        while (itr->next != nullptr)
        {
            itr = itr->next;
        }

        itr->next = dummy;
    }
}

template<typename T>
void LinkedList<T>::insert_node(Node<T>* ancestor, T data)
{
    Node<T>* temp = ancestor->next;
    Node<T>* dummy = new Node<T>(data);
    ancestor->next = dummy;
    dummy->next = temp;
}

template<typename T>        
void LinkedList<T>::delete_front()
{
    if (!empty())
    {
        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
        }
        else
        {
            Node<T>* dummy = head->next;
            delete head;
            head = dummy;   
        }
    }
}

template<typename T>
void LinkedList<T>::delete_back()
{
    if (!empty())
    {
        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
        }
        else
        {
            Node<T>* dummy = head;

            while (dummy->next->next != nullptr)
            {
                dummy = dummy->next;
            }

            delete dummy->next;
            dummy->next = nullptr;       
        }
    }
}

template<typename T>
void LinkedList<T>::delete_node(T data)
{
    if (!empty())
    {
        Node<T>* target_node = find(data);

        Node<T>* dummy = head;

        while (dummy->next != nullptr && dummy->next != target_node)
        {
            dummy = dummy->next;
        }

        Node<T>* target_node_next = dummy->next->next;
        delete dummy->next;
        dummy->next = target_node_next;
    }
}

template<typename T>        
Node<T>* LinkedList<T>::find(T data)
{
    if (!empty())
    {
        Node<T>* temp = head;
        
        while (temp->next != nullptr)
        {
            if (temp->data == data)
            {
                return temp;
            }
            else
            {
                temp = temp->next;
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

    if (empty())
    {
        cout << "Empty";
    }
    else
    {
        Node<T>* temp = head;
        cout << temp->data;

        while(temp->next != nullptr)
        {
            temp = temp->next;
            cout << " -> " << temp->data;
        }
    }

    cout << endl;
}

#endif