//~ input:1234
//~ output:4
#include<stdio.h>
int main(){
	long long int n;
	int count=0;
	scanf("%lld",&n);
	while(n!=0)//(1234!=0)(T),123!=0(T),12!=0(T),1!=0(T),0!=0(F)
	{
		count++;//1,2,3,4
		n=n/10;//1234/10-->123,123/10-->12,12/10-->1,1/10-->0
	}
	printf("Count=%d",count);
	return 0;
}

5263

5^4+(4-1)+2^4+(3-1)+6^4+(2-1)+3^4+(1-1)--->












