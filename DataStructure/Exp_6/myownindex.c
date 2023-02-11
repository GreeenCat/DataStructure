#include<ctype.h>
#include<stdio.h>
char stack[100];
int top = -1;
void push(char x)
{
    stack[++top] = x;
}

int main(){


int *e;
printf("Enter the expression of stack\n");
scanf("%s",stack);


while (*e != '\0')
{
  if (isalnum(*e))
  {
    printf("%c",*e);
  }
    else if(*e == '('){
      push(*e);
    }

  
}



return 0;
}