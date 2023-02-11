#include<stdio.h>
#include<stdlib.h>
int main(){

int ele;
int arr[] = {10,20,30,40,50,60};
int flag = 0;

printf("Enter the element to search\n");
scanf("%d",&ele);

for (int i = 0; i < 6; i++)
{
    if (ele==arr[i])
    {
        printf("Element fround at index: %d ",i);
        flag=1;
        exit(0);
    }
    
}


if (flag==0)
{
   printf("Element not found\n");
}



return 0;
}