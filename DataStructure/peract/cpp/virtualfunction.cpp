#include <iostream>
using namespace std;
class A
{
public:
    virtual void print()
    {
        cout << "Base Class";
    }
};

class b : public A
{

public:
    void print()
    {
        cout << "Derived class";
    }
};

int main()
{
    b ob;
    A *ptr;
    ptr = &ob;
    ptr->print();

    return 0;
}