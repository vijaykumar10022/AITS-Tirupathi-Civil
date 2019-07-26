//input:7845612
//output:2+6+4+8 -->20
#include<stdio.h>
int main(){
	int n,sum=0;
	scanf("%d",&n);
	do{
		int l=n%10;
		if(l%2==0){
			printf("%d ",l);
			sum=sum+l;
		}
		n=n/10;
	}while(n!=0);
	printf("\nSum =%d ",sum);
	return 0;
}
