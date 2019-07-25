//~ 18AK5A0101
	//~ .
	//~ .
	//~ .
//~ 18AK5A0153
#include<stdio.h>
int main(){
	int i,t=1,r1,r2;
	scanf("%d%d",&r1,&r2);
	for (i=r1;i<=r2;i++)
	{
		if(i==141)
		{
			break;
		}
		else
		{
			if(i==110||i==122)
			{
				continue;
			}
			else
			{
				printf("%d.18AK5A01%d\n",t,i);
				t++;
			}
		}
	}
	return 0;
}





