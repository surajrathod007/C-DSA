#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int stack[30];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

void main()
{

    int op1,op2,num,n;
    char exp[20];
    char *e;

    printf("\nEnter the snap : ");
    scanf("%s",exp);

    e = exp;

    while(*e != '\0')
    {

        if(isdigit(*e))
        {

            num = *e - 48;
            push(num);
        }else{

            op1 = pop();
            op2 = pop();

            switch (*e)
            {

            case '+' :

                n = op2 + op1;
                break;

            case '-' :

                n = op2 - op1;
                break;

            case '*' :
                n= op2 * op1;
                break;
            case '/' :

                n = op2 / op1;
                break;
            
            default:
                break;
            }

            push(n);
        }

        

        e++;
    }

    printf("\nThe result of expression %s = %d \n\n",exp,pop());
}