#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int top = -1;
char s[20];
char pop();
void push(char);


void main()
{

    char str[20];

    int i;

    printf("\nEnter the string :");
    gets(str);
    for(i = 0; i<strlen(str);i++)
    {
        push(str[i]);
    }

    for(i = 0; i<strlen(str); i++)
    {
        str[i] = pop();
    }

    printf("\nReversed string is : ");
    puts(str);
}

void push(char item)
{

    if(top>=20)
    {

        printf("\nFull");
    }else{

        top=top+1;
        s[top] = item;
    }
}

char pop()
{

    char ch;
    if(top==-1)
    {

        printf("\nUbderflow");
    }

    ch = s[top];
    top=top-1;
    return ch;
}