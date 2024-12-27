#include<iostream>
using namespace std;


bool printmaxnum( int arr[][3], int rows , int column, int key)
{
    for( int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
             int ans = arr[i][j];
            if( ans == key)
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[3][3];
    int rows =3;
    int column =3;

    cout<<" Input Elements:" << endl;
    for( int i=0; i<rows; i++)
    {
        for( int j=0; j<column; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<" Printing Elements :" <<endl;

    for( int i=0; i<rows; i++)
    {
        for( int j=0; j<column; j++)
        {
            cout<< arr[i][j] << " ";
        }
        cout<<endl;
    }

    int key;
    cout<<"  Enter  the find the number in the array:";
    cin>>key;


    if(printmaxnum(arr,rows,column,key))
    {
        cout<<"Found:";
    }
    else
    {
        cout<<"Not Found:";
    }
    return 0;
}