#include<stdio.h>
#include"Mainagri.h"
int red_gram()
{
    int r_amount=0;
    printf("Enter no of boxes:\n");
	scanf("%f", &B.no_of_boxes);
    if(B.no_of_boxes <=5.0 && B.no_of_boxes >= 0)
    {
        r_amount = B.no_of_boxes * 1200;
    }
    else if(B.no_of_boxes >=5.1 && B.no_of_boxes <= 10)
    {
        r_amount = B.no_of_boxes * 1100;
    }
    else if(B.no_of_boxes >= 10.1 && B.no_of_boxes <= 15.0)
    {
        r_amount = B.no_of_boxes * 1000;
    }
    else
    {
        r_amount = B.no_of_boxes * 800;
    }
    //int rate;
    //rate=(r_amount/B.no_of_boxes);


    /*printf("****Harvester amount****\n\n");
    printf("Name : %s\n", B.name);
    printf("your red gram harvester bill is: %d\n", r_amount);
    printf("the no of boxes of red gram is : %2.1f\n", B.no_of_boxes);
    printf("rate per boxes is: %d\n",rate);
    printf("--------------------------------------------------------------\n\n5");
*/
    return r_amount;
    }
