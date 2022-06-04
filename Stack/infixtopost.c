#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

char stack[20];
int top = -1;

void push(char x)
{

    stack[++top] = x;
}

char pop()
{
    if(top==-1)
    {

        printf("\nNULL");
    }else{

        return stack[top--];
    }
}

int priority(char x)
{

    if(x=='(')
    {
        return 0;
    }

    if(x == '+' || x == '-')
    {
        return 1;
    }

    if(x == '*' || x == '/')
    {

        return 2;
    }
}

void main()
{

    char exp[20];
    char *e,x;


    printf("\nEnter the infix :");
    scanf("%s",exp);

    e = exp;


    while(*e != '\0')
    {

        if(isalnum(*e))
        {

            printf("%c",*e);
        }else if(*e == '(')
        {

            push(*e);
        }else if(*e == ')')
        {

            while((x=pop())!='(')
            {
                printf("%c",x);
            }
        }else{

            while(priority(stack[top])>=priority(*e))
            {

                printf("%c",pop());
            }

            push(*e);
        }

        e++;
    }

    /*

    while(*e!='\0')
    {

        if(isalnum(*e))
        {
            printf("%c",*e);
        }else if(*e=='(')
        {
            push(*e);
        }else if(*e == ')')
        {
            while((x=pop())!='(')
            {
                printf("%c", x);
            }
        }else{

            while(priority(stack[top]>=priority(*e)))
            {

                printf("%c",pop());
            }

            push(*e);
        }

        e++;

    }

    */

   while(*e != '\0'){

       if(isalnum(*e))
       {
           printf("%c",*e);
       }else if(*e == '('){
            
            push(*e);
       }else if(*e ==')'){

           while((x=pop())!='(')
           {
               printf("%c",x);
           }
       }else{

           while(priority(stack[top])>=priority(*e))
           {
               printf("%c",pop());
           }

           push(*e);
       }

       e++;
   }

    while(top!=-1)
    {
        printf("%c",pop());
    }


}