#include<iostream>
using namespace std;

int Sum(int m, int n)  //function declare
{
    int ans = m+n;
    return ans;
    
}

int Mul(int m, int n)
{
    int ans = m*n;
    return ans;
}


void fun()
{
    cout<<"HEllo coder Army";

}


int main()
{
    int a, b;
    cout<<"Enter 2 Number: ";
    cin>>a>>b;

    //Functio call

    cout<<Sum(a,b);
    cout<<endl;
    cout<<Mul(a,b);
    cout<<endl;
    fun();
}