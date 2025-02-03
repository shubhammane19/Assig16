#include<stdio.h>

void main(){

	int rows;
	printf("Enter ROws: ");
	scanf("%d", &rows);

	for(int i=1; i<=rows; i++){
		int j=1;
		for(j=1; j<=rows-i; j++){
		
			printf("   ");
		}

		int num =1;
		for(int k=1; k<=i; k++){
		
			printf("%2d ", k);	
		}


		for(int l=i-1; l>=1; l--){
			
			printf("%2d ", l);
		}
		printf("\n");
	}
}
