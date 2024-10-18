//
// Created by kali on 10/18/24.
//

#include <iostream>
#include <stack>
#include <stdlib.h>

using namespace std;

class Stack
{
    int stk[5];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int x)
    {
        if (top > 4)
        {
            std::cout << "Stack Overflow";
            return;
        }
        stk[++top] = x;
        cout << "Pushed " << x << endl;
    }

    void pop()
    {
        if (top < 0)
        {
            cout << "Stack Underflow";
            return;
        }
        cout << "Popped " << stk[top--] << endl;
    }

    void display()
    {
        if (top < 0)
        {
            cout << "Stack Empty";
            return;
        }
        for (int i = top; i >= 0; i--)
            cout << stk[i] << " ";
    }

};

int main()
{
    int ch;
    Stack st;
    while (1)
    {
        cout << "Enter Choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1: cout << "Enter Number: ";
            cin >> ch;
            st.push(ch);
            break;
        case 2: st.pop();break;
        case 3: st.display();
        case 4: exit(0);
        }
    }
    return 0;
}

