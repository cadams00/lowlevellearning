#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_EMPLOYEES 1000

struct __attribute__((__packed__))  employee_t
{
	int id;
	char firstname[64];
	char lastname[64];
	float income;
	bool ismanager;
};

int main(int argc, char const *argv[])
{
	struct employee_t employees[MAX_EMPLOYEES];
	int i = 0;
	for (int i = 0; i < MAX_EMPLOYEES; ++i) {
		employees[i].id = i;
		strcpy(employees[i].firstname, "empty");
		strcpy(employees[i].lastname, "empty");
		employees[i].income = 0;
		employees[i].ismanager = false;
	}
	for (int i = 0; i < MAX_EMPLOYEES; ++i)
	{
		printf("The Employee's id is %d\n", employees[i].id);
		printf("The Employee's Full Name is %s %s\n", employees[i].firstname, employees[i].lastname);
		printf("The Employee's income is %f\n", employees[i].income);
		printf("The Employee is a manager %b\n", employees[i].ismanager);
		printf("\n");
	}
	return 0;
}