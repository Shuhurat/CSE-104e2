#include <stdio.h>
int getmax(int a,int b)
{
    int max;
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{

    int a,b;
    scanf("%d %d",&a,&b);
    //int max=getmax(a,b);
    printf("%d",getmax(a,b));

    return 0;
}


