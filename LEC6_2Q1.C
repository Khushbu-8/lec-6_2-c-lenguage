#include<stdio.h>
#include<conio.h>

void main(){
int num,i=1;
	clrscr();
	printf("Enter any number");
	scanf("%d",&num);

	do{
	printf("%d\n",i);
	i++;

	} while(i<=num);


getch();
}
