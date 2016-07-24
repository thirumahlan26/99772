#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include<iostream>
#include<cstdlib>
#include <string>

using namespace std;
//include "Stack.h"

/*
 * Node Declaration
 */
struct node
{
    int info;
    struct node *link;
}*top;

/*
 * Class Declaration
 */
class stack
{
    public:
        node *push(node *, int);
        node *pop(node *);
        void display(node *);
        stack()
        {
            top = NULL;
        }
};

/*
 * Push
 */
node *stack::push(node *top, int item)
{
    node *tmp;
    tmp = new (struct node);
    tmp->info = item;
    tmp->link = top;
    top = tmp;
    return top;
}

/*
 * Pop
 */
node *stack::pop(node *top)
{
    node *tmp;
    if (top == NULL)
        cout<<"\nStack is Empty\n\n"<<endl;
    else
    {
        tmp = top;
        cout<<"\nElement Popped : "<<tmp->info<<endl;
        top = top->link;
        free(tmp);
    }
    return top;
}

/*
 * Display the Stack
 */
void stack::display(node *top)
{
    node *ptr;
    ptr = top;
    if (top == NULL)
        cout<<"\nSorry the Stack is empty\n\n"<<endl;
    else
    {
        cout<<"\nElements of the Stack :";
        while (ptr != NULL)
        {
            cout<<ptr->info<<endl;
            ptr = ptr->link;
        }
    }
}


#endif // STACK_H_INCLUDED


