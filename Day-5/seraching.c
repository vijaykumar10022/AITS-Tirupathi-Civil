//~ input:6
	//~ 77 12 44 44 11 10
	//44
//~ output:count=2
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
	//display array elements 
	printf("Array elements are:");
	for(i=0;i<size;i++){
		printf("%d ",array[i]);
	}
	//searching elements count
	int search;
	int count=0;
	printf("\nEnter Your ele:");
	scanf("%d",&search);
	for(i=0;i<size;i++){
		if(search==array[i]){
			count++;
		}
	}
	printf("%d value count is %d",search,count);
	return 0;
}

