//~ 3).Funtion  with out arguments and with  return value
			//~ reading values:sub funtion
			//~ Display values: main()
//Multiplication of two number
#include<stdio.h>
int mul(){
	int a,b;
	scanf("%d%d",&a,&b);	
	int m=a*b;
	printf("Multiplication of %d and %d is ",a,b);
	return m;
}
int main(){
	printf("%d\n",mul());
	printf("%d\n",mul());
	return 0;
}
