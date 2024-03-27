#include<iostream>
using namespace std;

int main()
{

    int arr[5][5];

    int *ptr;

    ptr=&arr[0][0];

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>*ptr;
            ptr++;
        }
    }

    ptr=&arr[0][0];

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            *ptr=*ptr+5;
            ptr++;
        }
    }

    cout<<"printing the array"<<endl;

    ptr=&arr[0][0];

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<*ptr<<" ";
            ptr++;
        }

        cout<<endl;
    }
}
