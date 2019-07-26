//~ 5263
	//3625
//~ 3^4+(4-1)+6^4+(3-1)+2^4+(2-1)+5^4+(1-1)--->
#include<stdio.h>
#include<math.h>
int main(){
	int n,oc=0;
	scanf("%d",&n);//5263
	int temp=n;//temp=5263
	//to find count
	while(n!=0){//(5263!=0),526!=0,52!=0,5!=0,0!=0
		oc++;//1,2,3,4
		n=n/10;//5263/10-->526,526/10-->52,52/10-->5,5/10-->0
	}
	int tc=oc;
	printf("oc=%d\n",oc);//4
	printf("temp=%d\n",temp);//5263
	printf("n=%d",n);//0
	//to find expression result
	int l,expre=0;
	while(temp!=0){//5263!=0,526!=0,52!=0,5!=0
		l=temp%10;//-->5263%10-->3,526%10-->6,52%10-->2,5%10-->5,0!=0(F)
		expre=expre+(pow(l,oc)+(tc-1));
			//	0	+(pow(3,4)+(4-1))-->?
			//	?	+(pow(6,4)+(3-1))-->??
			//	??	+(pow(2,4)+(2-1))-->???
			//	???	+(pow(5,4)+(1-1))-->????			
		tc--;//3,2,1,0
		temp=temp/10;//5263/10-->526,526/10-->52,52/10-->5,5/0-->0
	}
	printf("\nExpressiong Result =%d",expre);
	return 0;
}








