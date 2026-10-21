#include <stdio.h>     
#include <stdlib.h>

//  if=?           else=:
// girilen sayýnýn tek mi çift mi olduðunu bulan program 
//tek sayýyý 2 ye böldüðümüzde kalan olur ama çift sayýyý böldüðümüzde olmaz 
float exponentiation(float x,int y);

int main(){
	
	float base=0,result=0;
	int exponent=0;
	
	printf("enter base and exponent value:");
	scanf("%f%d",&base,&exponent);
	result=exponentiation(base,exponent);
	printf("Result:%f\n",result);
	
	return 0;
}


float exponentiation(float x, int y){
	float result=1;
	int i;
	if(y<0){
		for(i=0;i<-y;i++){
			result*=1/x;
		}
	}else{
		for(i=0;i<y;i++){
			result*=x;
		}
	}
	return result;
}

