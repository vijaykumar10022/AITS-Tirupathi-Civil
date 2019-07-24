
//~ -->logical operators-->AND(&&),OR(||),Not(!)

//~ ex: (10>5)&&(32>55)-->T
//~ 
//~ condition1	condition2	condition1&&Condition2
	//~ T			F			F
	//~ T			T			T
	//~ F			T			F
	//~ F			F			F
	//~ 
//~ ex:(44>32) || (55<22) || (554>65)
//~ condition1	condition2	condition1||Condition2
//~ 
	//~ T			F			T
	//~ T			T			T
	//~ F			F			F
	//~ F			T			T
//~ 
	//~ 
//~ not(!)
//~ 
//~ !(10<5)
//~ T	F
//~ F	T

#include<stdio.h>
int main(){
	//Logical AND(&&) Operation
	//~ if((10<5)&&(3<6)&&(45==45)&&(45!=10)&&(10<=11){
		//~ printf("True");
	//~ }
	//~ else{
		//~ printf("False");
	//~ }
	//Logical OR(||) Operation
	//~ if((23>55)||(55<22)||(47!=12)){
		//~ //F	 F
		//~ // F				T
		//~ //		T			
		//~ printf("True");
	//~ }
	//~ else{
		//~ printf("False");
	//~ }
	//logical not(!)
	//~ if(!((23>55)||(55<22)||(47!=12))){
		//~ printf("True");
	//~ }
	//~ else{
		//~ printf("False");
	//~ }
	
	//~ if(((78>55)||(77>66))&&(77==88)){
		//~ //T			T
		//~ //		T		&&	F
		//~ //			F
		//~ printf("True");
	//~ }
	else{
		printf("False");
	}
	return 0;
}
