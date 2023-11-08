#include <stdio.h>
#include <math.h>

int main()
{
double iloczyn = 1;
int i,j;
for(i=1; i<=1000;i++)
	{
	iloczyn = iloczyn*pow(i, 0.001);
	}



printf("%f \n", iloczyn);


}
