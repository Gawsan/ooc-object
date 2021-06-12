#pragma once
class Employee
{
private:
	int empno;
	char name[20];
	double basicsal;
	double allowance;
	double totalsalary;
public:
	Employee();
	Employee(int p_empno, const char* p_name);
	void setdetails(int p_empno, const char* p_name);
	void setsalary(double p_basicsal, double p_allowance);
	void CalcSalary();
	void display();
	~Employee();

};

