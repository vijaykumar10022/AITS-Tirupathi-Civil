//~ 1).input:700days
   //~ output:1 year 47 weeks 6 days
//~ explanation:700 1-->365-->335--> 47-->6days

//~ input:700
//~ output:1 y 47 w 6 d
#include<stdio.h>
int main(){
	int t_days;
	scanf("%d",&t_days);//700
	int years=t_days/365;//700/365-->1
	int weeks=(t_days%365)/7;//700%365-->335/7
	int r_days=t_days-(years*365+weeks*7);//
			//  700 -  (1*365+47*7)
			// 700 - (365 +329)
			// 700 -694
			// 6
	printf("%d years %d weeks %d days",years,weeks,r_days);
	return 0;
}
//~ 365)550(1
	//~ 365
	//~ ---
	//~ 7)185(26
	  //~ 14
	  //~ --
	   //~ 45
	   //~ 42
	   //~ --
	    //~ 3
//~ rday=t_days -(y*365+w*7)
    //~ =550   - (1*365+26*7)
    //~ =550 - (365+182)
    //~ =550-547
    //~ =3
//~ 1500



variable syntax:
datatype variable_name;//variable initialization

varaible_name=value;//declaration










