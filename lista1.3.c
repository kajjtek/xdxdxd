#include <stdio.h>

int main()
{
int a,b,i,j;
printf("Podaj a i b \n");
scanf("%d %d", &a, &b);

for(i=0; i<a; i++)
	{
	for(j=0; j<b; j++)
		{
		printf("*");
		}
	printf("\n");
	}

}
