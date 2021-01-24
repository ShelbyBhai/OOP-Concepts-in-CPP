#include <iostream>
using namespace std;
float f1(float i)
{
    return i / 2.0;
}
double f1(double i)
{
    return i / 3.0;
}
void f2(unsigned char c)
{
    cout << c;
}
void f2(char c)
{
    cout << c;
}
int f3(int a, int b){
      return a+b;
}
int f3(int a, int &b){
      return a-b;
}
int f4(int a){
      return a*a;
}
int f4(int a, int b = 0){
      return a*b;
}
int main()
{
    float x = 10.09;
    double y = 10.09;
    cout << f1(x)<<"\n";
    cout << f1(y)<<"\n";
    //cout << f1(10)<<"\n";// ambiguous,automatic type conversion.
    //f2("c");
    //f2(86); // ambiguous,wrong type of argument
    int x1 = 1, y1 = 2;
   // cout << f3(x1, y1);// ambiguous,call by value & call by reference
    cout << f4(10, 2);
    cout << f4(10);  // which f() is called?
    return 0;
}


