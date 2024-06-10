#include<stdio.h>

struct employee{
	int id;
	float salary;
	char dept[30];
};
int main()
{
	struct employee e1;
	e1.id=115;
	e1.salary=45000;
	strcpy(e1.dept,"CSE");
	printf("E1 dept: %s",e1.dept);
	return 0;
}
