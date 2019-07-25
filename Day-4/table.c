//~ intput:5
//~ output:
	//~ 5*1=5
	//~ 5*2=10
	//~ 5*3=15
	//~ 5*4=20
	//~ 
	//~ 
	//~ 5*10=50
#include<stdio.h>
int main(){
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=10;i++){
		printf("%d * %d = %d\n",t,i,t*i);
	}
	return 0;
}
