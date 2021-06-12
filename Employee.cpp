#include "Employee.h"
#include<string>
#include<iostream>
using namespace std;

Employee::Employee()
{
	empno = 0;
	strcpy(name, "");
	basicsal = 0;
	allowance = 0;
	totalsalary = 0;
	
}

Employee::Employee(int p_empno, const char* p_name)
{
	empno=p_empno;
	strcpy(name, p_name);
}



void Employee::setsalary(double p_basicsal, double p_allowance){
	basicsal = p_basicsal;
	allowance = p_allowance;
}

void Employee::CalcSalary(){
	totalsalary = (basicsal + allowance);
}

void Employee::display(){
	cout << "*******************************"<<endl;
	cout << "Employee name : " << name<<endl;
	cout << "Employee no   : " << empno<<endl;
	cout << "Employee net_s: " << totalsalary << endl;
}

Employee::~Employee()
{
	int i = 1;
	cout << "From destractor "<<i++ <<endl;
	
}
