//f(x,y)=x^3+2*x^2*y+y^3+5*x*y+5*x+2*y+x/y
#include<stdio.h>
#include<math.h>
int main()
{
	float x,y;
	float r;
	scanf("%f%f",&x,&y);
	r=pow(x,3)+2*(pow(x,2))*y+pow(y,3)+5*x*y+5*x+2*y+x/y;
	printf("f(%f,%f)=%.2f",x,y,r);
	return 0;
} 
