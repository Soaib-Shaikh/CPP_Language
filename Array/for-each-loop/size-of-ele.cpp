#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};

    for(int i=0;i<5;i++)
    {
        cout<<sizeof arr[i]<<endl;
    }

    cout<<"size of the array is: "<<sizeof arr / sizeof(arr[0]);

    return 0;
}