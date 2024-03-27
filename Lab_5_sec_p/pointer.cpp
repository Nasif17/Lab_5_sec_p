#include<iostream>
using namespace std;

int main()
{

    int *p;
    int x=10;
    p=&x;

    cout<<"the value of variable x is:"<<x<<endl;
    cout<<"the address of variable x is:"<<&x<<endl;
    cout<<"the address of variable x using the pointer is:"<<p<<endl;
    cout<<"the value of variable x using the pointer is:"<<*p<<endl;
}
