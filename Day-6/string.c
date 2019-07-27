#include<stdio.h>
int main(){
	char ch[20]="vijaykumarVIJAYKUMAR";
	int i,c1=0,c2=0;
	for(i=0;i<=20;i++){
		if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o' ||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'){
			c1++;
		}
		else{
			c2++;
		}
	}
	printf("Ovel count&nouns =%d ,%d",c1,c2);
	return 0;
}


