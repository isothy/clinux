#include <stdio.h>

int main (void)
{
	int a;
	
	a = (getchar() != EOF);
	printf("%d\n", a);
	
	return 0;
	}
