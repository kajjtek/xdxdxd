#include <stdio.h>

int main()
{
int x,i,j,k;
printf("Podaj wysokosc trojkata \n");
scanf("%d", &x);

for(i=0; i<x; i++)
	{
	for(j=i;j<x; j++)
		{
		printf(" ");
		}
	for(k=0; k<=i;k++)
		{
		printf("* ");
		}
	printf("\n");
	}
}
