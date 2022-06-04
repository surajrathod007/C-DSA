#include<stdio.h>
#include<conio.h>
#include<iostream>
#define size 4

int top = -1;
int arr[size];
using namespace std;

int main(){




    return 0;
}


void push(int val){

    if(top==size-1){
        cout<<"stack is full"<<endl;
    }else{

        ++top;
        arr[top] = val;

    }
}

void pop(){

    if(top==size-1){
        cout<<"stack is full"<<endl;
    }else{


        cout<<"Poped element is "<<arr[top]<<endl;
        top--;
        

    }
}