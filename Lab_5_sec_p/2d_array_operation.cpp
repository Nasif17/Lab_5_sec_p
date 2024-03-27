#include<iostream>
using namespace std;

int main()
{

    int arr[2][2];
    int brr[2][2];
    int crr[2][2];

    cout<<"input of first matrix"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }


    cout<<"input of second matrix"<<endl;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>brr[i][j];
        }
    }
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            crr[i][j]=0;
        }
    }



    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            
            for (int k=0;k<2;k++)
            {
                crr[i][j]+=arr[i][k]*brr[k][j];
            }
        }
    }


    cout<<"printing the result matrix"<<endl;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<crr[i][j]<<" ";
        }
        cout <<endl;
    }

}
