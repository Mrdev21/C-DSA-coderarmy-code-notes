#include<iostream>
using namespace std;

bool Prime(int n)
{
    if(n<2)
    return 0;

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        return 0;

    }

    return 1;

}

int Fact(int n)
{
    int ans =1;
    for(int i=1; i<=n; i++)
    ans=ans*i;

    return ans;
}


int main()
{
    int a, b;
    cout<<"Enter the Number: ";
    cin>>a>>b;

    //A is Prime or not
    cout<<Prime(a)<<endl;
    //A ka Factorial
    cout<<Fact(a)<<endl;
    //B is Prime or not
    cout<<Prime(b)<<endl;
    //B ka factorial
    cout<<Fact(b)<<endl;
    //B-A is Prime or Not
    cout<<Prime(b-a)<<endl;
    //B-A is Fact or not
    cout<<Fact(b-a)<<endl;




}