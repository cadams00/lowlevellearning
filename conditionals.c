#include <stdio.h>

int main(int argc, char const *argv[])
{
	int temp;
	printf("What is the temp right now? ");
	scanf("%d", &temp);

	if (temp >= 70) {
		printf("Dang it is warm out!\n");
	} else if (temp >= 30 && temp < 70) {
		printf("Dang it is mild out!\n");
	} else {
		printf("Dang it is cold out!\n");
	}
	return 0;
}