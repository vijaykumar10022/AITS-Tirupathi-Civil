//f(x)=x^2+5x+2x+12
//f(2)=2^2+5*2+2*2+12
	  //~ =4+10+4+12
	  //~ =30
//~ input:2
//~ output:30
//~ explanation:f(x)=x^2+5x+2x+12 ,f(2)=2^2+5*2+2*2+12
//f(x,y)=x^3+2*x^2*y+y^3+5*x*y+5*x+2*y+x/y
//~ input=2 3
//~ output:? or f(2,3)=?
#include <stdio.h>
#include <math.h>
int main()
{
	int x,result;
	printf("Enter your x value:");
	scanf("%d",&x);
	result=pow(x,2)+5*x+2*x+12;
	printf("Result= %d ",result);
	return 0;
}
