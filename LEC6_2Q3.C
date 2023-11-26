#include<stdio.h>
#include<conio.h>

void main(){
int num,i=2;
	clrscr();
	printf("Enter any number");
	scanf("%d",&num);

	do{
	printf("%d\n",i);
	i=i+2;

	} while(i<=num);


getch();
}

