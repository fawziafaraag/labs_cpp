#include <iostream>
#include <string.h>
using namespace std;

class Employee{
private:
   int id;
   char* name;
   int salary;

public :

Employee fillemp(int id,char* name,int salary){
this->id =id;
this->name=name;
this->salary=salary;
}

void printEmp(){
cout<<"employee id: "<<id<<endl;
cout<<"employee salary: "<<name<<endl;
cout<<"employee salary: "<<salary<<endl;
}
Employee(){
cout<<"\ndefault Constructor executed"<<endl;
id=1;
name="fawzia";
salary=5000;
}
Employee(int id){
cout<<"\nsecond Constructor executed"<<endl;
this->id=id;
}
Employee(int id,int salary){
cout<<"\nthird Constructor executed"<<endl;
this->id=id;
this->salary=salary;
}
Employee(Employee &emp){
cout<<"\ncopy Constructor executed"<<endl;
this->id=emp.id;
this->name=emp.name;
this->salary=emp.salary;

}

~Employee(){
cout<<"\nDestructor executed"<<endl;
}
};

int main()
{
/*
•	Write three constructors for your Employee class as you like.
•	Write the destructor of your Employee class.
•	Write the copy constructor of your Employee.
•	Write 2 functions with the following prototype:
   o	Employee FillEmp (int id, int Sal, char * name) and void PrintEmp (Employee emp)
•	Trace your program using f7 key.
*/

Employee emp1,emp2(2),emp3(2,5000);
emp1.fillemp(2,"wageeh",5000);
Employee emp4(emp1);
emp4.printEmp();






    return 0;
}
