#include<iostream>
using namespace std;



int sumArray(int arr[],int size)
{

    //base case
    if(size == 1)
    {
        return arr[0];
    }


    int sum = arr[0] + sumArray(arr+1, size -1);

    
    return sum;

}

int main()
{



    int arr[5] = {1,2,3,4,5};


    int sum = sumArray(arr,5);

    cout<<"Sum of array is = "<<sum<<endl;







    return 0;
}