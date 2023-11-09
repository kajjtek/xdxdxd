#include <stdio.h>

int main()
{
int x=0;
float suma = 0;
int n;
while(suma<=10)
	{
		x++;
		suma += (1/x);
	}
printf("jest prawdziwa dla n = %d \n", x);
}
