#include <iostream>
using namespace std;

/*void f(int a = 0, int b = 0)
{
    cout << a << "  " << b << "\n";
}
void g(int b, int a = 0)
{
    cout << a << "  " << b << "\n";
}

/*void g(int a = 0 , int b) will give error because All default parameters
must be to the right of any parameters that do not have defaults.*/

/*int main()
{
    f();
    f(10);
    f(10, 99);
    g(45,100);
}*/
/*double rect_area( double length, double width = 0){
         if (!width) width = length;
         return length*width;
}
int main(){
         cout << rect_area(10.0, 5.8) << "\n";
         cout << rect_area(10.0) <<"\n";
         return 0;
}*/
class myclass {
         int x;
public:
         myclass(int n = 80) { x = n; }
         int getx() { return x; }
};
int main(){
        myclass o1(10);
        myclass o2;
        cout << o1.getx() << "\n";
        cout << o2.getx() << "\n";
        return 0;
}

