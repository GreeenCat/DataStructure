#include<iostream>
using namespace std;
class product{
public:
int id_chair = 20;
string productname_chair = "chair";
int realquan_chair = 10;
int quantity_chair = 10;
int rate_chair = 1000;


};

class chair:public product{

public:
int quant;
    void getdata(){
        
        cout<<"How many chair do you want? " <<endl;
        cin>>quant;
        cout<<"Total Abount will be: " << (quant*rate_chair);
        cout<<"Buyed! "<<endl;
        quantity_chair= quantity_chair - quant;
    }

    



};

class table{
    public:
int realquan_table = 10;

int id_table = 50;
string productname_table = "Table";
int quantity_table = 10;
int rate_table = 2000;

int quant;
void getdataa(){
        
        cout<<"How many chair do you want? " <<endl;
        cin>>quant;
        cout<<"Total Abount will be: " << (quant*rate_table)<<endl;
        cout<<"Buyed! "<<endl;
        quantity_table= quantity_table - quant;
    }



};


class sales:public table,public chair{
public:
int sales_table;
int sales_chair;
void displaytable(){
cout<<"Id " <<  id_table<<endl;
cout<<"product name " <<  productname_table<<endl;
cout<<"Quantity " <<  quantity_table<<endl;
cout<<"rate" <<  rate_table<<endl;

}


void displaaychair(){
cout<<"Id " <<  id_chair<<endl;
cout<<"product name " <<  productname_chair<<endl;
cout<<"Quantity " <<  quantity_chair<<endl;
cout<<"rate" <<  rate_chair<<endl;

}



void displaysalaes(){
sales_table = (realquan_table/quantity_table)*100;
sales_chair = (realquan_chair/quantity_chair)*100;
cout<<"table: " <<sales_table<<"%"<<endl;
cout<<"chair: " <<sales_chair<<"%"<<endl;


}
};

int main(){
        sales o1;

int ch;
while(1){
       cout<<"1)Buy \n 2)Display"<<endl;
       cin>>ch;
    switch(ch){
        case 1:
        cout<<"1)Buy Chair\n2)Buy Table"<<endl;
        cin>>ch;
        
        switch(ch){
            case 1:
            o1.getdata();
            break;

            case 2:
          o1.getdataa();
            break;

        }

        break;
        case 2:
        o1.displaysalaes();
        break;

    }
}
   return 0;
}