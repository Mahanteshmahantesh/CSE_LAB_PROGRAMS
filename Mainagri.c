#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"Mainagri.h"
//#include"Magri.h"

int red_gram();
void main()
{
	details();
	int option;
	do
	{
		printf("****Harvester amount****\n");
		printf("Please enter your choice from below (1-4):\n");
		printf("1. red gram\n");
		printf("2. chik pea\n");
		printf("3. carom\n");
		printf("4. sorghum\n");
		printf("5. EXIT\n");
		printf("Enter your choice :\n");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			red_gram();
			break;
		case 2:
			chik_pea();
			break;
        case 3:
			carom();
			break;

        case 4:
			sorghum();
			break;
        case 5:
			exit(0);
			break;
		default:
			printf("SORRY INVALID CHOICE!\n");
			printf("PLEASE CHOOSE FROM 1,2,3,4 or 5\n");
		}


	} while (option != 6);


}

void details()
{

	printf("Enter your  name:\n");
	scanf("%s", B.name);
	printf("Enter your survey Number:\n");
	scanf("%d", &B.surveynum);

}
/*void red_gram()
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
    int rate;
    rate=(r_amount/B.no_of_boxes);


    printf("****Harvester amount****\n\n");
    printf("Name : %s\n", B.name);
    printf("your red gram harvester bill is: %d\n", r_amount);
    printf("the no of boxes of red gram is : %2.1f\n", B.no_of_boxes);
    printf("rate per boxes is: %d\n",rate);
    printf("--------------------------------------------------------------\n\n5");
}
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
*/
