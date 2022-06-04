#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int stack[10],n=0;
int fact(int);
int pop();
void push(int);

void main()
{

    int num;

    printf("\nRecursion using stack : ");
    printf("\nEnter the number between 1-9 :");

    scanf("%d",&num);

    printf("\nThe factorial is : %d",fact(num));
}

int pop()
{
    if(n==0)
    {
        printf("\nStack is empty :");
    }else{
        return stack[n--];
    }
}

void push(int x)
{

    if(n==9)
    {

        printf("\nStack is full : ");
        
    }else{

        n++;
        stack[n] = x;
    }
}

int fact(int num)
{
    int res;

    if(num==2)
    {
        push(2);
        push(1);
        res = 1;

        while(n>=1)
        {
            res *= pop();
            return res;
        }

    }else{

        push(num);
        
        return fact(num-1);
    }
}