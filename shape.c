#include<stdio.h>

//A computer program receives an integer and the shape given below is displayed according to the entered value.
//enter limit value: 5 
/*
0 
01
012 
0123 
01234 
012345 
01234 
0123 
012 
01 
0 
*/

int main(){
	
	int n,i,j,k,l;
	printf("Please enter an integer:");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++){
		for(j=0;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	
	return 0;
}

