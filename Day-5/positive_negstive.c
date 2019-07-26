//~ input:
	//~ 10
	//~ -4 1 2 5 8 7 -78 -41 25 -74
//~ output:positive count=6
	   //~ negative count=4
#include<stdio.h>
int main(){
	int size;
	printf("Enter array size:");
	scanf("%d",&size);//10
	int array[size];//40 bytes 10 ele
	int i;
	//insert elements into array
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	
	return 0;
}
