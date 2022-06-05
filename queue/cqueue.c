#include<conio.h>
#include<stdio.h>
#include<malloc.h>

#define size 5

void insertq(int[],int);
void deleteq(int[]);
void display(int[]);

int front = -1;
int rear = -1;

void main()
{

    int n,ch;
    int queue[size];

    do{
        /* code */

        printf("\n\n Queue:\n1. Insert \n2. Delete \n3. Display \n0. Exit");
        printf("\nEnter choice : ");
        scanf("%d",&ch);

        switch(ch)
        {

            case 1:
                    printf("\nEnter number : ");
                    scanf("%d",&n);
                    insertq(queue,n);
                    break;

            case 2:
                    deleteq(queue);
                    break;
                
            case 3:
                    display(queue);
                    break;
        }
    }while (ch!=0);
    
}

void insertq(int queue[],int item)
{

  


    if(front==rear+1){

        printf("\nQueue is underflow ");
    }else if(front == -1 && rear == -1){

        front=rear=0;
    }else if(rear == size -1 && front>0){
        rear = 0;
    }else{
        rear++;
    }

    queue[rear] = item;
}

void deleteq(int queue[])
{
    if(front==-1)
    {

        printf("\nQueue is underflow : ");
        return;
    }else if(front == rear)
    {

        printf("%d is deleted : ",queue[front]);
        front = rear = -1;
    }else if(front == size -1){
        printf("\n %d is deleted : ",queue[front]);
        front++;
    }else{

        printf("\n %d is deleted : ",queue[front]);
        front++;
    }
}

void display(int queue[])
{
    int i;

    printf("\n");

    if(front>rear)
    {

        for(i = front; i< size ; i++)
        {
            printf("%d ",queue[i]);
        }

        for(i = 0; i<rear; i++){
            printf("%d ",queue[i]);
        }
    }else{

        for(i = front ; i<= rear; i++){

            printf("%d ",queue[i]);
        }
    }
}