//~relational operators-->,<,>=,<=,!=,==
#include<stdio.h>
int main(){
	int a,b;
    scanf("%d%d",&a,&b);
    if (a==20){
		printf("a=20");
	}
	else if(b==20){
		printf("b=20");
	}
	else if(a==b){
		printf("a=b");
	}
	else {
		printf("a!=20");
	}
	return 0;
} 
