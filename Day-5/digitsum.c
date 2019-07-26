//~ input:123456
//~ output:1+2+3+4+5+6-->21
#include<stdio.h>
int main(){
	int n,r,dsum=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		printf("%d+",r);
		dsum=dsum+r;
		n=n/10;
	}
	printf("sum=%d",dsum);
	return 0;
}
