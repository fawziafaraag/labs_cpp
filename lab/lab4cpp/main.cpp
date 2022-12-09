#include<iostream>
#include<string.h>
using namespace std;

class Employee{
private:
   int id;
   char* name;
   int salary;
public:
Employee(){
id=1;
name = new char[50];
name="fawzia";
salary=5000;
}
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
Employee operator+(Employee const&emp);                           //Emp +Emp
friend Employee operator+(int s,Employee const&emp);              //1000 +Emp
Employee operator+(int s);                                        //Emp+1000
friend Employee operator+(char* name,Employee const&emp);         //”Ahmed”+Emp
Employee operator+(char* name);                                   //Emp+”Ahmed”
Employee& operator=(Employee const&emp);                          //=
int operator==(Employee const&emp);                               //==
operator int const();                                             //int
operator char* const();                                           //char
};

Employee Employee::operator+(const Employee &emp){
//Emp +Emp
Employee temp;
temp.id=id+emp.id;
char *s = new char[strlen(name) + strlen(emp.name) + 1];
strcpy(s, name);
strcat(s, " ");
strcat(s, emp.name);
temp.name = s;
temp.salary=salary+emp.salary;
return temp;
}
Employee operator+(int s,Employee const&emp){
//1000 +Emp
Employee temp;
temp.id =emp.id;
temp.name=emp.name;
temp.salary =emp.salary +s;
return temp;
}
Employee Employee::operator+(int s){
//Emp+1000
Employee temp;
temp.id =id;
temp.name=name;
temp.salary =salary +s;
return temp;
}
Employee operator+(char* nm,Employee const&emp){
//”Ahmed”+Emp
Employee temp;
temp.id =emp.id;
char *temp_name = new char[strlen(nm) + strlen(emp.name) + 1];
strcpy(temp_name, emp.name);
strcat(temp_name," ");
strcat(name,temp_name);
temp.name=temp_name;
temp.salary =emp.salary ;
return temp;
}
Employee Employee::operator+(char* nm){
//Emp+”Ahmed”
Employee temp;
temp.id =id;
char *temp_name = new char[100];
strcpy(temp_name, name);
strcat(temp_name, " ");
strcat(temp_name, nm);
temp.name=name;
temp.salary =salary ;
return temp;
}
Employee& Employee::operator=(Employee const&emp){
//=
id=emp.id;
name=emp.name;
salary=emp.salary;
return *this;
}
int Employee::operator==(Employee const&emp){
//==
return (id==emp.id&&name==emp.name&&salary==emp.salary);
}

Employee::operator int const(){
//int
return id;
}
Employee::operator char* const(){
//char*
return name;
}


int main()
{

//Lab 4:
/*Overload the +, =, ==, int, char *operators to do the following:
Emp +Emp
1000 +Emp
Emp+1000
”Ahmed”+Emp
Emp+”Ahmed”
(int)Emp(returns Employee id
(char *)Emp(returns Employee name*/

Employee emp1,emp2,emp3;

emp1.fillemp(1,"fawzia",4000);
emp2.fillemp(2,"wageeh",5000);
emp3.fillemp(3,"faraag",6000);
emp1.printEmp();
emp2.printEmp();
emp3.printEmp();

/*
emp1=emp2+emp3;
emp1.printEmp();
*/
emp1=1000+emp2;
emp1.printEmp();

emp1=emp2+1000;
emp1.printEmp();

emp1=(char *)"Ahmed"+emp2;
emp1.printEmp();

emp1=emp2+(char *)"Ahmed";
emp1.printEmp();

emp1=emp2;
emp1.printEmp();

cout<<(emp1==emp2)<<endl;
cout<<(int)emp1<<endl;
cout<<(char*)emp1<<endl;


    return 0;
}
