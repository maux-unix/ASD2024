#include<bits/stdc++.h>
#include<list>
using namespace std;

template <class T>
class Queue
{
private:
    list<T> pool;

public:
    Queue() {}
    void clear()
    {
        pool.clear();
    }
    void enqueue(T value)
    {
        pool.push_back(value);
    }
    T dequeue()
    {
        if (!pool.empty())
        {
            T temp = pool.front();
            pool.pop_front();
            return temp;
        }
        else
        {
            cout << "Queue Empty!" << endl;
            return -1;
        }
    }
    T peek()
    {
        if (!pool.empty())
        {
            return pool.front();
        }
        else
        {
            cout << "Queue Empty!" << endl;
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
    Queue<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    cout << q.dequeue() << endl;
    cout << q.peek() << endl;
    q.display();
    q.clear();
    q.display();
    return 0;
}