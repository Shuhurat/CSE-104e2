#include<stdio.h>
int  main()
{
int a;
scanf("%d",&a);
    int c=5;
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=10; j++)
        {
            printf("%d * %d = %d\n",i,j,j*i);

        }
        printf("\n");
    }
    return 0;
}






