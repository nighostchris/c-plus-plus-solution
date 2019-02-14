#include <iostream>
#include "node.h"
#include "linkedlist.h"
#include "stack.h"

using namespace std;

void linked_list_demo()
{
    LinkedList<int>* ll = new LinkedList<int>();
    ll->insert_front(1);
    ll->traverse();
    ll->insert_back(3);
    ll->traverse();
    ll->insert_back(5);
    ll->traverse();
    ll->insert_node(ll->find(1), 2);
    ll->insert_node(ll->find(3), 4);
    ll->traverse();
    ll->delete_front();
    ll->traverse();
    ll->delete_back();
    ll->traverse();
    ll->delete_node(3);
    ll->traverse();
}

void stack_demo()
{
    Stack<int>* stack = new Stack<int>();
    stack->push(1);
    stack->push(2);
    stack->push(3);
    stack->traverse();
    stack->pop();
    stack->traverse();
    cout << stack->size() << endl;
}

int main()
{
    //linked_list_demo();
    //stack_demo();

    return 0;
}