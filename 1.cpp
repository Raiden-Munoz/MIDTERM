//Create a C++ program that allows the user to enter 10 integers and display these integers from the last entered to the first entered integer using array.

#include<iostream>
using namespace std;
int main()
{
int a[10];
int ctr;
for(ctr=0;ctr<=9;ctr++)
{
    cout<<"Enter any Number= ";
    cin>>a[ctr];
}
cout<<"OUTPUT IN REVERSE ORDER"<<endl;
for(ctr=9;ctr>=0;ctr--)
    cout<<a[ctr]<<endl;
return 0;
}
