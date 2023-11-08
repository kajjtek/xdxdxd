#include <stdio.h>

int main()
{
float i;
float suma = 0;
int n;
for(i=1; i<100000; i++)
	{
	suma = suma + (1/i);
	if(suma>10)
		{
		n = i;
		printf("Nierownosc jest prawdziwa dla n = %d \n", n);
		break;
		}
	}
}
