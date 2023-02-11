#include<stdio.h>
void inseertion(int *a,int n){
int key,j;

for (int i = 0; i < n; i++)
{
   key = a[i];
   j = i- 1;

   while (j>=0 && a[j] > key)
   {
    a[j+1] = a[j];
    j--;
   }

   a[j+1]= key;
   



}



}

int main(){

int arr[5] = {1,8,9,0,20};

int n = 5;

inseertion(arr,n);
for (int i = 0; i < n; i++)
{
    printf("%d\t",arr[i]);
}


return 0;
}