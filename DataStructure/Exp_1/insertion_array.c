#include <stdio.h>
int main()
{
    int i,pos,size,ele,n;
    int arr[50];
    printf("Enter the size of array\n");
    scanf("%d",&size);
    

printf("Enter the array elements\n");
for (int i = 0; i < size; i++)
{
    scanf("%d",&arr[i]);
}




printf("At what position do you want to enter the element?\n");
scanf("%d",&pos);
printf("Enter the element that is to be inserted\n");
scanf("%d",&ele);

for ( i = size-1; i >= pos-1; i--)
{
    arr[i+1] = arr[i];
}

arr[pos-1] = ele;


for (int i = 0; i <= size; i++)
{
    printf("%d\n",arr[i]);
}
    



    return 0;
}