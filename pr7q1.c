#include<stdio.h>
void add(){
	int c,d;
	int add;
	printf("enter the first number");
	scanf("%d",&c);
	printf("enter the second number");
	scanf("%d",&d);
	add=c+d;
	printf("addition of c and d is: %d",add);
}
void sub(){
	int c,d;
	int sub;
	printf("enter the first number");
	scanf("%d",&c);
	printf("enter the second number");
	scanf("%d",&d);
	sub=c-d;
	printf("subtraction of c and d is : %d\n",sub);
}
void multiply(){
	int c,d;
	int multiply;
	printf("enter the first number");
	scanf("%d",&c);
	printf("enter the second number");
	scanf("%d",&d);
	multiply=c*d;
	printf("multiplication of c and d is : %d\n",multiply);
}
void divide(){
	int c,d;
	int devide;
	printf("enter the first number");
	scanf("%d",&c);
	printf("enter the second number");
	scanf("%d",&d);
	devide=c/d;
	printf("division of c and d is: %d\n",divide);
}
void mod(){
int c,d;
	int mod;
	printf("enter the first number");
	scanf("%d",&c);
	printf("enter the second number");
	scanf("%d",&d);	
	mod=c%d;
	printf("module of c and d is: %d\n",mod);
}
void main(){
	int c,n;
	do{
		printf("==========menu==========\n");
		printf("press 1 for '+' :\n");
		printf("press 2 for '-' :\n");
		printf("press 3 for '*' :\n");
		printf("press 4 for '/' :\n");
		printf("press 5 for '%' :\n");
		printf("enter your choice\n:");
		scanf("%d",&c);
		switch(c){
			case 1:
				add();
				break;
				case 2:
				sub();
				break;
				case 3:
				multiply();
				break;
				case 4:
				divide();
				break;
				case 5:
				mod();
				break;
				default:
				printf("you are exited:");
				break;
			
				
		}
		
	}while(c  !=0);
}
