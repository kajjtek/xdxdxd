#include <stdio.h>

int main()
{
int n,i,suma;
for(i=1;i<1000;i++)
	{
	for(n=1; n<i;n++)
		{
		if( i%n==0)
			{
			suma += n;
			}
		}
	if(suma==i)
		{
		printf("%d ", i);
		}
	suma = 0;
	}



}
