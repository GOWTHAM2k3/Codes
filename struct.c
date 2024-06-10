#include<stdio.h>

struct employee{
	int id;
	float salary;
	char dept;
};

void main() 
{
	struct employee e1 = {111, 25000.25, 'C'};
	struct employee e2 = {112, 30000.56, 'E'};
	struct employee e3;
	printf("ID of E1: %d",e1.id);
	printf("ID of E2: %d",e2.id);
	printf("Dept of E1: %c\n",e1.id);
	printf("Dept of E2: %c\n",e2.id);
	printf("Dept of E1: %c\n",e1.dept);
	printf("Dept of E2: %c\n",e2.dept);
	printf("After manipulation of data\n");
	e1.dept = 'X';
	e2.dept = 'y';
	printf("Dept of E1: %c\n",e1.id);
	printf("Dept of E2: %c\n",e2.id);
	printf("Dept of E1: %c\n",e1.dept);
	printf("Dept of E2: %c\n",e2.dept);
	
	printf("starting for E3\n");
	e3.id=115;
	e3.salary=46000;
	e3.dept='W';
	printf("E3 salary: %f",e3.salary);
	
}
