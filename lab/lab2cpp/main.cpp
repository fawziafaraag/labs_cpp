#include <iostream>
using namespace std;
#include <string.h>

void Swap( int& x,int &y);
inline int Sum(int n1, int n2);
inline int Sum(int num1, int num2, int num3);

class Employee{
private:
   int id;
   char* name;
   int salary;

public :
void Set_id(int i){id= i;}
int get_id(){return id;}

void Set_name(char* n){name =n;}
char* get_name(){return name;}

void Set_salary(int s){salary=s;}
int get_salary(){return salary;}
};

int main()
{

//•	Convert your Employee structure to a class and all its data will be private(the name will be char *).
//•	Write setter and getter for each property in your class (it must be public).

Employee emp;
emp.Set_id(1);
emp.Set_name("fawzia");
emp.Set_salary(5000);

cout<<"employee id :"<<emp.get_id()<<endl;
cout<<"employee name:"<<emp.get_name()<<endl;
cout<<"employee salary:"<<emp.get_salary()<<endl;

cout<<"Write a swap function that takes a reference for two variables and swaps values."<<endl;
int a = 3, b = 4;
Swap(a, b);
cout<<"A = " << a <<endl;
cout<<"B = " << b <<endl;


cout<<"Try function overloading and inline function."<<endl;
cout<<"sum two number:"<<Sum(5,6)<<endl;
cout<<"sum three numbers:"<<Sum(5,6,2)<<endl;



return 0;
}

void Swap( int& x,int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

//overloading in two inline function
inline int Sum(int n1, int n2)
{
return n1+n2;
}
inline int Sum(int num1, int num2, int num3)
{
return num1+num2+num3;
}

