
#pragma once
#include<iostream>
using namespace std;

class Queue
{
private:
    int capacity; 
    int count; 
    int start;  
    int end;   
    int* data;   

public:
    Queue();
    void add(int);      
    void remove();      
    bool isEmpty();
    bool isFull();
    void display();     
};