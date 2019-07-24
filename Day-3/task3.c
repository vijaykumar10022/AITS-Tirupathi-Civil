//swapping
//~ input:51 21
//~ output:
		//~ before swapping a=51 b= 21
		//~ after swapping  a=21 b=51 
#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);//51 21
	printf("Before swapping a=%d and b=%d\n",a,b);
	//~ int c;
	//~ c=a;//c=51
	//~ a=b;//a=21
	//~ b=c;//b=51
	a=a+b;//a=51+21-->72
	b=a-b;//b=72-21-->51
	a=a-b;//a=72-51-->21
	printf("After swapping a=%d and b=%d\n",a,b);
	return 0;
}
