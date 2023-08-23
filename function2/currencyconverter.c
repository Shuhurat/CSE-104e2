#include<stdio.h>

float input_amount()
{
    float am;//am=amount
    scanf("%f",&am);
    return am;
}
 float convert_to_eur(float am)
{
    float c=am*0.85;
    return c;
}
float convert_to_gbp(float am)
{
    float c=am*0.73;
    return c;
}

int main()
{
    int choice;
    float am,converted;
    printf("Enter the amount to be converted: ");
    am=input_amount();
    printf("Convert to:\n1. EUR \n2. GBP\nEnter your choice:");
    scanf("%d",&choice);



    if(choice==1)
    {
        converted=convert_to_eur(am);
        printf("Conversion Result:\nAmount: $%.2f (USD) is equivalent to €%.2f (EUR)\n",am,converted);

    }else if(choice==2)
    {
        converted=convert_to_gbp(am);
        printf("Conversion Result:\nAmount: $%.2f (USD) is equivalent to €%.2f (GBP)\n",am,converted);

    }



    return 0;

}
