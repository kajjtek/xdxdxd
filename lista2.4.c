#include <stdio.h> 
int main()
{
int i;
int intczas = 0;
int dzien = 0;
int rok= 0;
int mies;

printf("Podaj date \n");
scanf("%d %d %d", &dzien, &mies, &rok);

if(rok>0)
	{
	for(i=1;i<=rok;i++)
		{
		if((rok%4==0 && rok%100!=0) || (rok%400==0))
		{
			intczas += 366
		}
		else
		{
			intczas += 365
		}
		}
	}
	else
	{
	printf("Podaj date A.D.");
	return 0;
	}

if(rok%4==0)
	{
	switch(mies)
		{
		case 1:
			intczas = intczas;
			break;
		case 2:
			intczas += 31;
			break;
		case 3:
			intczas += 60;
			break;
		case 4:
			intczas += 91;
			break;
		case 5:
			intczas += 121;
			break;
		case 6:
			intczas += 152;
			break;
		case 7:
			intczas += 182;
			break;
		case 8:
			intczas += 213;
			break;
		case 9:
			intczas +=244;
			break;
		case 10:
			intczas += 274;
			break;
		case 11:
			intczas += 305;
			break;
		case 12:
			intczas += 335;
			break;
		default :
		printf("miesiac jest niepoprawny");
		}
	}
	else
	{
	switch(mies)
		{
		case 1:
			intczas = intczas;
			break;
		case 2:
			intczas += 31;
			break;
		case 3:
			intczas += 59;
			break;
		case 4:
			intczas += 90;
			break;
		case 5:
			intczas += 120;
			break;
		case 6:
			intczas += 151;
			break;
		case 7:
			intczas += 181;
			break;
		case 8:
			intczas += 212;
			break;
		case 9:
			intczas +=243;
			break;
		case 10:
			intczas += 273;
			break;
		case 11:
			intczas += 304;
			break;
		case 12:
			intczas += 334;
			break;
		default:
		printf("miesiac jest niepoprawny");
		}
	}

intczas += dzien;
printf("Od roku 0 minelo %d dni \n", intczas);	
}
