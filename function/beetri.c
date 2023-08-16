#include<stdio.h>
int main()
{

    float a,b,c,ar;
    scanf("%f %f %f",&a,&b,&c);


    if((a+b>c)&&(a+c>b)&&(c+b>a))
    {
        printf("Perimetro = %.1f\n",a+b+c);
    }else
    {
        ar=((a+b)/2.0)*c;
        printf("Area = %.1f\n",ar);

    }


    return 0;
}
