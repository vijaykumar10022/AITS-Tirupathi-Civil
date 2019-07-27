//~ Funtions using arrays
//~ 1.size
//~ 2.creating array 
//~ 3.reading
//~ 4.display
//~ 5.your choice
#include<stdio.h>
void reading_values(int size,int array[]){
		int i;
		for(i=0;i<size;i++){
			scanf("%d",&array[i]);
		}
}
void display_values(int size,int array[]){
		int i;
		for(i=0;i<size;i++){
			printf("%d ",array[i]);
		}
}
void  max(int size,int array[]){
	int max=array[0];//1
	int loc=0;
	int i;
	//1 8 42 6 41 2
	for(i=0;i<size;i++){
			if(max<array[i]){//1<1(F),1<8(T),8<42(T),42<6(F),42<41(F),42<2(F)
				max=array[i];//max=8,max=42
				loc=i+1;//2,3
			}
	}
	printf("\nMAx=%d and location=%d",max,loc);
}
int main(){
	int size;
	scanf("%d",&size);
	int array[size];
	reading_values(size,array);
	display_values(size,array);
	max(size,array);
	scanf("%d",&size);
	int array2[size];
	reading_values(size,array2);
	display_values(size,array2);
	max(size,array2);
	return 0;
}
