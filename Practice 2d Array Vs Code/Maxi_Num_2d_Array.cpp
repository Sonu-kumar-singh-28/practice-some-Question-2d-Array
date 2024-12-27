#include<iostream>
#include<limits.h>
using namespace std;


int printmaxi( int arr[][3] , int rows, int column)
{
    int maxi = INT_MIN;
    for( int i=0; i<rows; i++)
    {
        for( int j=0; j<column; j++)
        {
            if( arr[i][j]>maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}
int main()
{
    int arr[3][3];
    int rows=3;
    int column =3;

    cout<<"Inputs elements is :" <<endl;
    for( int i=0; i<rows; i++)
    {
        for( int j=0; j<column; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<" Printin Elements is:" <<endl;
    for( int i=0; i<rows; i++)
    {
        for( int j=0; j<column; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }

   cout<<" Maxi Number Is:"<<  printmaxi(arr, rows,column);
}