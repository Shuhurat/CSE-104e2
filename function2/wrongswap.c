#include<stdio.h>
int a,b;
void swapnum(int a,int b)
{
    int     c=b;
    b=a;
    a=c;

}
int main()
{

    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    swapnum(a,b);
    printf("after swapping:\na= %d b= %d",a,b);

    return 0;
}



