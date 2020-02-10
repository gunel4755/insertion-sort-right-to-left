#include <stdio.h>
#include <stdlib.h>

main(){

	int a[]={5,1,10,2,4,9};
	int n=5;	
	for(int m=0; m <= n ; m++){
		printf("%d, ", a[m]);
	}
	printf("\n");

	
    int i, key, j; 
    
	for(i=n-1 ; i>=0; i--){
    	key = a[i];
    	j=i+1;
		printf("\nj= %d , i= %d iken; , ", j,i);
    	while (j <= n && a[j] < key){
    		a[i] = a[j];
    		j=j+1;
    		i=i+1;
		}
		a[j-1]= key;
		
	
	
	
		for(int m=0; m <= n ; m++){
			printf("%d, ", a[m]);
		}	
	}
	
	printf(" \nEn son \n ");
	for(int m=0; m <= n ; m++){
		printf("%d, ", a[m]);
	}

	

	
			
}
