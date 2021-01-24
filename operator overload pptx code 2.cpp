#include <iostream>
using namespace std;

class coord
{
    int x, y;
public:
    coord(int i = 0, int j = 0)
    {
        x = i;
        y = j;
    }
    void getxy(int &i, int &j)
    {
        i = x;
        j = y;
    }
    friend coord operator + (coord ob1, int i);
    friend coord operator + (int i, coord ob1);
    friend coord operator ++ (coord &ob);
};
coord operator + (coord ob1, int i)
{
    coord temp;
    temp.x = ob1.x + i;
    temp.y = ob1.y + i;
    return temp;
}
coord operator + (int i, coord ob1)
{
    coord temp;
    temp.x = ob1.x + i;
    temp.y = ob1.y + i;
    return temp;
}
coord operator ++ (coord &ob)
{
    ob.x++;
    ob.y++;
    return ob;
}
int main()
{
    coord o1(10, 20);
    int x,y;
    o1 = o1 + 100;
    o1.getxy(x,y);
    cout<<x<<","<<y<<"\n";
    o1 = 100 + o1;
    o1.getxy(x,y);
    cout<<x<<","<<y<<"\n";
    (++o1).getxy(x,y);
    cout<<x<<","<<y<<"\n";
}
