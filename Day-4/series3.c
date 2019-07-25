//~ input:10
//~ output:3	7	11
//~ 
//~ explanation:1+2	3+4	5+6
#include<stdio.h>
int main(){
	//~ int i,o,e,n,t=1;
	//~ scanf("%d",&n);
	//~ for (i=1;i<=n;i++){
		//~ if(t%2==1){
			//~ o=t;
			//~ t++;
		//~ }
		//~ if(t%2==0){
			//~ e=t;
			//~ t++;
		//~ }
		//~ printf("%d\t",o+e);
	//~ }
	int n,i,k=2;
	scanf("%d",&n);
	for(i=1;i<=n*2;i=i+2){
		printf("%d\t",i+k);
		k=k+2;
	}
	return 0;
}
