#include<iostream>
using namespace std;

struct Person{

string name;
int age;

};


int main()
{
    /*Person p1,p2,p3,p4;
    p1.name="Mr. xyz";
    p1.age=10;

    p2.name="Mr. fgh";
    p2.age=20;

    cout<<"------person information--------"<<endl;
    cout<<"name: "<<p1.name<<endl;
    cout<<"age: "<<p1.age<<endl;
    cout<<"------person information--------"<<endl;
    cout<<"name: "<<p2.name<<endl;
    cout<<"age: "<<p2.age<<endl;*/

    Person arr[5];
    for(int i=0;i<5;i++)
    {
        cout<<"please input the name of person:"<<i+1<<endl;
        cin>>arr[i].name;
        cout<<"please input the age of person:"<<i+1<<endl;
        cin>>arr[i].age;
    }

     for(int i=0;i<5;i++)
    {
        cout<<endl<<"The information of person:"<<i+1<<endl;
        cout<<"Name: "<<arr[i].name<<endl;
        cout<<"Age: "<<arr[i].age<<endl;

    }

    return 0;
}
