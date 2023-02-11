#include<iostream>
using namespace std;
class summer{
int x;
public:
summer(){}
    summer(int a){
      x = a;
    }

    friend summer operator +(summer,summer);



void display(){
    cout<<"Ans = " <<x;
}
};

summer operator +(summer a ,summer b){
    summer temp;
    temp.x = a.x + b.x;
    return temp;
}



int main(){
    summer o1 = 4;
        summer o2(o1);
summer o3;
o3 = o1+o2;
o3.display();
    return 0;
}