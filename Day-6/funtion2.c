//~ 2).Funtion with arguments and with out return value
			//~ reading values:main()
			//~ Display values:Sub fubntion
//Subtration of two numbers
#include<stdio.h>
//Funtion defination and declaration
void sub(int v1,int v2){// formal arguments
		printf("Subtration of %d and %d is %d\n",v1,v2,v1-v2);
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	sub(a,b);//Actual Arguments //funtion calling
	scanf("%d%d",&a,&b);
	sub(a,b);//funtion calling
	return 0;
}
