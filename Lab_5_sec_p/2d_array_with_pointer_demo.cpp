#include<iostream>
using namespace std;

int main()
{
    int arr[2][2];

    int *ptr;

    ptr=&arr[0][0];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>*ptr;
            ptr++;
        }
    }


    cout<<"Printing the array"<<endl;
    ptr=&arr[0][0];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<*ptr<<" ";
            ptr++;
        }

        cout<<endl;
    }
}
