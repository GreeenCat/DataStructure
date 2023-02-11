#include<stdio.h>
int main(){
int arr[5] = {1000,100,2000,20,100};
int minofindex,temp;
int n = 5;

for (int i = 0; i < n-1; i++)
{
    minofindex = i;

    for (int j= i+1; j < n; j++)
    {
            if (arr[j] < arr[minofindex])
            {
                minofindex = j;
            }
            
    }
    

temp = arr[i];
arr[i] = arr[minofindex];
arr[minofindex] = temp;

}



for (int i = 0; i <5; i++)
{
    printf("%d\t",arr[i]);
}

return 0;
}
