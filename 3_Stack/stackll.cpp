#include<bits/stdc++.h>
#include<list>
using namespace std;

template <class T>
class Stack
{
private:
    list<T> pool;

public:
    Stack() {}
    void clear()
    {
        pool.clear();
    }
    void push(T value)
    {
        pool.push_back(value);
    }
    T pop()
    {
        if (!pool.empty())
        {
            T temp = pool.back();
            pool.pop_back();
            return temp;
        }
        else
        {
            cout << "Stack Empty!" << endl;
            return -1;
        }
    }
    T peek()
    {
        if (!pool.empty())
        {
            return pool.back();
        }
        else
        {
            cout << "Stack Empty!" << endl;
            return -1;
        }
    }
    void display()
    {
        for (auto i = pool.begin(); i != pool.end(); i++)
        {
            cout << *i << " ";
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