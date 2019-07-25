//~ input:3
	//~ 10 3
//~ output:Multiplication of 10 and 3 is 30
//~ input:4
	  //~ 10 3
//~ output:Division of 10 and 4 is 2
//~ input:6
//~ output:grater than 5
//~ 1.ADD
//~ 2.SUB
//~ 3.MUL
//~ 4.Div
//~ 5.MOD
#include<stdio.h>
int main(){
	int op,v1,v2;
	printf("1.ADD\n2.SUB\n3.MUL\n4.Div\n5.MOD\nChoose your option:");
	scanf("%d",&op);
	switch(op){
		case 1:scanf("%d",&v1);
				scanf("%d",&v2);
				printf("Addition of %d and %d is %d\n",v1,v2,v1+v2);
				break;
		case 2:scanf("%d",&v1);
				scanf("%d",&v2);
				printf("Subtration of %d and %d is %d\n",v1,v2,v1-v2);
				break;
		case 3:scanf("%d",&v1);
				scanf("%d",&v2);
				printf("Multiplication of %d and %d is %d\n",v1,v2,v1*v2);
				break;
		case 4:scanf("%d",&v1);
				scanf("%d",&v2);
				printf("Division of %d and %d is %d\n",v1,v2,v1/v2);
				break;
		case 5:scanf("%d",&v1);
				scanf("%d",&v2);
				printf("Mod of %d and %d is %d\n",v1,v2,v1%v2);
				break;
		default:printf("Invalid option");
	}
	return 0;
}






