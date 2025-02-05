#include<stdio.h>

void main(){

	int rows;
	printf("Enter Rows: ");
	scanf("%d", &rows);
	int rows2 = rows;
	//int num=1;
	for(int i=1; i<=rows; i++){
	
		for(int j=1; j<i; j++){
		
			printf("   ");
		}

		int num=1;
		for(int k= 1; k<=(rows2*2)-1; k++){
		
			printf("%2d ",num);
			num++;
		}
		rows2--;
		printf("\n");
	}
}
