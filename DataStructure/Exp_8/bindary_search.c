#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[] = {10,20,30,40,50,60,70,80};
    int ele;
    printf("Enter the element to search\n");
    scanf("%d",&ele);
int low,mid,high;


low = 0;
high=8;

while (low<=high)
{
mid = (low+high)/2;

   if (arr[mid]==ele)
   {
    printf("Element found at index %d",mid);
exit(0);
   }
   else if(arr[mid]<ele){
    low = mid + 1;
   }
   else{
    high = mid - 1;
   }
   
}










return 0;
}