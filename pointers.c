#include <stdio.h>
#include <stdbool.h>

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
	// create a struct called chris
	struct employee_t Chris;

	//call the initilize_employee function on the instance of Chris to set the defaults
	initilize_employee(&Chris);

	//print the values of the struct set.
	printf("%d\n", Chris.id);
	printf("%d\n", Chris.income);
	printf("%d\n", Chris.staff);

	// regular variable int created 
	int x = 3;

	// pointer to the location of variable x created 
	int *pX = &x;

	printf("%d\n", *pX);
	printf("%p\n", pX);
	return 0;
}					