//gmail validation
//~ input:
	//~ username:12345
	//~ password:98765
//~ output: login Sucessfull..!!
		//~ user 12345
#include<stdio.h>
int main(){
	int user_name,password;
	printf("Enter Username:");
	scanf("%d",&user_name);
	if(user_name==12345||user_name==1357||user_name==2468)
	{
		printf("Enter Password:");
		scanf("%d",&password);
		if(password==987654)
		{
			printf("Login Sucessfull..!!\n");
			printf("user -->%d",user_name);
		}
		else
		{
			printf("Entered Password is %d wrong",password);
		}
	}
	else
	{
		printf("Your Entered username is %d wrong",user_name);
	}
	return 0;
}
