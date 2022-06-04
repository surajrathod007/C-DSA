#include<stdio.h>
#include<conio.h>

#define size 5

int front = -1;
int rear = -1;

void insertq(int[],int);
void deleteq(int[]);
void display(int[]);


void display(int queue[])
{

    int i;
    if(front>rear)
    {
        for(i = front; i<=size;i++)
        {
            printf("%d ",queue[i]);
        }

        for(i = front; i<rear; i++)
        {
            printf("%d ",queue[i]);
        }
    }else{

        for(i = front; i<=rear; i++)
        {
            printf("%d ",queue[i]);
        }
    }
}
void deleteq(int queue[])
{

    if(front == -1)
    {
        printf("\nQueeu is underflow ");
    }else if(front == rear)
    {
        printf("%d is deleted : ",queue[front]);
        front = rear = -1;
    }else{
        printf("%d is deleted : ",queue[front]);
        front++;
    }
}


void insertq(int queue[],int value)
{

    if(front == rear+1)
    {
        printf("\nCan not insert");
    }else if(front == -1 )
    {
        front = rear = 0;
    }else if(rear==size-1 && front>0)
    {
        rear = 0;
    }else{
        rear++;
    }

    queue[rear] = value;
}

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