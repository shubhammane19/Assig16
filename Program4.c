#include<stdio.h>

void main(){

	int rows;
	printf("Enter Rows: ");
	scanf("%d", &rows);

	int num =rows;

	for(int i=0; i<rows; i++){
	
		for(int j=1; j<rows-i;j++){
		
			printf("   ");
		}

		for(int k=1; k<=(2*i+1); k++){
		
			printf("%2d ", num);
		}

		num--;
		printf("\n");
	}
}
