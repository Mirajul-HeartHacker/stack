#include<bits/stdc++.h>
using namespace std;

int stack1 [10];
int size1 = 10;
int top = -1;

int isFull()
{
    if (top== size1 -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty ()
{
    if(top== -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int peek()
{
    if (!isEmpty ())
    {
        return stack1[top];
    }
    else
    {
        cout << "The stack is Empty.";
        return -1;
    }
}

void push(int x)
{
    if (!isFull())
        {
            top++;
            stack1[top]=x;
        }
        else
            {
                cout<< "stack is full";
            }
}

int pop()
{
    if (!isEmpty())
    {
        int x= stack1[top];
        top--;
        return x;
    }
    else
    {
        cout<< "The stack is empty";
        return -1;
    }
}

int main ()
{
    push(5);
    push(12);
    push(13);
    pop();


    cout <<peek();
}
