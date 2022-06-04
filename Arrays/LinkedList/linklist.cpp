#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;


void insert(int x);
void show();

struct node{

    int data;
    struct node *link;
}*Header;


int main()
{
    //cout<<"hello";
    insert(5);
    insert(7);
    show();

    return 0;
}

void insert(int x)
{

    struct node *tmp;
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->data = x;
    tmp->link = NULL;

    if(Header==NULL){
       // cout<<"Headr is null";
        Header = tmp;
    }else{

        cout<<"Else part";
        tmp->link = Header;
        Header = tmp;
    }
}


void show(){

    struct node *ptr;

    if(Header == NULL){

        cout<<"Empty";
    }else{

        ptr = Header;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr= ptr->link;
        }
    }
}