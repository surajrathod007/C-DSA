#include<iostream>
using namespace std;



bool search(int arr[],int size , int key)
{


    //Base Case
    if(size == 0)
    {
        return false;
    }

    if(arr[0] == key)
    {
        return true;
    }else{

        bool ans = search(arr+1,size-1,key);
        return ans;
    }

    


}

int main()
{


    int arr[5] = {1,2,3,4,5};
    int key = 3;

    bool ans = search(arr,5,key);

    if(ans)
    {
        cout<<"True "<<endl;
    }else{
        cout<<"False"<<endl;
    }









    return 0;
}