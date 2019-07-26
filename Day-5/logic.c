//~ 5263

//~ 5^4+(4-1)+2^4+(3-1)+6^4+(2-1)+3^4+(1-1)--->
#include<stdio.h>
#include<math.h>
int main(){
	long long int n;
	int count=0;
	scanf("%lld",&n);
	long long int tem=n;
	while(n!=0)//(1234!=0)(T),123!=0(T),12!=0(T),1!=0(T),0!=0(F)
	{
		count++;//1,2,3,4
		n=n/10;//1234/10-->123,123/10-->12,12/10-->1,1/10-->0
	}
	printf("Count=%d\n",count);
	int tc=count;//4
	printf("n=%lld",tem);//1234
	int tr,result=0;//,259
	while (tem!=0){//(1234!=0)(T),(123!=0)(T)
		tr=tem%10;//4,123%10-->3
		result=result+(pow(tr,tc)+count-1);
		//		0 +(pow(4,4)+(4-1)-->256+3->259
		//		259+(pow(3,4)+(3-1)-->?
		count--;//4,3
		tem=tem/10;//1234/10-->123
	}
	printf("\nresult=%d",result);
	return 0;
}








