#include <stdio.h>
#include <stdlib.h>

//  if=?           else=:
// girilen sayýnýn tek mi çift mi olduðunu bulan program 
//tek sayýyý 2 ye böldüðümüzde kalan olur ama çift sayýyý böldüðümüzde olmaz 

int main() {
   
    int x,y,EBOB=0,EKOK=0,smallnumber,i;
    
    printf("enter two number for EBOB EKOK:");
    scanf("%d%d",&x,&y);
    
    if(x<y){
    smallnumber=x;}
    else if(y<x){
    smallnumber=y;}
    else{
    	EBOB=x;
    	EKOK=x;
    	printf("your numbers is equal number this caused numbers equal with EBOB EKOK\n");
	}
    
    for(i=1;i<=smallnumber;i++){
    	if(x%i==0 && y%i==0){
    		EBOB=i;
		}else{
			EKOK=EBOB*(x/EBOB)*(y/EBOB);
		}
	    
	}
	 printf("%d and %d numbers EBOB is %d\n",x,y,EBOB);
		printf("%d and %d numbers EKOK is %d\n",x,y,EKOK);
    
    
    
	return 0;
}
