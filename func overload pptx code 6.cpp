#include <iostream>
using namespace std;
void space(int count)
{
    for( ; count; count--)
        cout << "x" ;
}
void space(int count, char ch)
{
    for( ; count; count--)
        cout << ch;
}
int main()
{
    void (*fp1)(int)=space;
    void (*fp2)(int, char)=space;
   // fp1 = space;
    //fp2 = space;
    fp1(22);
    cout << "\n";
    fp2(22, 'x');
   cout << "\n";
    cout<<(void*)&fp1<<" "<<(void*)&fp2<<"\n";
    return 0;
}

