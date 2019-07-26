//~ do_while:
//~ --------
//~ 
	//~ syntax:
	//~ do{
		//~ statements;
		//~ inc/decre;//Pass/fail
	//~ }while(condition);//fail
//sum of natural numbers for given number
//~ input:5
//~ output:1+2+3+4+5-->15
#include<stdio.h>
int main(){
	int n,sum=0;
	scanf("%d",&n);
	int i=1;
	do{
		sum=sum+i;
		i++;
	}while(i!=(n+1));
	printf("Sum =%d",sum);	
	return 0;
}
