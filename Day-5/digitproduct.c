//~ input:123456
//~ output:1*2*3*4*5*6-->?
#include<stdio.h>
int main(){
	int n,r,pro=1;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		printf("%d*",r);
		pro=pro*r;
		n=n/10;
	}
	printf("pro=%d",pro);
	return 0;
}
