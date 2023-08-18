
/*  1. find sum of all elementsof array using pointer */
 
 #include<stdio.h>
 #include<conio.h>
 
 void main()
 {
 	int i, array[50];
 	int sum=0;
 	int* ptr;
 
 	
 	
 printf("\n Enter array elements: \n");
 for(i=0; i<5; i++)
 {
 	scanf("%d", &array[i]);
 }
 ptr=array;
 for(i=0; i<=5; i++)
 {
 	sum = sum + *ptr;
 	ptr++;
 }
 printf("\n The sum is: %d ",sum);
 }

