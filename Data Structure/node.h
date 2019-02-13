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
        Node(T d);

    friend class LinkedList;
};

#endif