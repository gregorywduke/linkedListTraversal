#include <iostream>
#include <StringList.h>

using namespace std;

StringList::StringList()
{
    //creates empty list
    head = NULL;
}

StringList::~StringList()
{
    // deallocates all nodes in list
    StringNode *x; // Traversal pointer
    StringNode *y; // Saves next node

    x = head;

    while (x)
    {
        y = x->next;
        delete x;
        x = y;
    }
}

int StringList::count()
{
    //returns total number of strings in list, duplicates counted as well
    StringNode *x = head;
    int count = 0;

    if ( head != NULL )
    {
        do {
            x = x->next;
            count++;
        } while ( x != head )
    }

    return count;
}

void StringList::push_front( string arr )
{
    StringNode *app = new StringList; //Creates new node

    app->data = arr;    // Assigns new node's data to string passed
    app->next = head;   // Assigns next of new node to head
    head = app;         // Reassigns head to point to new node instead

}

void StringList::push_back( string arr )
{
    StringNode *app = new StringNode;

    app->data = arr;
    app->next = NULL;

    StringNode *x = head;
    while ( p->next !=NULL )
    {
        x = x->next;
	x->next = arr;
    }

}

void StringList::pop_front()
{
    StringNode *temp = head;
    while (temp)
    {
        head = head->next;
        delete temp;
    }


}

void StringList::display()
{
    StringNode *temp = new StringNode;
    temp = head;
    while ( temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

}

StringList::StringNode * StringList::maximum()
{
    StringNode *x, *y;
    x = head;
    y = head->next;

    if ( x == NULL )
    {
        return NULL:
    }

    if ( y == NULL )
    {
        return x;
    }

    while (x)
    {

    }
}

void StringList::remove(StringNode *m)
{
    StringNode *x = head;
    if ( m == x )
    {
        head = m->next;
        delete m;
    }
    else
    {
        while (x)
        {
            if ( x->next == m )
            {
                x->next = m->next;
                delete m;
            }
            x = x->next;
        }
    }
}

void StringList::sort()
{
    StringNode *top = NULL;
    StringNode *x = head;
    StringNode *y;

    while (p)
    {
        y = maximum();
        StringNode *newNode = new StringNode;
        newNode->data = y->data;
        newNode->next = top;
        top = newNode;

        remove(y);
    }

    head = top;
}
