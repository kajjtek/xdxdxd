#include <stdio.h>
#include <math.h>

int main()
{
float a, b, c,d;
float x1, x2;
float pierwd;
printf("Program liczy rozwiazania funkcji kwadratowej. \n");
printf("podaj a, b i c \n");
scanf("%f %f %f", &a, &b, &c);
d = b*b-4*a*c;
pierwd = sqrt(d);
if(d>0)
	{
	x1= (-b + pierwd)/(2*a);
	x2 = (-b-pierwd)/(2*a);
	printf("Wyniki to %f i %f \n", x1, x2);
	}

if(d==0)
	{
	x1 = -b/(2*a);
	printf("Wynik to %f \n", x1);
	}
if(d<0)
	{
	printf("Nie ma rozwiazan \n");
	}
}
