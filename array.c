#include <stdio.h>

#define MAX_ID 32

int main(){
	int ids[MAX_ID] = {0,1,2};
	printf("%d\n", ids[2]);
	ids[3] = 0x41;
	printf("%d\n", ids[3]);
	for (int i = 0; i < MAX_ID; ++i)
	{
		/* code */
		printf("%d\n", ids[i]);
	}
}