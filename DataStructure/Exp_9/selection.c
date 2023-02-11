#include<stdio.h>
int main(){
int arr[5] = {4,3,8,1,0};
int n = 5;
int indexofmin;
int temp;


for (int i = 0; i < n-1; i++)
{
   indexofmin = i;



   for (int j = i+1; j < n; j++)
   {
            if (arr[j]<arr[indexofmin])
            {
                indexofmin = j;
            }
            
   }

   temp = arr[i];
   arr[i]  = arr[indexofmin];
   arr[indexofmin] = temp; 
   
}




printf("Printing sorted array\n");

for (int i = 0; i < 5; i++)
{
   printf("%d\t",arr[i]);
}


return 0;
}