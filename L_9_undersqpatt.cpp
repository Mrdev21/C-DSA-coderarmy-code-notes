#include<iostream>
using namespace std;

int main()
{
    int row, col, n;
    cout<<"Enter your input: ";
    cin>>n;

    for(row=1; row<=n; row=row+1)
    {
        //print*
        for(col=1; col<=row; col=col+1)
        {
            cout<<"* ";

        }
        for(col=1; col<=2*n-2*row; col=col+1)
        {
            cout<<" ";
        }
        //print
        for(col=1; col<=row; col=col+1)
        {
            cout<<"* ";

        }
        cout<<endl;

    }
}
