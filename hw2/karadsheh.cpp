/*
Farid Karadsheh
CIS 263-02
Xiang cao
1/28/2019
*/
#include "MyStack.h"

/*=== Vector implementation ===*/
void MyStack_vector::push( const int& num )
{
    elements.push_back(num);
}

void MyStack_vector::pop()
{
    // To prevent the segfault from the additional pop.
    if(elements.size())
        elements.pop_back();
    else
        cout << "The stack is now empty! No item is popped!" << endl;
}

int MyStack_vector::top() const
{
    return elements.back();
}

bool MyStack_vector::empty() const
{
    cout << elements.empty() << endl;
    return elements.empty();
}

int MyStack_vector::GetSize() const
{
    return elements.size();
}

/*=== List implementation ===*/
void MyStack_list::push( const int& num )
{
    elements.push_back(num);
}

void MyStack_list::pop()
{
    // To prevent the segfault from the additional pop.
    if(elements.size())
        elements.pop_back();
    else
        cout << "The stack is now empty! No item is popped!" << endl;
}

int MyStack_list::top() const
{
    return elements.back();
}

bool MyStack_list::empty() const
{
    return elements.empty();
}

int MyStack_list::GetSize() const
{
    return elements.size();
}