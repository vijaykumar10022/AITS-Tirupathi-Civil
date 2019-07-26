//~ input:6
	//~ 1 8 42 6 41 2
	// 1+8 8+42 42+6 6+41 41+2
	  //9  50    48  47    43
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
	//min ele and location in array
	int min=array[0];//1
	int loc=0;
	//1 8 42 6 41 2
	for(i=0;i<size;i++){
			if(min>array[i]){//1<1(F),1<8(T),8<42(T),42<6(F),42<41(F),42<2(F)
				min=array[i];//max=8,max=42
				loc=i+1;//2,3
			}
	}
	printf("\nMin=%d and location=%d",min,loc);
	return 0;
}
