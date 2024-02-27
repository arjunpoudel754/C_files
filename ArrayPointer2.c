#include<stdio.h>
#include<stdlib.h>
int main()
{
	int r,c,i,j;
	printf("Enter the size of 2-D array: ");
	scanf("%d%d",&r,&c);
	int **ptr = (int **)malloc(r * sizeof(int *));
	for(i=0;i<r;i++)
	{
		ptr[i]=(int *)malloc(c * sizeof(int));
	}
	for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		ptr[i][j] = i*c+j+1;
	}
	}
	for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		printf("%d ",ptr[i][j]);
	}
		printf("\n");
	}
	printf("Enter the new size of array: ");
	scanf("%d%d",&r,&c);
	ptr = realloc(ptr,r*sizeof(int *));
	
	return 0;
}
