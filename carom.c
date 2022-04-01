#include<stdio.h>
#include"Mainagri.h"
void carom()
{
    int c_amount=0;
    printf("Enter no of boxes:\n");
	scanf("%f", &B.no_of_boxes);
    if(B.no_of_boxes <=2.0 && B.no_of_boxes >= 0)
    {
        c_amount = B.no_of_boxes * 4000;
    }
    else if(B.no_of_boxes >=2.1 && B.no_of_boxes <= 5.0)
    {
        c_amount = B.no_of_boxes * 3500;
    }
    else if(B.no_of_boxes >= 5.1 && B.no_of_boxes <= 10.0)
    {
        c_amount = B.no_of_boxes * 3000;
    }
    else
    {
        c_amount = B.no_of_boxes * 2500;
    }
    int rate;
    rate=(c_amount/B.no_of_boxes);

    printf("****Harvester amount****\n\n");
    printf("Name : %s\n", B.name);
    printf("your carom harvester bill is: %d\n", c_amount);
    printf("the no of boxes of carom is : %2.1f\n", B.no_of_boxes);
     printf("rate per boxes is: %d\n",rate);
    printf("--------------------------------------------------------------\n\n5");

}
