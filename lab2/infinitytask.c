
#include<stdio.h>
int main()
{
    int i=0;
    for(; ;)
    {

        printf("%d\n",i);
        i+=2;
        if(i>52)
        {
            break;
        }


    }
    return 0;
}


