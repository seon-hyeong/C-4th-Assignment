#include <stdio.h>

int main(){
	int a[10][10],transpose[10][10],r,c,i,j;
	int p=0;
 	printf("Enter rows and columns of matrix :");
 	scanf("%d %d",&r,&c);

 	printf("Enter elements of matrix : \n");
 	for(i=0; i<r; i++)
	 {
 		 for(j=0; j<c; j++){
  
  		printf("Enter element a %d%d:",i+1,j+1);
 		 scanf("%d",&a[i][j]);
 		 }
 	}


 
 	printf("Entered Matrix :\n");
 
	for(i=0; i<r; i++) {
 		for(j=0; j<c; j++){
			  
			if(p++%c==0) puts("");
			else printf("");

	  	printf(" %d ",a[i][j]);
		
		  }
 	puts("");
	   }


	printf("\nTranspose of Matrix :\n");

	for(i=0; i<c; i++){
		for(j=0; j<r; j++){
	
			if(p++%r==0) puts("");
			else printf("");

		printf(" %d ",a[j][i]);
		
		}
	puts("");
       	  }	



return 0;
} 
