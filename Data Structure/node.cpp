#include "node.h"

using namespace std;

template<typename T>
Node<T>::Node() : data(0), next(NULL)
{
}

template<typename T>
Node<T>::Node(T d) : data(d), next(NULL)
{
}