#include<iostream>
using namespace std;

void printArray(int *brr, int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<*brr<<" ";
        brr++;
    }

}

int* addElement(int *brr, int s, int value)
{
    int *temp=brr;

    for(int i=0;i<s;i++)
    {
        *brr+=value;
        brr++;
    }

    return temp;

}

int main()
{
    int arr[5];

    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    cout<<"printing the original array"<<endl;
    int *ptr=&arr[0];
    printArray(ptr, 5);

    int *ptr1=addElement(ptr, 5, 5);


    cout<<endl<<"printing the array after adding 5 with all element"<<endl;

    printArray(ptr1, 5);


    int *ptr2=addElement(ptr, 5, 10);

    cout<<endl<<"printing the array after adding 10 with all element"<<endl;

    printArray(ptr2, 5);

    return 0;


}
