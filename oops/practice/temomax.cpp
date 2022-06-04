#include<iostream>
using namespace std;


template <class T>
void max(T[]);
int main()
{

    int arr[5];

    cout<<"\nInput 5 elements in any order : "<<endl;

    for(int i =0; i<5; i++)
    {
        cin>>arr[i];
    }

    max(arr);





    return 0;
}

template <class T>
void max(T arr[])
{

    int m = arr[0];

    for(int i =0; i<5; i++)
    {

        if(m<arr[i])
        {
            m = arr[i];
        }
    }

    cout<<"\nThe max  is "<<m<<endl;

}