#include <iostream>

using namespace std;


class Person
{
protected:
    int id;
    char* name;
public:
    Person(int id, char* name){
    this->id=id;
    this->name=name;

    }
    void Set_id(int i)
    {
        id= i;
    }
    int get_id()
    {
        return id;
    }

    void Set_name(char* n)
    {
        name =n;
    }
    char* get_name()
    {
        return name;
    }

};

class Employee:public Person{
protected:
    int salary;
public:
    Employee(int id,char* name,int salary):Person(id,name){

    this->salary = salary;

    }
    void Set_salary(int s){salary=s;}
    int get_salary(){return salary;}

};



int main()
{
    Employee emp(1,"fawzia",8000);
    cout<<"employee id :"<<emp.get_id()<<endl;
    cout<<"employee name:"<<emp.get_name()<<endl;
    cout<<"employee salary:"<<emp.get_salary()<<endl;



    return 0;
}
