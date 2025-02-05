#include<stdio.h>

void main(){

	int rows;
	printf("Enter Rows: ");
	scanf("%d", &rows);
	int rows2 = rows;
	//int num=1;
	char ch = 'A';
	for(int i=1; i<=rows; i++){
	
		for(int j=1; j<i; j++){
		
			printf("   ");
		}

		for(int k= 1; k<=(rows2*2)-1; k++){
		
			printf("%2c ",ch);
		}
		ch++;
		rows2--;
		printf("\n");
	}
}
