#include <iostream>
#include "node.h"
#include "linkedlist.h"

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
}

int main()
{
    linked_list_demo();

    return 0;
}