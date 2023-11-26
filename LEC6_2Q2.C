#include<stdio.h>
#include<conio.h>

void main(){
int choice,pizza,burger;

	clrscr();
	do{
     printf("Press 1 for pizz...\n");
     printf("Press 2 for burger...\n");
     printf("Press 0 for exit...\n\n\n");

     printf("Enter your choice...\n ");
     scanf("%d",&choice);

     switch(choice){
     case 1:
	  printf("Press 1 cheesy pizza..\n");
	  printf("Press 2 paneer chilli pizaa...\n");
	  printf("Enter your choice...");
	  scanf("%d",&pizza);

	switch(pizza){
	  case 1:
	       printf("Your pizza is ready....");
	       break;

	 case 2:
	       printf("your paneer chilli pizza is being ready ....");
	 break;
	      }
     break;
     case 2:
	  printf("veg  cheese burger...\n");
	  printf("bouble cheese masala burger...\n\n\n");
	  printf("Enter your choice...");
	  scanf("%d",burger);

	switch(burger){
	  case 1:
	       printf("your order is being ready....");
	  break;
	  case 2:
	       printf("your double cheese burger is ready....");
	 break;
	}
     break;
     case 3:
	printf("Thanks for visiting Us..");
     break;
     }} while(choice!=0);

getch();

}