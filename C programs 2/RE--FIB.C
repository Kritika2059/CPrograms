#include<stdio.h>
#include<conio.h>
int fib(int );
int main()
{
    int n, term;

    printf("Which term? ");
    scanf("%d", &n);
    term = fib(n);

    printf("%dth term of Fibonacci series is %d", n, term);
    return 0;
}
int fib(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else

    { 
        return fib(n-1)+fib(n-2);
    }
}
