#include <stdio.h>
#include <stdlib.h>
#define size 5

int arr[size];
int top = -1;
void push();
void pop();
void peek();
void display();
void isEmpty();

int main()
{

    int ch;
    
        system("cls");
        printf("1)PUSH\n2)POP\n3)PEEK\n4)DISPLAY\n5)isEmpty\n6)EXIT\n");
        xyz:
        printf("Enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            goto xyz;
            break;
        case 2:
            pop();
            goto xyz;

            break;

        case 3:
            peek();
            goto xyz;

            break;
        case 4:
            display();
            goto xyz;

            break;

        case 5:
            isEmpty();
            goto xyz;

            break;

        case 6:
            exit(0);
            break;

        default:
            printf("Wrong Choice\n");
            goto xyz;

            break;
        }
    

    return 0;
}

void push()
{
    int ele;
    if (top == size)
    {
        printf("Overflow");
    }
    else
    {
        top++;
        printf("Enter the element to be inserted\n");
        scanf("%d", &ele);
        arr[top] = ele;
        printf("Element Inserted Successfully\n");
    }
}

void pop(){

if (top==-1)
{
    printf("Underflow");
}
else{
    printf("Deleting the element %d\n",arr[top]);
    top--;
    printf("Element deleted successfully\n");
}



}


void peek(){


if (top==-1)
{
    printf("Underflow");
}
else{
    printf("The top element is:  %d\n",arr[top]);
   
}




}


void display(){

if (top==-1)
{
    printf("Underflow\n");
}
else{
for (int i = 0; i <= top; i++)
{
   printf("%d\t",arr[i]);
}
printf("\n");

}



}



void isEmpty(){

 
if (top==-1)
{
    printf("Stack is empty\n");
}
else{
    printf("Stack is not empty\n");


}



}