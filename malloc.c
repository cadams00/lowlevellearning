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
void initilize_employee(struct employee_t *e) {
	e->id = 879807;
	e->income = 100;
	e->staff = true;

	return;
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
	initilize_employee(&employees[0]);

	//print the values of the struct set.
	printf("%d\n", employees[0].id);
	printf("%d\n", employees[0].income);
	printf("%d\n", employees[0].staff);

	free(employees);
	employees = NULL;

	// // regular variable int created 
	// int x = 3;

	// // pointer to the location of variable x created 
	// int *pX = &x;

	// printf("%d\n", *pX);
	// printf("%p\n", pX);
	return 0;
}					