// running.c -- A useful program for runners
#include <stdio.h>
const int S_PER_M = 60;				// 1���ӵ�����
const int S_PER_H = 3600;			// 1Сʱ�ķ�����
const double M_PER_K = 0.62137;		// 1�����Ӣ����
int main(void)
{
	double distk, distm;		// �ܹ��ľ���(�ֱ��Թ����Ӣ��Ϊ��λ)
	double rate;				// ƽ���ٶ�(��Ӣ��/СʱΪ��λ)
	int min, sec;				// �ܲ���ʱ(�Է��Ӻ���Ϊ��λ)
	int time;					// �ܲ���ʱ(����Ϊ��λ)	
	double mtime;				// ��1Ӣ����Ҫ��ʱ�䣬����Ϊ��λ
	int mmin, msec;				// ��1Ӣ����Ҫ��ʱ�䣬�Է��Ӻ���Ϊ��λ
	
	printf("This program converts your time for a metric race\n");
	printf("to a time for running a mile and to your average\n");
	printf("speed in miles per hour.\n");
	printf("Please enter, in kilometers, the distance run.\n");
	scanf("%lf", &distk);			// %lf��ʾ��ȡһ��double���͵�ֵ
	printf("Next enter the time in minutes and seconds.\n");
	printf("Begin by entering the minutes.\n");
	scanf("%d", &min);
	printf("Now enter the seconds.\n");
	scanf("%d", &sec);
	
	time = S_PER_M * min + sec;		// ��ʱ��ת������
	distm = M_PER_K * distk;		// �ѹ���ת����Ӣ��
	rate = distm/time * S_PER_H;	// Ӣ��/�� * ��/Сʱ = Ӣ��/Сʱ
	mtime = (double) time / distm;	// ʱ��/���� = ��1Ӣ�����õ�ʱ��
	mmin = (int) mtime / S_PER_M;	// ���������
	msec = (int) mtime % S_PER_M;	// ���ʣ�������
	
	printf("You ran %1.2f km (%1.2f miles) in %d min, %d sec.\n",
			distk, distm, min, sec);
	printf("That pace corresponds to running a mile in %d min, ",
			mmin);
	printf("%d sec.\nYour average speed was %1.2f mph.\n", msec, rate);
	
	return 0; 
}  
