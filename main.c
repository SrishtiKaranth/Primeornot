#include<stdio.h>
int primeornot(int, int);
int main()
{
    int num,primecheck;
    printf("Enter a positive number to check if whether if it is a prime number or not \n ");
    scanf("%d",&num);
    primecheck = primeornot(num,num/2);
    if(primecheck== 1)
    printf("%d is a prime number \n",num);
    else
    printf("%d is not a prime number\n",num);
    return 0;
}
int primeornot(int n, int d)
{
    if(d == 1)
        return 1;
    else
    {
        if(n%d == 0)
            return 0;
        else
            primeornot(n,d-1);
    }
}
