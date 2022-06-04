#include<stdio.h>
#include<conio.h>

int s[10];
int top = -1;

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
    int x;
    printf("\nEnter value : ");

    scanf("%d",&x);

    if(top==-1)
    {

        top=top+1;
        s[top] = x;

    }else{

        top=top+1;
        s[top] = x;
    }
}

void pop()
{

    if(top == -1)
    {

        printf("\nDeletion not possible : ");
    }else{

        printf("\n %d is poped ",s[top]);

        top=top-1;
    }
}

void peek()
{

    printf("\nTop element is = %d",s[top]);
}

void display()
{

    int i;

    for(i = top; i>=0; i--){

        printf("%d ",s[i]);
    }
}