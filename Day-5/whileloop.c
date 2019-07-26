//~ while Loop Syntax:
//~ ----------------
//~ while(condition){
		//~ statements;
		//~ inc/decre;
//~ }
//Natural Numbers sum
	//n(n+1)/2
//~ input:5
//~ output:1+2+3+4+5-->15
#include<stdio.h>
int main(){
	int n,sum=0,osum=0,esum=0;
	scanf("%d",&n);//5
	//~ while(n!=0){//(5!=0)(T),(4!=0)(T),(3!=0)(T),(2!=0)(T),(1!=0)(T),(0!=0)(F)
		//~ sum=sum+n;//0+5-->5,5+4=9,9+3-->12,12+2-->14,14+1-->15
		//~ n--;//4,3,2,1,0
	//~ }
	//~ printf("Sum=%d\n",sum);
	//Sum of odd number
	//~ while(n!=0){
		//~ if(n%2==1){
			//~ osum=osum+n;
		//~ }
		//~ n--;
	//~ }
	//~ printf("Odd Sum =%d",osum);
	//Sum of even number
	while(n!=0){
		if(n%2==0){
			esum=esum+n;
		}
		n--;
	}
	printf("Even Sum =%d",esum);
	
	return 0;
}
