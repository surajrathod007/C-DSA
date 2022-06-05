#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>

int s[20];
int top = -1;

void push(int x)
{
    s[++top] = x;
}

int pop()
{
    return s[top--];
}

void main()
{

   char exp[20];
   char *e;
   int op1,op2,n,num;
printf("\nEnter postfix expression : ");
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
          
          default:
              break;
          }

          push(n);
      }

      e++;
  }

   printf("\nThe result of exp %s is %d ",exp,pop());
}