//wap to ask n/n order square matrix to the user and replace major diagonal element of that matrix with maximum element

#include<stdio.h>
#include<conio.h>
void main(){
	int a[100][100],order,i,j,max;
	printf("Enter the order of the square matrix: ");
	scanf("%d",&order);
	for(i=0;i<order;i++){
		for(j=0;j<order;j++){
			printf("Enter the Value of %d %d position",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	max = a[0][0];
	for(i=0;i<order;i++){
		for(j=0;j<order;j++){
			if(a[i][j]>max){
				max = a[i][j];
			}
		}
	}

	printf("Matrix before changes: ");
	for(i=0;i<order;i++)
	{
		printf("\n");
		for(j=0;j<order;j++){
			printf("%d\t",a[i][j]);
			if(i==j){
				a[i][j]=max;			}
		}
	}
	printf("\n\n\n");
	printf("Matrix after change: ");
	for(i=0;i<order;i++)
	{
		printf("\n");
		for(j=0;j<order;j++){
			printf("%d\t",a[i][j]);
			}
		}
   }
		
