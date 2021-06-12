#include "Employee.h"
#include<iostream>

int main() {
	Employee *e1=new Employee(101,"Akas");
	e1->setsalary(100000, 5000);
	e1->CalcSalary();
	e1->display();

  
}