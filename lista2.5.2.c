#include <stdio.h>

int main()
{
int n,i,j,x,suma1,suma2; //dsdadada
for(i=1;i<1000;i++)
	{
	for(n=1; n<i;n++)
		{
		if( i%n==0)
			{
			suma1 += n;
			}
		}
	for(j=1;j<1000;j++)
		{
		for(x=1; x<j; x++)
			{
			if(j%x==0)
				{
				suma2 += x;
				}
			}
		if(suma1!=suma2 && suma1==j && suma2==i)
			{
			printf("(%d,%d)\n", i,j);
			}
		suma2=0;
		}

	suma1 = 0;
	}



}
