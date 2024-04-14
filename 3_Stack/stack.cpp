#include<bits/stdc++.h>
using namespace std;

template <class T>
class Stack
{
private:
    int arr[100];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void clear()
    {
        top = -1;
    }
    void push(T value)
    {
        if (top < 99)
        {
            arr[++top] = value;
        }
        else
        {
            cout << "Stack Full!" << endl;
        }
    }
    T pop()
    {
        if (top > -1)
        {
            return arr[top--];
        }
        else
        {
            cout << "Stack Empty!" << endl;
            return -1;
        }
    }
    T peek()
    {
        if (top > -1)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack Empty!" << endl;
            return -1;
        }
    }
    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    cout << s.pop() << endl;
    s.display();
    cout << s.peek() << endl;
    s.display();
    s.clear();
    s.display();
    return 0;
}