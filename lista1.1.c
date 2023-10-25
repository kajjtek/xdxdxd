#include <stdio.h>

int main()
{
char str[100] = "ABRAKADABRA";
int i, j, k, z;

for(i=0;  i< 11; i++)
	{
	for(k=0; k<i; k++)
		{
		printf(" ");
		}
	for(j=11; j>=i; j--)
		{
		printf("%c ", str[j]);
		}
	printf("\n");
	}
}
