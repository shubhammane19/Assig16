#include<stdio.h>


void main(){

	int rows;
	printf("Enter Rows: ");
	scanf("%d", &rows);
	int rows2 = rows;

	for(int i=1; i<=rows; i++){
	
		for(int j=1; j<i; j++){
		
			printf("  ");
		}

		for(int k=1; k<=(2*rows2-1); k++){
		
			printf("* ");
		}
		rows2--;
		printf("\n");
	}
}
