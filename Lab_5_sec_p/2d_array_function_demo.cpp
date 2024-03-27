#include<iostream>
using namespace std;

void printArray(int *brr, int r, int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++ )
        {
            cout<<*brr<<" ";
            brr++;

        }

        cout<<endl;

    }

}

int* addElement(int *brr, int r, int c, int value)
{
    int *temp=brr;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            *brr+=value;
            brr++;
        }

    }

    return temp;

}

int main()
{
    int arr[2][2];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"printing the original array"<<endl;
    int *ptr=&arr[0][0];
    printArray(ptr, 2,2);

    int *ptr1=addElement(ptr,2,2,5);


    cout<<endl<<"printing the array after adding 5 with all element"<<endl;

    printArray(ptr1, 2, 2);


    int *ptr2=addElement(ptr,2,2,10);

    cout<<endl<<"printing the array after adding 10 with all element"<<endl;

    printArray(ptr2,2,2);

    return 0;

}

