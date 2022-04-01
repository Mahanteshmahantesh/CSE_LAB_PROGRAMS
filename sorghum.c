#include<stdio.h>
#include"Mainagri.h"
void sorghum()
{
    int s_amount;
    printf("Enter no of acres\n");
    scanf("%f",&B.acres);

    if(B.acres <=5.0 && B.acres >=0.0)
    {
        s_amount = B.acres * 1200;
    }
    else if(B.acres >=10.0 && B.acres<=5.1)
    {
        s_amount = B.acres * 1100;
    }
    else if(B.acres >=15.1 && B.acres <= 10.1)
    {
        s_amount = B.acres* 1000;
    }
    else
    {
        s_amount = B.acres * 800;
    }
    int rate;
    rate=(s_amount/B.acres);

    printf("****Harvester amount****\n\n");
    printf("Name : %s\n", B.name);
    printf("your carom harvester bill is: %d\n", s_amount);
    printf("the no of acres of sorghum is : %2.1f\n", B.acres);
     printf("rate per acres is: %d\n",rate);
    printf("--------------------------------------------------------------\n\n5");

}
