#include<iostream>
using namespace std;



int columnsum(int arr[][4] , int rows , int column)
{
    for( int i=0; i<rows; i++)
    {
        int ans =0; 
        for( int j=0; j<column; j++)
        {
            ans = ans + arr[j][i];
        }
        cout<<" The  column Sum of the array: " << ans << endl;
    }
}

int main()
{
    int arr[4][4];
    int rows=4;
    int column =4;

    cout<<" inputs elements :" << endl;
    for( int i=0; i<rows; i++)
    {
        for( int j=0; j<column; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"The elements are:" << endl;

    for( int i=0; i<rows; i++)
    {
        for( int j=0; j<column; j++)
        {
            cout<<arr[i][j];
        }
        cout<< endl;
    }

    columnsum( arr, rows, column);
}