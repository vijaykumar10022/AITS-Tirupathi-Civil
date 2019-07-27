//User defined funtions
//~ 1).Funtion with out argumetns and with out return value
			//~ reding values:Sub funtion
			//~ display values:Sub Funtion
//Addition of two numbers
#include<stdio.h>
//Funtion defination and declaration
void add(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Addition of %d and %d is %d\n",a,b,a+b);
}
int main(){
	add();//Funtion calling
	return 0;
}

