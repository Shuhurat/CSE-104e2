#include<stdio.h>

float input_amount()
{
    float am;
    printf("amount: ");
    scanf("%f",&am);
    return am;

}
float convert_to_eur(float am)
{

    return am*0.85;

}
float convert_to_gbp(float am)
{

    return am*0.73;

}
int main()
{
    float a=input_amount();
    int choice;
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("%f",convert_to_eur(a));
    }
    else
    {
        printf("%f",convert_to_gbp(a));
    }



    return 0;
}

