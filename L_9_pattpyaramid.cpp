#include<iostream>
using namespace std;

int main()
{
    int row, col, n;
    cout<<"Enter your number: ";
    cin>>n;

    for(row=1; row<=n; row=row+1)
    {
        for(col=1; col<=n-row; col=col+1)
        {
            cout<<"  ";

        }
        for(col=1; col<=2*row-1; col=col+1)
        {
            cout<<"*"<<" ";

        }
        cout<<endl;
    }
}
