#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

void createList(int);
void display();
void insertAtFirst(int x);
void between(int data, int key);
void betweenAfter(int data, int key);

struct node
{

    struct node *llink;
    int data;
    struct node *rlink;
    //struct node *rlink;
}*header;

int main(){


    //header = NULL;
    int n,m,data,key;
    cout<<"How many Nodes Do You Want ?"<<endl;
    cin>>n;

    for(int i = 0; i<n; i++){
        cout<<"\nEnter value bro : ";
        cin>>m;
        createList(m); //it will insert at last 
    }

    cout<<"\nAdd between ? Enter Data : ";
    cin>>data;
    cout<<"\nIn Which between you want ? Enter Key : ";
    cin>>key;
    between(data,key);

    cout<<"\nEnter after data value : ";
    cin>>data;
    cout<<"\nEnter Key Value : ";
    cin>>key;
    between(data,key);
    
    cout<<"\nIm adding 50 at first  okay ;)"<<endl;
    //createList(5);
    //createList(8);

    insertAtFirst(50); //insert at first ;)
    display(); //dsiplay your node 



    return 0;
}


void createList(int x){

    struct node *ptr , *tmp;
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->data = x;
    tmp->llink = NULL;
    tmp->rlink = NULL;

    if(header == NULL){
        header = tmp;
    }else{

        ptr = header;
        while(ptr->rlink!=NULL){

            ptr = ptr->rlink;

        }

        ptr->rlink = tmp;
        tmp->llink = ptr;
    }
    
}


void display(){

    struct node* ptr;
    if(header==NULL){
        cout<<"List Is Null"<<endl;
    }

    ptr = header;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->rlink;
    }
}

void insertAtFirst(int x){

    struct node *ptr, *tmp;
    tmp = (struct node*)malloc(sizeof(struct node));
    tmp->data = x;
    tmp->llink = NULL;
    tmp->rlink = NULL;

    if(header == NULL){
        header = tmp;
    }else{

        tmp->rlink = header;
        header->llink = tmp;
        header = tmp;
    }
}

void between(int data, int key){

    struct node *ptr,*tmp,*ptr1;
    tmp = (struct node*)malloc(sizeof(struct node));

    tmp->data = data;
    tmp->llink = NULL;
    tmp->rlink = NULL;

    if(header == NULL){
        header = tmp;
    }else{
        ptr = header;

        while(ptr->data!= key && ptr->rlink!=NULL){
            ptr1 = ptr;
            ptr = ptr->rlink;
        }

        if(ptr->rlink==NULL){
            cout<<"Key Not Found Bro"<<endl;
        }else{
            ptr1->rlink = tmp;
            tmp->llink = ptr1;
            ptr->llink = tmp;
            tmp->rlink = ptr;
        }
    }
}


void betweenAfter(int data, int key){

    struct node *ptr,*tmp,*ptr1;
    tmp = (struct node*)malloc(sizeof(struct node));

    tmp->data = data;
    tmp->llink = NULL;
    tmp->rlink = NULL;

    if(header == NULL){
        header = tmp;
    }else{
        ptr = header;

        while(ptr->data!= key && ptr->rlink!=NULL){
            
            ptr = ptr->rlink;
        }

        if(ptr->rlink==NULL){
            cout<<"Key Not Found Bro"<<endl;
        }else{
            ptr->rlink = tmp;
            tmp->llink = ptr;
            ptr->llink = tmp;
            tmp->rlink = ptr1;
        }
    }
}