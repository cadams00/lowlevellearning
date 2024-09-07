#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//definese what is in the structure
struct employee_t {
	int id;
	int income;
	bool staff;
};

//uses the structure and a pointer to an instance of that struct to set the default values.
int initilize_employee(struct employee_t *e) {
	static int numEmployees = 0;
	numEmployees++;

	e->id = numEmployees;
	e->income = 100;
	e->staff = true;

	return numEmployees;
}

int main(int argc, char const *argv[])
{
	//set a number to multiply malloc by 
	int n = 4;

	// create a struct called employees using a pointer that dynamicly creates the memory needed.
	struct employee_t *employees = malloc(sizeof(struct employee_t)*n);
	//if statement to check if malloc worked and memory was assigned
	if (employees == NULL) {
		printf("The allocator failed :-( \n");
		return -1;
	}

	//call the initilize_employee function on the instance of employees to set the defaults
	int i = 0;
	for (int i = 0; i < n; ++i)
	{
		initilize_employee(&employees[i]);
		//print the values of the struct set.
		printf("%d\n", employees[i].id);
		printf("%d\n", employees[i].income);
		printf("%d\n", employees[i].staff);
		printf("\n");
	}

	free(employees);
	employees = NULL;

	return 0;
}					