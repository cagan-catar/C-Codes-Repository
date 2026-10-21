#include <stdio.h>
#include <stdlib.h>

//  if=?           else=:
// girilen sayýnýn tek mi çift mi olduðunu bulan program 
//tek sayýyý 2 ye böldüðümüzde kalan olur ama çift sayýyý böldüðümüzde olmaz 

int main() {

    int space,i,rows,j,number=1;
    
    printf("enter the number of rows:");
    scanf("%d",&rows);
    
    for(i=0;i<rows;i++){
    	for(space=1;space<=rows-i;space++){
    		printf("  ");
		}for(j=0;j<=i;j++){
			if(j==0 || i==0)
			number=1;
			else
			number=number*(i-j+1)/j;
			
			printf("%4d",number);
		}
		printf("\n");
	}
	
	return 0;
}
