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
int main()
{
    int arr[3];

    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }

    cout<<"Printing the array"<<endl;
    int *ptr=&arr[0];

    printArray(ptr, 3);

    for(int i=0;i<3;i++)
    {
        arr[i]+=5;
    }

    cout<<endl<<"Printing the array"<<endl;

    printArray(ptr, 3);

}
