#include<iostream>
using namespace std;



void count(int arr[],int n)
{

    bool visited[n] = {false};

    for(int i = 0; i<n; i++)
    {
        int count = 1;
        if(visited[i] == true)
        continue;
        visited[i] = true;

        for(int j = i +1; j<n; j++ ){

            if(arr[i]==arr[j])
            {
                count++;
                visited[j] = true;
            }
        }

        cout << arr[i] << " " << count << endl;

    }



}
int main()
{


    int arr[5] = {1,1,2,2,3};

    count(arr,5);






    return 0;
}