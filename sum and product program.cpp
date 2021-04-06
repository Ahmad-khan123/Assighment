#include<stdio.h>
int main()
{
	int mat1[3][3],mat2[3][3], sum[3][3]={0}, product[3][3]={0},i,j,k;
	int mat3[3][3],mat4[3][3];

    printf("Matrix 1: \n");

	for (i=1; i<=3; i++){
		for(j=1; j<=3; j++){
			printf("Enter Value No. [%d][%d]: ",i,j);
			scanf("%d",&mat1[i][j]);
			
	}
	
    }

    printf("Matrix 2: \n");

for (i=1; i<=3; i++){
		for(j=1; j<=3; j++){
			printf("Enter Value No. [%d][%d]: ",i,j);
			scanf("%d",&mat2[i][j]);
			
	}
	
    }

    printf("Matrix 1: \n");
    for(i=1; i<=3; i++)
{
		    	for(j=1; j<=3; j++){
				
				printf("\t %d", mat1[i][j]);
		
				}
	    printf("\n");		
		} 
		
	printf("Matrix 1: \n");
    
	for(i=1; i<=3; i++)
{
		    	for(j=1; j<=3; j++){
				
				printf("\t %d", mat2[i][j]);
		
				}
	    printf("\n");		
		} 	


	printf("\n\n \t\t\tSum of Matrices: \n");
	
 
		for(i=1; i<=3; i++){
			
			for(j=1; j<=3; j++){			
		
			sum[i][j] = mat1[i][j] + mat2[i][j];
			
			printf("\t %d" , sum[i][j]);
		}
		printf("\n");
	}
	
	
		for(i=1; i<=3; i++){
			
			for(j=1; j<=3; j++){			
			for(k=1; k<=3; k++){			
			
			sum[i][j] += mat1[i][k] * mat2[k][j];
		}
			product[i][j] = sum[i][j];
			sum[i][j]=0;
		}
	

	printf("\n\n\t\t\tProduct of Matrices.....\n");
	
	for(i=1; i<=3; i++){
			
			for(j=1; j<=3; j++){			
		
			printf("\t %d" , product[i][j]);
		}
		printf("\n");
	}
}
}
