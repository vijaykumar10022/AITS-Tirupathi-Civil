//Rupees to dollers conversion
//~ input:200
//~ output:200 Rs = 2.9 Dollers
#include<stdio.h>
int main(){
	int rupees;//variable declaration
	scanf("%d",&rupees);//reading value
	float Doller =rupees/68.96;//finding dollers
	printf("%d ₹ = %.1f $",rupees,Doller);//display Dollers
	return 0;
}

