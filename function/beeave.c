#include<stdio.h>
int main()
{

    float a,b,c,d,med;
    scanf("%f %f %f %f",&a,&b,&c,&d);


    med=((a*3.5)+(b*7.5)+(c*3.5)+(d*7.5))/(3.5+7.5);

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

