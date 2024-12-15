#include <iostream>

#include "Queue.h"
using namespace std;

int main()
{
    Queue Q1;
    Q1.add(5);
    Q1.add(19);
    Q1.add(11);
    Q1.add(5);
    Q1.add(19);
    Q1.display();
    Q1.remove();
    Q1.remove();
    cout << endl << endl;
    Q1.display();
    Q1.add(53);
    Q1.display();
 
    return 0;
}