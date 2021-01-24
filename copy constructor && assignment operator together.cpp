#include<iostream>
using namespace std;

class Test
{
    int *ptr;
public:
    Test (int i = 0)
    {
        ptr = new int(i);
    }
     Test (const Test &obj)
    {
        ptr = new int(*(obj.ptr));
    }
    void setValue (int i)
    {
        *ptr = i;
    }
    void print()
    {
        cout << *ptr << endl;
    }
    Test & operator = (const Test &t);
};

Test & Test::operator = (const Test &t)
{
// Check for self assignment
    if(this != &t)
        *ptr = *(t.ptr);

    return *this;
}

int main()
{
    Test t1(5);
    Test t2;
    t2 = t1;
    t1.setValue(10);
    t2.print();
    Test t3=t2;
    t3.print();
    t1.print();
    t3.setValue(15);
    t2.print();
    t1.print();
    t2.setValue(20);
    t2.print();
    t1.print();
    t2=t3;
    t3.print();
    return 0;
}
