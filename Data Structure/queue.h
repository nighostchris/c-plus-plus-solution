#ifndef QUEUE_H_
#define QUEUE_H_

#include<vector>

template<typename T>
class Queue
{
    private:
        vector<T> container;

    public:
        Queue();

        void push(const T& data);
        T pop();
        T front();
        T back();

        bool empty();
        int size();
        void traverse();
};

template<typename T>
Queue<T>::Queue()
{
}

template<typename T>
void Queue<T>::push(const T& data)
{
    container.push_back(data);
}

template<typename T>
T Queue<T>::pop()
{
    T dummy = front();
    container.erase(container.begin());
    return dummy;
}

template<typename T>
T Queue<T>::front()
{
    return container.front();
}

template<typename T>
T Queue<T>::back()
{
    return container.back();
}

template<typename T>
bool Queue<T>::empty()
{
    return container.empty();
}

template<typename T>
int Queue<T>::size()
{
    return container.size();
}

template<typename T>
void Queue<T>::traverse()
{
    cout << "Data in Queue: ";
    
    for (typename vector<T>::iterator itr = container.begin(); itr < container.end(); itr++)
    {
        if (itr == container.begin())
        {
            cout << *itr;
        }
        else
        {
            cout << " -> " << *itr;      
        }
    }
}

#endif