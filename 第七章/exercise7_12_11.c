/* exercise7_12_11.c */
#include <stdio.h>

#define ARTICHOKE 2.05
#define BEET 1.15
#define CARROT 1.09
#define WEIGHT1 5
#define WEIGHT2 20
#define FEE1 6.5
#define FEE2 14
#define RATE3 0.5
#define BREAK 100
#define DISCOUNTRATE 0.05

 
int main(void) 
{
	double weight, Wartichoke = 0, Wbeet = 0, Wcarrot = 0, totalWeight;
	double discount, tranPackFee, totalFee;
	char ch1 = 'o', ch2;
	
	while(ch1=='o')	
	{
		printf("******************************************\n");
		printf("Please select the vegetables that you want to buy:\n");
		printf("1) artichoke $%.2lf	2) beet $%.2lf\n", ARTICHOKE, BEET);
		printf("3) carrot $%.2lf 	4) quilt.\n", CARROT);
		printf("******************************************\n");
		
		scanf("%c", &ch2);
		if(ch2!='4')
		{
			printf("Enter the weight:");
			scanf("%lf", &weight);
		}
		while(getchar()!='\n')
			getchar();
		switch(ch2)
		{
			case '1':
				Wartichoke += weight;
				break;
			case '2':
				Wbeet += weight;
				break;
			case '3':
				Wcarrot += weight;
				break;
			case '4':
				ch1 = 'q';
				break;
			default:
				printf("Your input is incorrect!\n\n");	
		} 
	}
	
	// 计算总重量和运费 
	totalWeight = Wartichoke + Wbeet + Wcarrot;
	if(totalWeight<WEIGHT1)
		tranPackFee = FEE1;
	else if(totalWeight<=WEIGHT2)
		tranPackFee = FEE2;
	else if(totalWeight>WEIGHT2)
		tranPackFee = FEE2 + (totalWeight-WEIGHT2) * RATE3; 
	
	// 计算总费用
	totalFee = Wartichoke * ARTICHOKE + Wbeet * BEET + Wcarrot * CARROT;
	
	printf("The total fee of vegetable is $%.2lf.\n", totalFee);
	printf("The transport and pack fee is $%.2lf.\n", tranPackFee);
	if(totalFee>BREAK)
	{
		discount = totalFee * DISCOUNTRATE;
		totalFee -= discount;
		printf("The discount is $.2lf,\n", discount);	
	}	
	printf("What you have bought is\n");
	if(Wartichoke>0)
		printf("1) artichoke $%.2lf  weight: $%.2lfpounds.\n", ARTICHOKE, Wartichoke);
	if(Wbeet>0)
		printf("2) beet $%.2lf  weight: $%.2lfpounds.\n", BEET, Wbeet);
	if(Wcarrot>0)
		printf("3) carrot $%.2lf  weight: $%.2lfpounds.\n", CARROT, Wcarrot);
	printf("Finally you have pay $%.2lf.\n", (totalFee + tranPackFee));
	
	return 0;
} 
