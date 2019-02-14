#ifndef NODE_H_
#define NODE_H_

template<typename T>
class Node
{
    private:
        T data;
        Node* next;
    
    public:
        Node();
        Node(T& d);

    template<typename U> friend class LinkedList;
};

template<typename T>
Node<T>::Node() : data(0), next(nullptr)
{
}

template<typename T>
Node<T>::Node(T& d) : data(d), next(nullptr)
{
}

#endif