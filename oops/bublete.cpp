#include<iostream>
using namespace std;

template <class T>
void sort(T[]);

int main()
{

    int arr[5];
    cout<<"\nEnter 5 elements "<<endl;

    for(int i =0; i<5; i++)
    {
        cin>>arr[i];
    }
    sort(arr);


    cout<<"\nThe sorted array is below : "<<endl;

    for(int i =0; i<5; i++)
    {

        cout<<" "<<arr[i];
    }
    

}


template <class T>
void sort(T arr[])
{

    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }



}