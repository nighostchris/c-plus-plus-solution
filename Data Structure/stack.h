#ifndef STACK_H_
#define STACK_H_

#include <iostream>
#include <vector>

using namespace std;

template<typename T>
class Stack
{
    private:
        vector<T> container;

    public:
        Stack();

        void push(const T& data);
        T pop();
        T top() const;

        bool empty();
        int size();
        void traverse();
};

template<typename T>
Stack<T>::Stack()
{
}

template<typename T>
void Stack<T>::push(const T& data)
{
    container.push_back(data);
}

template<typename T>
T Stack<T>::pop()
{
    T result = top();
    container.pop_back();
    return result;
}

template<typename T>
T Stack<T>::top() const
{
    return container.back();
}

template<typename T>
bool Stack<T>::empty()
{
    return container.empty();
}

template<typename T>
int Stack<T>::size()
{
    return container.size();
}

template<typename T>
void Stack<T>::traverse()
{
    cout << "Data in Stack: " << endl;
    
    for (typename vector<T>::iterator itr = container.end() - 1; itr >= container.begin(); itr--)
    {
        cout << *itr << endl << "---------------" << endl;
    }
}

#endif