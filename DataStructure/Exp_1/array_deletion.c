#include<stdio.h>
#include<stdlib.h>
int main(){
int size,pos;

printf("Enter size of array\n");
scanf("%d",&size);
int arr[size];
for (int i = 0; i < size; i++)
{
   scanf("%d",&arr[i]);
}


system("cls");

for (int i = 0; i < size; i++)
{
   printf("%d\t",arr[i]);
}

printf("\n");
printf("Enter the position you want to delete? ");
scanf("%d",&pos);



for (int i = pos-1; i < size; i++)
{
    arr[i] = arr[i+1];
}


size--;


printf("Deleted element\n");
for (int i = 0; i < size; i++)
{
   printf("%d\t",arr[i]);
}

return 0;

}