#include <stdio.h>     
#include <stdlib.h>

//  if=?           else=:
// girilen sayýnýn tek mi çift mi olduðunu bulan program 
//tek sayýyý 2 ye böldüðümüzde kalan olur ama çift sayýyý böldüðümüzde olmaz 

int main() {
	
	int i,j,upperlimit,sum;
	
	printf("enter a number for supernumbers:");
	scanf("%d",&upperlimit);
	
	for(i=1;i<=upperlimit;i++){
		sum=0;
		for(j=1;j<=i/2;j++){
			if(i%j==0){
				sum+=j;
			}
			
		}if(sum==i)
			printf("%d is a super number.\n",i);
	}
   
    
    
	return 0;
}
