//static array
#include<stdio.h>
int main(){
	//locations		1	2	3	4	5	6
	int civile[5]={101,102,103,104,105,106};
	//index			0	1	2	3	4
	//Addresses    100  104 108 112 116
	//~ printf("%d ",civile[0]);//101
	//~ printf("%d ",civile[1]);//102
	//~ printf("%d ",civile[2]);//103
	//~ printf("%d ",civile[3]);//104
	//~ printf("%d ",civile[4]);//105
	//printf("%d location value is %d",3,civile[2]);
	int i;
	for(i=0;i<5;i++){
		printf("%d location value is %d\n",i+1,civile[i]);
		printf("Address of %d is %p\n",civile[i],&civile[i]);
	}	
	return 0;
}
