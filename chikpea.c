#include<stdio.h>
#include"Mainagri.h"
void chik_pea()
{
    int ch_amount=0;
    printf("Enter no of boxes:\n");
	scanf("%f", &B.no_of_boxes);
    if(B.no_of_boxes <=5.0 && B.no_of_boxes >= 0)
    {
        ch_amount = B.no_of_boxes * 1000;
    }
    else if(B.no_of_boxes >=5.1 && B.no_of_boxes <= 10)
    {
        ch_amount = B.no_of_boxes * 900;
    }
    else if(B.no_of_boxes >= 10.1 && B.no_of_boxes <= 15.0)
    {
        ch_amount = B.no_of_boxes * 850;
    }
    else
    {
        ch_amount = B.no_of_boxes * 800;
    }
    int rate;
    rate=(ch_amount/B.no_of_boxes);

    printf("****Harvester amount****\n\n");
    printf("Name : %s\n", B.name);
    printf("your chik pea harvester bill is: %d\n", ch_amount);
    printf("the no of boxes of chik pea is : %2.1f\n", B.no_of_boxes);
    printf("rate per boxes is: %d\n",rate);
    printf("--------------------------------------------------------------\n\n5");
}
