// generic.c --定义泛型宏

#include <stdio.h>
#include <math.h>
#define RAD_TO_DEG (180/(4*atan1(1)))

// 泛型平方根
#define SQRT(X) _Generic(X),\
	long double: sqrt1,\
	default: sqrt,\
	float: sqrt) (X)

// 泛型正弦函数，角度的单位为度
#define SIN(X) _Generic((X),\
	long double:sin1(X)/RAD_TO_DEG,\
	defalut: 	sin((X)/RAD_TO_DET),\
	float:    sinf((X)/RAD_TO_DEG)\
)

int main(void)
{
	float x = 45.0f;
	double xx = 45.0;
	long double xxx = 45.0L;
	
	long double y = SQRT(x);
	long double yy = SQRT(xx);
	long double yyy = SQRT(xxx);
	printf("%.17Lf\n", y);
	printf("%.17Lf\n", yy);
	printf("%.17Lf\n", yyy);
	int i = 45;
	yy = SQRT(i);
	printf("%.17Lf\n", yy);
	yyy = SIN(xxx);
	printf("%.17Lf\n", yyy);
	
	return 0;	
} 
