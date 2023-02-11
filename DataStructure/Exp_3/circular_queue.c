#include <stdio.h>
#define size 5
int arr[size];

int rear = 0;
int front = -1;
void insertion();
void deletion();
void display();
int main()
{
    int ch;
    xyz:
    printf("1)Insertion\n2)Deletion\n3)Display\n");
    printf("Enter your choice\n");
    scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insertion();
        goto xyz;
            break;
            case 2:
            deletion();
        goto xyz;
 
            break;
            case 3:
            display();
        goto xyz;
 
            break;
        
        default:
        printf("Wrong choice\n");
        goto xyz;
 
            break;
        }
    return 0;
}


void insertion(){
int ele;
if (rear==size-1 || front>rear)
{
   printf("Overflow\n");
}
else{
printf("Enter the element to be inserted? \n");
scanf("%d",&ele);
arr[rear] = ele;
rear++;
printf("Element %d inserted successfully\n",ele);
}




}


void deletion(){

int ele;
if (rear==0 || front>rear)
{
   printf("Underflow\n");
}
else{
    front++;
    printf("Element %d deleted successully",arr[front]);
}





}


void display(){
 
int ele;
if (rear==0 || front>rear)
{
   printf("Underflow\n");
}
else{
printf("Elements are\n");
    for (int i = front+1; i < rear; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}
   
}