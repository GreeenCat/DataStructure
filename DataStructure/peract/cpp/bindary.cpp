#include<iostream>
using namespace std;
int main(){
    int *ptr[5];
    int arr[5] = {10,20,30,40,50};



    for(int i = 0; i<5; i++){
        ptr[i] = &arr[i];
    }



    for(int i = 0; i<5; i++){
        cout<<*ptr[i]<<endl;
    }



    return 0;
}