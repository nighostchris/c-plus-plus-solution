#include <iostream>
#include "node.h"
#include "linkedlist.h"

using namespace std;

void linked_list_demo()
{
    LinkedList<int>* ll = new LinkedList<int>();
    ll->insert_front(5);
    ll->traverse();
}

int main()
{
    linked_list_demo();

    return 0;
}