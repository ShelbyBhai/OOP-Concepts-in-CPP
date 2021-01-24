#include <iostream>
#include <cstring>
//#include <cstdlib>
using namespace std;

class strtype
{
    char *p;
    int len;
public:
    strtype(char *s);
    ~strtype()
    {
        delete [] p;
    }
    char *get()
    {
        return p;
    }
    strtype &operator = (strtype &ob);
};
strtype:: strtype(char *s)
{
    int l;

    l = strlen(s) + 1;
    p = new char[l];
    if (!p)
    {
        cout << "Allocation error\n";
        //exit(1);
    }
    strcpy( p, s );
    len = l;
}
strtype &strtype:: operator = (strtype &ob)
{
    if (len < ob.len)
    {
        delete [] p;
        p = new char[ob.len];
        if (!p)
        {
            cout << "Allocation error\n";
           // exit(1);
        }
    }
    len = ob.len;
    strcpy( p, ob.p );
    return *this;
}
int main()
{
    strtype a("Hello"), b("There");
    cout<<a.get()<<" "<<b.get()<<"\n";
    a = b;
    cout<<a.get()<<" "<<b.get()<<"\n";
    return 0;
}
