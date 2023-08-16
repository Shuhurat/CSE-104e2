
#include <stdio.h>
float getarea(float r)
{
    float area=3.1416*r*r;
    return area;

}
void printvolume(float r)
{
    float vol=4*r*(getarea(r))/3.0;
    printf("volume: %f\n",vol);
}
int main()
{

    float r;
    scanf("%f",&r);
    //int max=getmax(a,b);
    printvolume(r);
    printf("area:%f",getarea(r));

    return 0;
}



