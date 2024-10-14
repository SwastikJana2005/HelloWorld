#include<stdio.h>
int menu(){
	int n;
	printf("press 1. to add:\n");
	printf("press 2. to sub:\n");
	printf("press 3. to mul:\n");
	printf("press 4. to div:\n");
	printf("press 5. to find remainder: ");
	scanf("%d",&n);
	return n;
}
int main(){
	int n,a,b;
	n=menu();
	printf("Enter two digit: ");
	scanf("%d %d",&a,&b);
	if(n==1) printf("%d",a+b);
	else if(n==2) printf("%d",a-b);
	else if(n==3) printf("%d",a*b);
	else if(n==4){
		if(a<b||b==0) printf("divisor should be lesser");
		else printf("%d",a/b);
	}
	else if(n==5){
		if(a<b||b==0) printf("divisor should be lesser");
		else printf("%d",a%b);
	}
	else printf("Wrong option:");
	return;
}
