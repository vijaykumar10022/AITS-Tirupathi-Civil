//~ 4).Funtion with arguments and with return value
			//~ reading values:main()
			//~ display values:main()
//division of two numbers
#include<stdio.h>
int div(int n1,int n2){
		int d=n1/n2;
		return d;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Division of %d and %d is %d\n",a,b,div(a,b));	
	scanf("%d%d",&a,&b);
	printf("Division of %d and %d is %d",a,b,div(a,b));	
	return 0;
}
