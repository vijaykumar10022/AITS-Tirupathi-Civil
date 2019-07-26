//Dynamic method using arrays
//~ step:1.read array size
//~ step:2.allocate that size in to array(array creation)+
//~ stem:3.insert elements into array
//~ step:4.Display array elements
//~ step:5.your choice
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
	//Array of sum
	int sum=0;
	for(i=0;i<size;i++){
		sum=sum+array[i];
	}
	printf("\nSUM=%d",sum);
	return 0;
}
