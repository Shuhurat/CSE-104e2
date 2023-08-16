
#include <stdio.h>
float getarea(float r)
{
    float area=3.1416*r*r;
    return area;
}
int main()
{

    float r;
    scanf("%f",&r);
    //int max=getmax(a,b);
    printf("%f",getarea(r));

    return 0;
}


