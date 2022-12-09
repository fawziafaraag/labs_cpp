#include <iostream>
#include <cstdio>
using namespace std;

class person {
protected:
    int id;
    char* name;

public:
    person(){id=0; name="fawzia";}
    person(int id, char* name)
    { this->id=id; this->name =name;}
    void SetId(int m){id = m;}
    void SetName(char* n){name = n;}
    int GetId(){return id;}
    char* GetName(){return name;}
};
class employee : public person {
protected:
    int salary;

public:
    employee(){salary= 5000;}
    employee(int s){salary =s;}
    void SetSalary(int s){salary=s;}
    int Getsalary(){return salary;}
    int calculate_salary(int d){
    if(d ==1){salary=5000;}
    else if (d==2){salary=6000;}
    else if (d==3){salary=7000;}
    else if (d==4){salary=8000;}
    else if (d==5){salary=9000;}
    else if (d==6){salary=4000;}
    else {cout<<"your department is not exist"<<endl;}
    return salary;

    }

};
class manager : public employee {
public:
    manager(){}

};


int main()
{   manager mg;
    int i=0 , id,c;
    char n[20];
    cout<<"enter your id:"<<endl;
    cin>>id;
    mg.SetId(id);
    cout<<"enter your name:"<<endl;
    getchar();
    do
    {
        c = getchar();
        n[i] = c;
        i++;
    } while(c!='\n');
    mg.SetName(n);
    cout <<"choose your department::"<<endl;
    cout <<"1- Administration/operations"<<endl;
    cout <<"2- Research and development"<<endl;
    cout <<"3- Marketing and sales"<<endl;
    cout <<"4- Human resources"<<endl;
    cout <<"5- Customer service" <<endl;
    cout <<"6- Accounting and finance"<<endl;
    int d;
    cin>>d;
    cout<<"your id: >>"<<mg.GetId()<<endl;
    cout<<"your name: >>"<<mg.GetName();
    cout<<"your salary is:>>"<< mg.calculate_salary(d)<<endl;

    return 0;
}
