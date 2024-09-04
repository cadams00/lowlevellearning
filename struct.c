#include <stdio.h>
#include <stdbool.h>

#define MAX_EMPLOYEES 1000

struct employee_t
{
	int id;
	char firstname[64];
	char lastname[64];
	float income;
	bool ismanager;
};

int main(int argc, char const *argv[])
{
	struct employee_t Fred;
	Fred.income = 100.00;
	Fred.ismanager = true;

	return 0;
}