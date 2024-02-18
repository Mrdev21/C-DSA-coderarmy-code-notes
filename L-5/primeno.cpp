#include<iostream>
using namespace std;

int main()
{
    int n, i;
    cout<<"enter your no: ";
    cin>>n;

    if(n<2)
    {
        cout<<"Not prime";

    }
    else{

        for(i=2; i<n; i=i+1)
        {
            if(n%i==0)
            {
                cout<<"Not Prime no";
                return 0;

            }
            
        }
        cout<<"prime no";
        return 0;


    }


}