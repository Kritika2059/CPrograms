#include<stdio.h>
#include<conio.h>
int reverse(int , int );
int main()
{
    int number, result;
    printf("Enter number: ");
    scanf("%d", &number);
    /* Second argument must be 0 while calling function */
    result = reverse(number, 0);
    printf("Reverse is %d.", result);
    return 0;
}

int reverse(int num, int rev)
{
    if(num==0)
        return rev;
    else
        return reverse (num/10, rev*10 + num%10);
}
