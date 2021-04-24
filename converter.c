#include <stdio.h>
  
 float kms_to_miles(float a)
 {
 	return a*0.621371 ;
 }

 float inches_to_foot(float a)
 {
 	return a*0.0833333 ;
 }

 float cms_to_inch(float a)
 {
 	return a*0.393701 ;
 }

float pound_to_kgs(float a)
 {
 	return a*0.453592 ;
 }

 float inch_to_meters(float a)
 {
 	return a*0.0254 ;
 }

void  main()
{
	int num ,a ;
	int token = 1;
	char cont;
	printf("..........................WELCOME................................\n");

	while(token == 1)
	{
		printf("for run press c for quit press q \n");
		scanf("%c", &cont);

		if (cont == 'c')
		{
			printf("Select the no between 1 to 5 \n");
        	printf(">>");
			scanf("%d",&num);
			printf("Selected case is %d >>>>>>",num);
		}
		else
		{
                  num = 6;
		}
		
		switch(num)
		{
			case 1: //kgs to miles
				printf("ENTER YOUR NUMBER IN KMS \n:>> ");
				scanf("%d",&a);
				printf("YOUR ENTER NO IS %d :\t",a);
	        	printf("%f\n", kms_to_miles(a));
	        	break ;
	        case 2: // inches to foot 
				printf("ENTER YOUR NUMBER IN INCHES\n:>> ");
				scanf("%d",&a);
				printf("YOUR ENTER NO IS %d :\t",a);
	        	printf("%f\n",inches_to_foot(a));
	        	break ;
	        case 3: // cms to inch
				printf("ENTER YOUR NUMBER IN CMS\n:>> ");
				scanf("%d",&a);
				printf("YOUR ENTER NO IS %d :\t",a);
	        	printf("%f\n",cms_to_inch(a));
	        	break ;
	        case 4: // pond tp kgs  
				printf("ENTER YOUR NUMBER IN POUND \n:>> ");
				scanf("%d",&a);
				printf("YOUR ENTER NO IS %d:\t",a);
	        	printf("%f\n",pound_to_kgs(a));
	        	break ;
	        case 5: // inches to meters 
				printf("ENTER YOUR NUMBER IN INCHES\n:>> ");
				scanf("%d",&a);
				printf("YOUR ENTER NO IS %d:\t",a);
	        	printf("%f\n",inch_to_meters(a));
	        	break ;
	        case 6:
	        	token = 0;
	        	break ;

		}

	}

}
		
