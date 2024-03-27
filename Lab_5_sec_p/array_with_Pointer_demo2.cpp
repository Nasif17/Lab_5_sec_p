#include<iostream>
using namespace std;

int main()
{

    int arr[5];
    int *ptr;

    ptr=&arr[0];

    for(int i=0;i<5;i++)
    {
        cin>>*ptr;
        ptr++;
    }

    ptr=&arr[0];

    for(int i=0;i<5;i++)
    {
        *ptr=*ptr+5;
        ptr++;
    }

    cout<<"printing the array"<<endl;
    ptr=&arr[0];
    for(int i=0;i<5;i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
}
