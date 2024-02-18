#include<iostream>
using namespace std;

int mian()
{
    int n, pow, i,num;
    cout<<"Enter your number: ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>pow;

    num=n;


    for(i=1; i<pow; i=i+1)
    {
        num=num*n;

    }
    cout<<num;


}