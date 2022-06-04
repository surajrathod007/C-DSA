#include<conio.h>
#include<stdio.h>
#include<malloc.h>

void enqueue();
void dequeue();
void display();

struct node
{
    int data;
    struct node *link;
}*front = NULL,*rear = NULL;

void main()
{

    int ch,val,val1;

    do{
        /* code */

        printf("\n\n Queue:\n1. Insert \n2. Delete \n3. Display \n0. Exit");
        printf("\nEnter choice : ");
        scanf("%d",&ch);

        switch(ch)
        {

            case 1:
                   enqueue();
                    break;

            case 2:
                    dequeue();
                    break;
                
            case 3:
                    display();
                    break;
        }
    }while (ch!=0);
    
}


void enqueue()
{
    struct node *ptr;
    int item;

    printf("\nEnter any item do yu wnat to add");
    scanf("%d",&item);

    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = item;

    if(rear==NULL)
    {
        //rear->link = ptr;
        rear = ptr;
        rear->link = rear;
    }else{

        ptr->link = rear->link;
        rear->link = ptr;
        rear = ptr;
        
    }

    

}

void dequeue()
{

    struct node *ptr;

    

    if(rear==NULL)
    {
        printf("\nQueue is underflow ");
    }else if(rear->link == rear)
    {
        ptr = rear;
        rear = NULL;
        printf("\n %d is deleted ",ptr->data);
        free(ptr);
    }else{

        ptr = rear->link;
        rear->link = ptr->link;
        printf("\n %d is delered",ptr->data);
        free(ptr);
    }
}

void display()
{

    struct node *ptr;
    if(rear==NULL)
    {
        printf("\nQueue is empty");
    }else{

        ptr = rear->link;

        while(ptr!=rear)
        {
            printf("%d ",ptr->data);
            ptr = ptr->link;
        }
    }

    printf("%d ",rear->data);
}