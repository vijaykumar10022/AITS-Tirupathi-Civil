//factorial of number
//~ input:5
//~ output:5*4*3*2*1-->120
#include<stdio.h>
#include<stdlib.h>
int main(int name, char **vijay){
	int n=atoi(vijay[1]);
	int i,fact=1;
	for(i=n;i>=1;i--){
		fact=fact*i;
	}
	printf("%d\n",fact);
	return 0;
}
