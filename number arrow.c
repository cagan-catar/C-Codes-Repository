#include <stdio.h>
#include <stdlib.h>

//  if=?           else=:
// girilen sayýnýn tek mi çift mi olduðunu bulan program 
//tek sayýyý 2 ye böldüðümüzde kalan olur ama çift sayýyý böldüðümüzde olmaz 

int main() {
   
    int row,i,j,a=0;
    char myLetter;
    
    printf("enter a letter:");
    scanf("%c",&myLetter);
    
    printf("enter the number of row (odd number):");
    scanf("%d",&row);
    for(i=0;i<row;i++){
    	if(i<=row/2)
    	   a++;
    	else
    	   a--;
    	for(j=1;j<a;j++)
    	    printf(" ");
    	    
    	printf("%c\n",myLetter);
	}
    
	return 0;
}
