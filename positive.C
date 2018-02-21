#include<stdio.h>
#include<conio.h>
int main ()
{
    printf("Enter Positive integers:\n");
    scanf("%d", &n);
    for (c = 1; c <=n ; c++)
    {
        scanf("%d",&n);
        sumPositive = sumPositive + n;
    }
    printf("The value of positive numbers is: %d", sumPositive);

    return 0;   
}
