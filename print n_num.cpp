/*1.	Write a program in C to print first n numbers using recursion.*/
#include<stdio.h>
int print_n(int num)
{
static	int N_num;
	if(num==1)
	{
		printf("%d ",num);
	return num;
}
	N_num= 1+print_n(num-1);
	printf("%d ",N_num);
}

main()
{
	int num;
num=4;
print_n(num);	
}