#include<stdio.h>
void plus(int a,int b,int *total){
	*total=a+b;
}
int main(){
	int num1=31,num2=7;
	int total;
	plus(num1,num2,&total);
	printf("tong cua hai so la %d",total);
	return 0;
}
