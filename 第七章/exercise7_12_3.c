/* exercise7_12_3.c */
#include <stdio.h>

int main(void)
{
	int num, Neven = 0, Nodd = 0;
	int Seven = 0, Sodd = 0;
	double Eeven, Eodd;
	
	while(scanf("%d", &num), num!=0)
	{
		if(num%2==0)
		{
			Neven++;
			Seven = Seven + num;
		}	
		else
		{
			Sodd = Sodd + num;
			Nodd++;
		}	
	}
	Eeven = (double) Seven/Neven;
	Eodd = (double) Sodd/Nodd;
	
	printf("The number of even numbers is %d ,"
			"and the average of these numbers is %lf\n.", Neven, Eeven);
	printf("The number of odd numbers is %d, "
			"and the average of these numbers is %lf\n.", Nodd, Eodd);
			
	return 0;
}
