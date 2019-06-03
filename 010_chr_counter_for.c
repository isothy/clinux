#include <stdio.h>

int main(void)
{
	double nc;
	
	for(nc=0; getchar() != EOF; ++nc){
		; /* in for body at least a statement should be!*/
		}
	printf("%.0f\n", nc);
}		
