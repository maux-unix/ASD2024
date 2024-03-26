#include<bits/stdc++.h>
#include<vector>
using namespace std;

template <class T, int capacity>
class Stack
{
private:
    vector<T> pool;

public:
    Stack() {}
    void clear()
    {
        pool.clear();
    }
    void push(T value)
    {
        if (pool.size() < capacity)
        {
            pool.push_back(value);
        }
        else
        {
            cout << "Stack Full!" << endl;
        }
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
        for (int i = 0; i < pool.size(); i++)
        {
            cout << pool[i] << " ";
        }
        cout << endl;
    }
    bool isEmpty()
    {
        return pool.empty();
    }
    bool isFull()
    {
        return pool.size() >= capacity;
    }
};

int main()
{
    Stack<int, 5> stk;
    int pilihan;
    while (1)
    { 
        system("clear");
        cout << "Stack: ";
        stk.display();
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Clear" << endl;
        cout << "5. Exit" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            int value;
            cout << "Masukkan nilai: ";
            cin >> value;
            stk.push(value);
            break;
        case 2:
            cout << "Pop: " << stk.pop() << endl;
            break;
        case 3:
            cout << "Peek: " << stk.peek() << endl;
            break;
        case 4:
            stk.clear();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "Pilihan tidak ada!" << endl;
            break;
        }
        system("read -p 'Press Enter to continue...' var");
    }
    return 0;
}