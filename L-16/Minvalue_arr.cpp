#include<iostream>
using namespace std; 

int main()
{
    /*int arr[5] = {2,3,4,5,6};
    int ans = INT_FAST8_MAX;
    //Min value
    for(int i=0; i<5; i++)
    {
        if(arr[i]<ans)
        ans = arr[i];

    }*/
    int arr[5] = {2,3,4,5,6};
    int ans = INT_FAST8_MIN;
    //Min value
    for(int i=0; i<5; i++)
    {
        if(arr[i]>ans)
        ans = arr[i];

    }

    cout<<ans;
    return 0;

}