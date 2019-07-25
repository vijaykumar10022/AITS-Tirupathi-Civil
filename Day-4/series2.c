//~ input:10
//~ output:	1	24	
//~ 
//~ explanation:1*(1^2)	3*(2^3)	5*(3^4)	7*(4^5)
#include<stdio.h>
#include<math.h>
int main(){
	int i,n,t=1,v=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		long long int expre=v*pow(t,t+1);
		t++;
		v=v+2;
		printf("%lld\t",expre);
	}
	return 0;
}
