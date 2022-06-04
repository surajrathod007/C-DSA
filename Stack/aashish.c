#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define N 20

int top= -1;
char s[N];
char pop();
void push(char item);

void main()
{
  char str[N];
  int i;
  printf(" Enter the string =");
  gets(str);
  for(i=0;i<strlen(str);i++)
  {
    push(str[i]);
  }
  for(i=0;i<strlen(str);i++)
  {
        str[i]=pop();
  }
  
  printf("\n Reverse string =");
  puts(str);
}

void push(char item)
{


  
  if(top>=N)
  {
    printf("\n Stack is overflow ");
  }
  else
  {
    top=top+1;
    s[top] = item;
  }
}


char pop()
{

    char ch;
    if(top == -1)
    {
      printf("\n Stack is undeflow");
    }
    else
    {
      ch=s[top];
      top=top-1;
    }
    return ch;
}