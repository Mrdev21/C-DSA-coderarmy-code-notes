#include<iostream>
using namespace std;

int main()
{

    //size of variables
    //int arr[5] = {1, 2, 3, 4, 5};
    //int a;
    //float a;
    //char a;
    //bool a;
    //cout<<sizeof(a)<<" ";

     //size of arr
    int arr[5] = {1, 2, 3, 4, 5};
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;


    return 0;
}