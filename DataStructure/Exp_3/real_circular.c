#include <stdio.h>
#define size 5
int arr[size];
int te = 0;
int temp;
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
if (te==size)
{
   printf("Overflow\n");
}
else{
printf("Enter the element to be inserted? \n");
scanf("%d",&ele);
arr[rear] = ele;
rear = (rear+1)%size;
te = te +1;
printf("Element %d inserted successfully\n",ele);
}




}


void deletion(){

int ele;
if (te==0)
{
   printf("Underflow\n");
}
else{
    front = (front+1)%size;
    printf("Element %d deleted successully",arr[front]);
te = te -1;
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
    for (int i = 0; i < te; i++)
    {
        printf("%d\n",arr[temp]);
        printf("\n");
        temp = (temp+1)%size;
    }
    
}
   
}