#include<iostream>
using namespace std;

int main()
{


/*

    7 , 4, 1
    8 , 5, 2
    9 , 6, 3

*/

    int row = 3;
    int col = 3;
    int endCol = col-1;
    int startCol = 0;
    int endRow = row-1;
    int startRow = 0;

    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int ans[3][3];
    int ans1[3][3];
    cout<<"Printing the array "<<endl;


    for(int i =0; i<3; i++)
    {

        for(int j = 0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
    }



    cout<<"Matrix transpose"<<endl;

    for(int col = 0; col<3; col++)
    {
        for(int row = 0; row<3; row++)
        {
            ans[col][row] = arr[row][col];
        }
    }

    for(int i =0; i<3; i++)
    {

        for(int j = 0; j<3; j++)
        {
            cout<<ans[i][j]<<" ";
        }

        cout<<endl;
    }


    cout<<"Answer is "<<endl;
    for(int i = 0; i<3; i++)
    {

        for(int j = endCol; j>=0; j--)
        {
            cout<<ans[i][j]<<" ";
        }

        cout<<endl;
    }


    cout<<"Now using another mwthod"<<endl;

    for(int sCol = 0; sCol<3;sCol++)
    {
        for(int r = endRow; r>=0; r--)
        {
            ans1[r][sCol] = arr[sCol][r];
        }
    }


    for(int i =0; i<3; i++)
    {

        for(int j = 0; j<3; j++)
        {
            cout<<ans1[i][j]<<" ";
        }

        cout<<endl;
    }

    return 0;
}
