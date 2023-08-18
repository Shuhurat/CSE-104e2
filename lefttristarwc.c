
#include<stdio.h>



int  main()
{
    int n;
    scanf("%d",&n);

    int c=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=c; j>=1; j/=2)
        {
            printf("%d ",j);

        }
        c*=2;
        printf("\n");

    }
    return 0;
}




