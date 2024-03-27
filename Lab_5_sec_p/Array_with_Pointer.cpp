#include<iostream>
using namespace std;

int main()
{

    int arr[10];

    int *ptr;

    ptr=&arr[0];

    for(int i=0;i<10;i++)
    {
        cin>>*ptr;
        ptr++;
    }

    cout<<"Printing the values of array using the pointer"<<endl;
    ptr=&arr[0];

    for(int i=0;i<10;i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }

    return 0;



}
