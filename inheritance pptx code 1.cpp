#include<iostream>
#include<cstring>
using namespace std;
class Person
{
    char* name;
Public:
    int contactNo;
Protected:
    char gender;
    // here goes member functions
};
class Student : public Person
{
Private:
    int id;
Public:
    void setVal (int id, char* name,
                 int contactNo, char gender)
    {
        this->id = id;
        strcpy (this->name,name);
        this->contactNo = contactNo;
        this->gender = gender;
    }
};
void main()
{
    Student st;
    strcpy (st.name,"Shams");
    st.contactNo = 420007;
    st.gender = 'M';
    st.id = 0;
    cout<< sizeof(st);
}

