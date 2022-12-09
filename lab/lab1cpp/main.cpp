#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int add_two_numbers(int num1=5,int num2=8);

struct employee{
int id;
char name[30];
int salary;

};
employee emp;


int x=20;


int main()
{
/*
//    Lab 1:
//•	Write Structure Employee (ID, Name, and Salary).
cout<<"Write Structure Employee (ID, Name, and Salary)"<<endl;
cout<<"enter your id:"<<endl;
cin>>emp.id;
cout<<"enter your name:"<<endl;
cin>>emp.name;
cout<<"enter your salary:"<<endl;
cin>>emp.salary;


cout<<"your id:"<<emp.id<<endl;
cout<<"your name:"<<emp.name<<endl;
cout<<"your salary:"<<emp.salary<<endl;



//•	Make a pointer to the structure and allocate it with a number read by the user
cout<<"Make a pointer to the structure and allocate it with a number read by the user"<<endl;

employee* ptr;
ptr = new(employee);
int number;
cout<<"enter number of employee:"<<endl;
cin>>number;

for(int i=0;i<number;i++){
cout<<"enter your id:"<<endl;
cin>>(*ptr).id;
cout<<"enter your name:"<<endl;
cin>>(*ptr).name;
cout<<"enter your salary:"<<endl;
cin>>(*ptr).salary;

cout<<"your id:"<<(*ptr).id<<endl;
cout<<"your name:"<<(*ptr).name<<endl;
cout<<"your salary:"<<(*ptr).salary<<endl;
}

//•	Fill the allocated array and then print it.
cout<<"Fill the allocated array and then print it"<<endl;

int s;
cout<<"enter array size"<<endl;
cin>>s;
int *arr=new(int);
int index;
for (index=0;index<s;index++){
cout<<"enter array index:"<<index<<endl;
cin>>arr[index];

}
for (index=0;index<s;index++){
cout<<"array of index:"<<index<<">>"<<arr[index]<<endl;
}

//•	Make a function with default argument values and use it.
cout<<"Make a function with default argument values and use it"<<endl;

cout<<"default function add_two_numbers: "<<add_two_numbers()<<endl;
cout<<"function add_two_numbers(12,7): "<<add_two_numbers(12,7)<<endl;

*/
//•	Try the scope operator
cout<<"Try the scope operator"<<endl;

/*cout<<"enter scope operator ::"<<endl;
cin>>x;*/
cout<<"scope operator : "<<::x;


    return 0;
}
int add_two_numbers(int num1,int num2){
    return num1+num2;
}
