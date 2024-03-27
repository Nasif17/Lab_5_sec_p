#include<iostream>
using namespace std;

/*return_type nameoffunction()
{

}*/

void Sum(float num1, float num2)
{
    float sum=num1+num2;
    cout<<"The sum is:"<< sum<<endl;
}

float doSum(float num1, float num2)
{
    float sum=num1+num2;
    return sum;
}


int main()
{
    float a=10.1, b=20.0, c=30.2, d=40.0, e=50.5;
    float sum=doSum(a,b);
    cout<<"The sum is:"<<sum<<endl;
    sum=doSum(b,c);
    cout<<"The sum is:"<<sum<<endl;
    sum=doSum(c,d);
    cout<<"The sum is:"<<sum<<endl;
    sum=doSum(d,e);
    cout<<"The sum is:"<<sum<<endl;

    Sum(a,b);
    Sum(b,c);
    Sum(c,d);
    Sum(d,e);
    return 0;
}
