#include<iostream>
using namespace std;

// Sum of Two Arrays

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;

    cout<<"Enter array A"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"Enter a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }

    cout<<endl<<"Enter array B"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"Enter b["<<i<<"]["<<j<<"]: ";
            cin>>b[i][j];
        }
    }

    cout<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout<<endl<<"Array A "<<endl;;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"Array B "<<endl;;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"Sum of Two Arrays "<<endl;;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}