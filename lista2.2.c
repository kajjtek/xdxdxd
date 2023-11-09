#include <stdio.h>

int main()
{
float x=1;
float suma = 0;
int n;
while(suma<=10)
	{
		suma += (1/x);
		x++;
	}
n =  x-1;
printf("jest prawdziwa dla n = %d \n", n);
}
