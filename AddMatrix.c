#include<stdio.h> 
#include<stdlib.h>
int main(){
	int a[3][3],b[3][3],add[3][3],r,c,i,j,k;  
	printf("Enter the first matrix element \n");    
	for(i = 0;i < 3;i++)    
	{    
		for(j = 0;j < 3;j++)    
		{    
			printf("a[i][j] = ");
			scanf("%d",&a[i][j]);    
		}    
	}    
	printf("Enter the second matrix element \n");    
	for(i = 0;i < 3;i++)    
	{    
		for(j = 0;j < 3;j++)    
		{    
			printf("a[i][j] = ");
			scanf("%d",&b[i][j]);    
		}    
	}    
    printf("Addition of the matrix \n");    
	for(i = 0;i < 3;i++)    
	{    
		for(j = 0;j < 3;j++)    
		{       
			add[i][j] = a[i][k] + b[k][j];        
		}    
	}    
	for(i = 0;i < 3;i++)    
	{    
		for(j = 0;j < 3;j++)    
		{    
			printf("%d\t",add[i][j]);    
		}    
		printf("\n");    
	}    
	return 0;  
}  