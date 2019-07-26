
//~ input:6
	//~ 1 8 42 6 41 2
//~ output:max=42
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
	//max ele and location in array
	int max=array[0];//1
	int loc=0;
	//1 8 42 6 41 2
	for(i=0;i<size;i++){
			if(max<array[i]){//1<1(F),1<8(T),8<42(T),42<6(F),42<41(F),42<2(F)
				max=array[i];//max=8,max=42
				loc=i+1;//2,3
			}
	}
	printf("\nMAx=%d and location=%d",max,loc);
	return 0;
}


