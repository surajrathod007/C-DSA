#include<conio.h>
#include<stdio.h>
#include<string.h>

int stack[20];
int top = -1;

void push(char x)
{
    top = top+1;
    stack[top] = x;
}

char pop()
{
    if(top==-1)
    {
        printf("\nNot possible ");
    }else{
        return stack[top--];
    }
}

void main()
{

    char str[20];
    int i;

    printf("\nEnter your string ");
    gets(str);

    for(i = 0; i<strlen(str); i++)
    {
        push(str[i]);
    }

    for(i = 0; i<strlen(str); i++)
    {
        str[i] = pop();
    }

    printf("\nThe sorted array is : ");

    puts(str);
}