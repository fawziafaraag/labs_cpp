#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
class employee
{
private:

    int id;
    int salary ;
    char *name;

public:
    employee ()
    {
        //default constractor

    }
    employee (int id1, int salary1, char *name1)
    {
        //parametar constractor
     id=id1;
     salary=salary1;
     name=name1;
    }


    void print ()
    {
        cout<<"the id is "<<id<<endl;
        cout<<"the salary is "<<salary<<endl;
        cout<<"the name is "<<name<<endl;
    }
    employee operator+( employee const& add)
    { //emp+emp
        employee temp;
        temp.id= id+ add.id;
        temp.salary=salary +add.salary;
        strcpy(temp.name, name);
        strcat(temp.name,add.name);
        return temp;
    }
    employee &operator=(const employee &equa11)
    {
        //emp=emp
        id=equa11.id;
        salary=equa11.salary;
        strcpy(name , equa11.name);
        return *this;


    }
    employee operator+(int x)
    {
        //emp+int x
        employee e;
        e.salary=salary+x;
        e.id=id;
        strcpy(e.name, name);
        return e;

    }
    friend employee operator+(int z, employee const &e)
    {
        //int x+emp
        employee e3;
        e3.salary =e.salary +z;
        e3.name =e.name;
        e3.id =e.id;
        return e3 ;

    }
    employee operator+(char *ch)
    {
        //emp+"ahamed
        employee e;
        strcpy(e.name, name);
        strcat(name , ch);
        e.id=id;
        e.salary=salary;
        return e;
    }
    friend employee &operator+(char *ch, employee const &e)
    {
        //ahmed +emp
        employee e1;
        strcpy(e1.name, e.name);
        strcat(e.name , ch);
        e1.id=e.id;
        e1.salary=e.salary;
        return e1;
    }





};
int main()
{
    int id1, id2;
    int salary1, salary2;
    char *name1=new char [20];
    char *name2=new char [20];
    cout<<"enter the id"<<endl;
    cin>>id1;
    cout<<"enter the salary "<<endl;
    cin>>salary1;
    cout<<"enter the name"<<endl;
    cin>>name1;
    cout<<"enter the id2"<<endl;
    cin>>id2;
    cout<<"enter the salary2 "<<endl;
    cin>>salary2;
    cout<<"enter the name2"<<endl;
    cin>>name2;
    employee e1(id1, salary1, name1);
    employee e2(id2, salary2, name2);
    cout <<"the information of employee 1 is "<<endl;
    e1.print();
    cout <<"the information of employee 2 is "<<endl;
    e2.print();
    e1=e2;
    cout <<"the result from the equal operation is "<<endl;
    e1.print();
    employee y=7+e1;
    cout<<"the result from add integer to employee is "<<endl;
    y.print();
    employee text1="dina"+e1;
    cout<<"the result from add char operation is "<<endl;
    text1.print();
    employee add =e1+e2;
    cout<<"the result from add operation is "<<endl;
    add.print();
    employee t=e1+7;
    cout<<"the result from add employee to integer is "<<endl;
    t.print();











    return 0;
}
