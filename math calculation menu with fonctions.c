#include <stdio.h>     
#include <stdlib.h>
#include "myMath.h"

//  if=?           else=:
// girilen sayýnýn tek mi çift mi olduðunu bulan program 
//tek sayýyý 2 ye böldüðümüzde kalan olur ama çift sayýyý böldüðümüzde olmaz 


int main(){
	int choose;
	int x,y;
	menu();
	printf("\nchoose a number (1-5):");
	scanf("%d",&choose);
	printf("\n");
	
	switch(choose){
		case 1:printf("enter two numbers:");
		scanf("%d%d",&x,&y);
		printf("min:%d",min(x,y));
			break;
		case 2:printf("enter two numbers:");
		scanf("%d%d",&x,&y);
		printf("max:%d",max(x,y));
			break;
		case 3:printf("enter a number:");
		scanf("%d",&x);
		printf("karesi:%d",square(x));
			break;
		case 4:printf("enter a number:");
		scanf("%d",&x);
		printf("kubu:%d",cube(x));
		    break;
		case 5:printf("enter a number:");
		scanf("%d",&x);
		printf("mutlak degeri:%d",absolute(x));
			break;
		default:printf("please dont do that!!!\n\n");
	}
	
	return 0;
	
}

void menu(){
	printf("\n");
	printf("*************\n");
	printf("*   MENU   *\n");
	printf("*************\n");
	printf("1-minimum\n");
	printf("2-maximum\n");
	printf("3-kare al\n");
	printf("4-kup al\n");
	printf("5-mutlak deger al\n\n");
}
int min(int x,int y){
	if(x<y){
		return x;
	}else{
		return y;
	}
}
int max(int x,int y){
	if(x<y){
		return y;
	}else{
		return x;
	}
}
int square(int x){
	return x*x;
}
int cube(int x){
	return x*x*x;
}
int absolute(int x){
	if(x<0){
		return -x;
	}else{
		return x;
	}
}
