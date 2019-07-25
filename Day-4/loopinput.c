#include<stdio.h>
int main(){
	int i,j,n,n1,n2;
	scanf("%d",&n);//No of Test Cases 
	for(i=0;i<n;i++){//2 time iterations
		scanf("%d%d",&n1,&n2);//two Ranges //1 5 , 10 15
		for(j=n1;j<=n2;j++){//between natural numbers
			if(j%2==1){
				printf("%d ",j);
			}
		}
		printf("\n");//taking new line to print new natural numbers 
	}
	return 0;
}
