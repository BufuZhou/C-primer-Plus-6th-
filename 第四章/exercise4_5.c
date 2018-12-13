/* exercise4_5.c -- the time for downloading the file */
#include <stdio.h>  
int main(void)
{
	float downloadSpeed, fileSize, downloadTime;
	
	printf("Enter the download speed(Mb/s):");
	scanf("%f", &downloadSpeed);
	printf("Enter the size of the file(MB):");
	scanf("%f", &fileSize);
	
	downloadTime = fileSize/(downloadSpeed/8);
	
	printf("At %.2f megabits per second, a file of %.2f megabytes\n"
			"downloads in %.2f seconds", downloadSpeed, fileSize, downloadTime);
			
	return 0;
}
