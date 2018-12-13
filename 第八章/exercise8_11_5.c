/* exercise8_11_5.c */
#include <stdio.h>

int main(void)
{
	int guess, min = 1, max = 100;
	char response1, response2;
	
	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\n Respond with a y if my guess is right and with");
	printf("\nan n if it is wrong.\n");
	
	while(1)		/* 获取响应，与y做对比 */
	{
		printf("Uh...is your number %d?\n", (min+max)/2);
		response1 = getchar();
		if(response1=='y')
			break;	
		else if(response1=='n')
		{
			while(getchar() != '\n')
				continue;
			guess = (min + max)/2;
			printf("Well, then, is it more big than %d?\n", guess);
			response2 = getchar();
			if(response2=='y')
				min = guess;
			else if(response2=='n')
				max = guess;
			else
				printf("Sorry, I understand only y or n.\n");	
		}			
		else
			printf("Sorry, I understand only y or n.\n");
		while(getchar() != '\n')
			continue;
	}

	printf("I knew I could do it!\n");
	
	return 0; 
} 

