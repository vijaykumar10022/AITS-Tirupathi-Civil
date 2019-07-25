//~ input:10
//~ output:5	  11		19		29	41		
		
//~ Explanation:2^2+1 3^2+2	4^2+3	5^2+4 6^2+5	 
#include<stdio.h>
#include<math.h>
int main(){
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int expre=pow(i+1,2)+i;
		printf("%d^%d+%d-->",i+1,2,i);
		printf("%d\n",expre);
	}
	return 0;
}
