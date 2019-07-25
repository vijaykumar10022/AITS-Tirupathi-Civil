//Natural Numbers
//~ input:10 50
//~ output:10 11 12 13 .....50
#include <stdio.h>
int main()
{
	int i,r1,r2;
	scanf("%d%d",&r1,&r2);//1 200
	//~ for(i=r1;i<=r2;i++){ ---->Forward direction
		//~ printf("%d ",i);
	//~ }
	//~ for(i=r2;i>=r1;i--){//--->Reverse Direction
		//~ printf("%d ",i);
	//~ }
	//~ for(i=r1;i<=r2;i++){//Even Number between two ranges
		//~ if(i%2==0){//if(i%!=1)
			//~ printf("%d ",i);
		//~ }
	//~ }
	//~ for(i=r1;i<=r2;i++){//Odd Number between two ranges
		//~ if(i%2!=0){//if(i%2==1)
			//~ printf("%d ",i);
		//~ }
	//~ }
	for(i=r1;i<=r2;i++){// Multiples of value  10 not 11
		if(i%3==0){
			printf("%d ",i);
		}
	}
	return 0;
}



