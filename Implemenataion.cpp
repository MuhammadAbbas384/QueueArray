#include "Queue.h"
#include <iostream>
#include <conio.h>
using namespace std;

Queue::Queue()
{
    capacity = 5;
    count = 0;
    start = -1;
    end = -1;
    data = new int[capacity];
}

bool Queue::isEmpty()
{
    return count == 0;
}

bool Queue::isFull()
{
    return count == capacity;
}

void Queue::add(int value)
{
    if (isEmpty())
    {
        data[end + 1] = value;
        end = end + 1;
        start = start + 1;
        count++;
        cout << "Inserted" << endl;
    }
    else if (count < capacity)
    {
        end = (end + 1) % capacity;
        data[end] = value;
        count++;
        cout << "Successfully inserted" << endl;
    }
    else
    {
        cout << "Queue is full" << endl;
    }
}

void Queue::remove()
{
    if (isEmpty())
    {
        cout << "Empty" << endl;
        return;
    }
    else
    {
        start = (start + 1) % capacity;
        count--;
        cout << "Removed" << endl;
    }
}

void Queue::display()
{
    if (start == -1)
    {
        cout << "Empty" << endl;
    }
    else if (end < start)
    {
        for (int i = start; i < capacity; i++)
        {
            cout << data[i] << endl;
        }
        for (int i = 0; i <= end; i++)
        {
            cout << data[i] << endl;
        }
    }
    else
    {
        for (int i = start; i <= end; i++)
        {
            cout << data[i] << endl;
        }
    }
}
