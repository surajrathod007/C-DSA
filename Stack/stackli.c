#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node{

    int data;
    struct node *link;
}*top;

void push();
void pop();
void display();
void peek();

void main()
{

    char c;
    int n,m;

    do{

        printf("\nWhat do you want : ");
        printf("\n1.Push \n2.pop \n3.peep \n4.Display ");

        printf("\nChhose youe option : ");
        scanf("%d",&m);

        switch (m)
        {
        case 1 :

            push();
            break;

        case 2 :

            pop();
            break;

        case 3 : 
            
            peek();
            break;

        case 4 :

            display();
            break;
        
        
        default:
            break;
        }

        printf("\nDo you want to continue ? Y/N ");
        fflush(stdin);
        scanf("%c",&c);

    }while(c=='y' || c=='Y');
    
    
}

void push()
{
    struct node *tmp;
    int no;

    tmp = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d",&no);
    tmp->data = no;
    tmp->link = NULL;

    if(top==NULL){
            top = tmp;
    }else{

        tmp->link = top;
        top = tmp;
    }

}

void pop()
{

    struct node *ptr;
    if(top==NULL){
        printf("\nLinked list is empty");
    }else{

            ptr = top;
            top = top->link;
            free(ptr);

    }
}

void peek()
{


    printf("\nTop element is = %d",top->data);
}

void display()
{

    struct node *ptr;
    if(top==NULL){

        printf("\nLinked List is empty ");
    }else{

        ptr = top;

        while(ptr!=NULL){

            printf("%d -> ",ptr->data);
            ptr= ptr->link;
        }

        
    }
}