#include<iostream>
#include<limits.h>
using namespace std;

int printmin(int arr[][3], int rows, int column)
{
    int mini = INT_MAX;

    for( int i=0; i<rows; i++)
    {
        for( int j=0; j<column; j++)
        {
            if( arr[i][j]<mini)
            {
                mini = arr[i][j];
            }
        }
    }
    return mini;
}

int main()
{
    int arr[3][3];
    int rows =3;
    int column =3;

    cout<<" inputs elements:" <<endl;
    for( int i=0; i<rows; i++)
    {
        for( int j=0; j<column; j++)
        {
            cin>>arr[i][j];
        }
    }


    cout<<" Input Elements Is:" << endl;
    for( int i=0; i<rows; i++)
    {
        for( int j=0; j<column; j++)
        {
            cout<< arr[i][j];
        }
        cout<<endl;
    }

    cout<<" Minimun Number Is:" << printmin(arr,rows,column);

}