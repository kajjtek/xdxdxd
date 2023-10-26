#include <stdio.h>

int main()
{
int a,b,i,j;
printf("Podaj a \n");
scanf("%d", &a);
b = 2 * a;

for(i=0; i<a; i++)
	{
	for(j=0; j<b; j++)
		{
		printf("*");
		}
	printf("\n");
	}

}
