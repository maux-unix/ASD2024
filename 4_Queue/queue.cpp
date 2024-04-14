#include<bits/stdc++.h>
using namespace std;   

template <class T, int size>
class Queue
{
private:
    T arr[size];
    int front;
    int rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }
    void clear()
    {
        front = -1;
        rear = -1;
    }
    void enqueue(T value)
    {
        if (rear < size - 1)
        {
            arr[++rear] = value;
            if (front == -1)
            {
                front = 0;
            }
        }
        else
        {
            cout << "Queue Full!" << endl;
        }
    }
    T dequeue()
    {
        if (front > -1)
        {
            T temp = arr[front];
            if (front == rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front++;
            }
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
        if (front > -1)
        {
            return arr[front];
        }
        else
        {
            cout << "Queue Empty!" << endl;
            return -1;
        }
    }
    void display()
    {
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue<int, 5> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    cout << q.dequeue() << endl;
    q.display();
    cout << q.peek() << endl;
    q.display();
    q.clear();
    q.display();
    return 0;
}