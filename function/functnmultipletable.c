

#include <stdio.h>
void printmultiplicationtable(int c)
{


    for(int i=1; i<=10; i++)
    {
        printf("%d*%d =%d\n",c,i,c*i);
    }

}
int main()
{


    int c=1,x;
    scanf("%d",x);
    for(int i=1;i<=x;i++)
    {
        printmultiplicationtable(i);
    }


    return 0;
}


