
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number for range:");
    scanf("%d",&n);
    int c=1;
    for(int i=1; i<=n; i++)
    {
        printf("Multiplication table for %d :\n",c);
        for(int j=1; j<=10; j++)
        {
            printf("%d * %d =%d\n",c,j,c*j);
        }
        printf("\n");
        c++;
    }
    return 0;
}
