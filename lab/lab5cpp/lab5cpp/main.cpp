#include <iostream>
using namespace std;


class Employee
{

private:
    int id;
    char* name;
    int salary;
    char* Company_name;
    static int count;
public :
    Employee()
    {
        id=1;
        name="fawzia";
        salary=5000;
        Company_name="ITI";
        count++;
    }
    Employee(int id)
    {
        this->id=id;
        count++;
    }
    Employee(int id,int salary)
    {
        this->id=id;
        this->salary=salary;
        count++;
    }
    ~Employee()
    {
        count--;
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

    void Set_salary(int s)
    {
        salary=s;
    }
    int get_salary()
    {
        return salary;
    }

    void Set_Company_name(char* n)
    {
        Company_name =n;
    }
    char* get_Company_name()
    {
        return Company_name;
    }

    static int get_count()
    {
        return count;
    }

};

int Employee::count=0;


int main()
{
    /* Lab 5:
    Add a class variables for your Employee
    CompanyName(with setter and gettter.
    EmployeeConut(with getter only (you know when to increment and decrement that count).
    Create an array for Employee using different constructors for the array elements.
    */
    Employee emp;
    Employee emp2[2]= {Employee(8),Employee(5,9000)};
    cout<<emp.get_Company_name()<<endl;
    cout<<emp.get_count();
    return 0;
}
