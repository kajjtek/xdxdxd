#include <stdio.h>

int main()
{
int rok;

printf("Program sprawdza czy rok jest przestepny. Podaj rok \n");
scanf("%d", &rok);

if((rok%4==0 && rok%100!=0) || rok%400==0)
	{
	printf("Rok %d jest przestepny \n", rok);
	}
	else
	{
	printf("Rok %d nie jest przestepny \n", rok);
	}

}
