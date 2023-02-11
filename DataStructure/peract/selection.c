#include<stdio.h>
void selection(int *a,int n){
int key,j;
for (int i = 1; i < n-1; i++)
{
    key = a[i];
    j = i-1;

    while (j>=0 && a[j] > key)
    {
        a[j+1] = a[j];
        --j;
    }

    a[j+1] = key;
    
}


}


int main(){

int arr[5] = {50,10,6,500,1000};


selection(arr,5);


for (int i = 0; i < 5; i++)
{
    printf("%d\t",arr[i]);
}



return 0;
}