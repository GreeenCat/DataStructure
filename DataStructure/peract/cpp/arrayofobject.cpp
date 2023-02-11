#include<iostream>
using namespace std;
class A {
    string name;
public:
 A(){
    cin>>name;
}
void print(){
   cout<<name<<endl;
}


};


int main(){
A o1[5];
A *ptr;
ptr = o1;

for (int i = 0; i < 5; i++)
{
ptr->print();
ptr++;
}


    return 0;
}