/*header files*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
/*sturucture used for food*/
struct order
{
    char name[50]; /*for the name of customer*/
    int order_num; /*For the numbers orders to be order*/
    int num_of_food; /*number foods*/
    int cost; /*price of food*/
}

pr[10000];
/*order count, servedcount, waiting now orders are inialized to zero.*/
int order_count = 0, served_count = 0, waiting_now = 0;

void order(); /*Fuction Declearation of order food*/
void items (); /*Fuction Declearation of Manu*/
int display (); /*Fuction Declearation for total orders*/
int receive (); /*Fuction Declearation of order food*/
void  aboutcafe(); /*Fuction Declearation for discription*/
int us(); /*Fuction Declearation about us*/

/* main function */
int main()
{
	/*labal made for goto statement*/
	p:
			/*When we use goto statement this will clear the privious screen*/
		system("CLS");
	 printf("\n\t!*!......................................Welcome To Niazi Cafe......................................!*!\n");
		/*Variable for selecting*/
		 int b;
	printf("\n\t\t\t 1. Order Food\n\t\t\t 2. Serve Food\n\t\t\t 3. Total Orders");
	printf("\n\t\t\t 4. About Cafe\n\t\t\t 5. Exit");
	 printf("\n\t!*!..................................................................................................!*!\n");
	printf("\n\t\tPlease Select:");
	scanf("%d",&b);
	/*If else if structure is used for selecting*/
		switch(b)
		{
    case 1 : 
	{
	 char z;
		 /*Function call of ordering*/
		 order();
		 /*To ask weather the user wants go back to 1st manu*/
		 printf("\n\t\t\tDo You Want to Go to the Main Manu? y/n");
		    printf ("\nEnter: ");
    	scanf("%s", &z);
    /*If y/Y then goto p:(label) we defined*/
    			if (z == 'y' || z == 'Y')
    			{
    				goto p;
				}	
        break;
    }

    case 2 : 
	{
			char z;
		/*Function call of serving*/
		 receive ();
		 printf("\t!*!...........................................................................!*!\n\n");
		 /*To ask weather the user wants go back to 1st manu*/
		 printf("\n\t\t\tDo You Want to Go to the Main Manu? y/n");
		    printf ("\nEnter: ");  
    scanf("%s", &z);
    /*If y/Y then goto p:(label) we defined*/
    		if (z == 'y' || z == 'Y')
    		{
    			goto p;
			}
        break;
    }
		
	
	    case 3 : 
	{
			/*Function call of total order*/
		 display ();
		char z;
		/*To ask weather the user wants go back to 1st manu*/
		 printf("\n\t\t\tDo You Want to Go to the Main Manu? y/n");
		    printf ("\nEnter: ");
    		scanf("%s", &z);
   /*If y/Y then goto p:(label) we defined*/
    			if (z == 'y' || z == 'Y')
    			{
    				goto p;
				}
        break;
    }
    
    
        case 4 : 
	{
	/*Function call of aboutcafe*/
		  aboutcafe();
				 char z;
				 /*To ask weather the user wants go back to 1st manu*/
			 printf("\n\t\t\tDo You Want to Go to the Main Manu? y/n");
		     printf ("\nEnter: ");
    		scanf("%s", &z);
    		/*If y/Y then goto p:(label) we defined*/
    			if (z == 'y' || z == 'Y')
  				{
    				goto p;
				}
        break;
    }
    
        case 5 : 
	{
			/*Function call of about us */
		 us();
        break;
    }
    
    	/*If user enter wrong code then print Invalid. */
	default : 
	{
			printf("\n\t\t\tInvalid Selection.\n");
			char z;
		 /*To ask weather the user wants go back to 1st manu*/
		 printf("\n\t\t\tDo You Want to Go to the Main Manu? y/n");
		    printf ("\nEnter: ");
    scanf("%s", &z);
     /*If y/Y then goto p:(label) we defined*/
    		if (z == 'y' || z == 'Y')
    		{
    			goto p;
			}
	}
	return 0;
    }
}
/* End of Main function*/

/* Function Defination Of orders to be Take*/
void order()
{

    int n, in, qu;
    /*Asking user to enter his name. */  
    printf ("\n\tDear Customer Please Enter your name: ");
    scanf("%s",pr[order_count].name);
    pr[order_count].order_num = 10000+order_count;
    /*calling Manu fuction */  
    items();
    pr[order_count].num_of_food = n;
    pr[order_count].cost = 0;
    pr[order_count].num_of_food = 0; 
	/*Label for goto */   
    level:
    	  /*Asking user to enter number of order. */ 
    printf ("\n\t\t\tHow many items you want to order? \nEnter: ");
    scanf ("%d", &n);

      /*Used While loop which will cause decrease by 1 in number of orders on one iteration*/ 
    while (n--)
	{
		/*Asking user to enter Code of food. */ 
        printf ("\nEnter chosen item code: ");
        scanf ("%d", &in);
        switch(in)
		{
    case 11 : 
	{
		/*Asking user to enter Size of burger. */
        printf ("\t\tEnter the size of burger:\n\t\t1. 200gm  \n\t\t2. 300gm\n 1/2: ");
        int i;
        scanf ("%d", &i);
      
	/*Asking user to enter Quantity  of burger. */
        printf ("\t\tPlease enter the quantity of Burger: ");
        scanf ("%d", &qu);
        
/*To get the bill by maultiplication. */
        pr[order_count].num_of_food +=qu;

        if (i==1) 
        {
        pr[order_count].cost += (150*qu);	
		}
		
        else 
        {
        pr[order_count].cost += (200*qu);	
		}
		
        break;
    }
    
    case 12 :
	{
			/*Asking user to enter Size of Pizza. */
        printf ("\n\t\tEnter the size of Chicken Pizza: \n\t\t1. 12inch  \n\t\t2. 14inch  \n\t\t3. 16inch\n\t\t1/2/3: ");
        int i;
        scanf ("%d", &i);
        	/*Asking user to enter Quantity of Pizza. */
        printf ("\t\tPlease enter the quantity: ");
        scanf ("%d", &qu);
        /*To get the bill by maultiplication. */
        pr[order_count].num_of_food +=qu;

        if (i==1) 
		{
		pr[order_count].cost += (800*qu);	
		}
        else if (i==2)
		{
		pr[order_count].cost += (1000*qu);	
		} 

        else 
		{
		pr[order_count].cost += (1200*qu);
		} 

        break;
    }
    
    case 13 :
	{
		/*Asking user to enter Size of Chiken. */
        printf ("\n\t\tEnter the amount of chicken: \n\t\t1. 1 pcs  \n\t\t2. 4 pcs  \n\t\t3. 10 pcs\n\t1/2/3: ");
        int i;
        scanf ("%d", &i);
/*Asking user to enter Quantity of Chicken. */
        printf ("\n\t\tPlease enter the quantity: ");
        scanf ("%d", &qu);
 /*To get the bill by maultiplication. */
        pr[order_count].num_of_food +=qu;

        if (i==1) 
		{
		pr[order_count].cost += (100*qu);	
		}
        else if (i==2) 
		{
		pr[order_count].cost += (350*qu);	
		}
        else
		{
		pr[order_count].cost += (800*qu);	
		}  

        break;
    }
    
    case 14 :
	{
		/*Asking user to enter Size of Grilled Chiken. */
        printf ("\n\t\tEnter the size of grilled chicken: \n\t\t1. quarter  \n\t\t2. half  \n\t\t3. full\n\t1/2/3: ");
        int i;
        scanf ("%d", &i);
        
	/*Asking user to enter Quantity of Grilled Chiken. */
        printf ("\n\t\tPlease enter the quantity: ");
        scanf ("%d", &qu);
	/*To get the bill by maultiplication. */
        pr[order_count].num_of_food +=qu;

        if (i==1)
		{
		pr[order_count].cost += (70*qu);
		} 

        else if (i==2) 
		{
		pr[order_count].cost += (140*qu);	
		}

        else 
		{
		pr[order_count].cost += (250*qu);	
		} 

        break;
    }
    
    case 15 :
	{
		/*Asking user to enter Size of Kashmiri Tea. */
        printf ("\n\t\tEnter the size of Kashmiri Tea: \n\t\t1. half  \n\t\t2. full\n\t\t1/2: ");
        int i;
        scanf ("%d", &i);
/*Asking user to enter Quantity of Kasmiri Tea. */
        printf ("\n\t\tPlease enter the quantity: ");
        scanf ("%d", &qu);
        
	/*To get the bill by maultiplication. */
        pr[order_count].num_of_food +=qu;

        if (i==1)
		{
		pr[order_count].cost += (30*qu);	
		} 

        else
		{
		pr[order_count].cost += (50*qu);	
		} 

        break;
    }
    
    case 16 :
	{
        printf ("\n\t\tThe cheese Paratha(Full). ");
    	
	/*Asking user to enter Quantity of Cheese Paratha. */
        printf ("\n\t\tPlease enter the quantity: ");
        scanf ("%d", &qu);
	/*To get the bill by maultiplication. */
        pr[order_count].num_of_food +=qu;

         pr[order_count].cost += (100*qu);

        break;
    }
    
	case 17 : 
	{
        printf ("\n\t\t250 mg of Mango Juice.\n");
	/*Asking user to enter Quantity of Mango Juice. */
        printf ("\n\t\tPlease enter the quantity: ");
        scanf ("%d", &qu);
	/*To get the bill by maultiplication. */
        pr[order_count].num_of_food +=qu;
        pr[order_count].cost += (70*qu);
        break;
    }
    
	case 18 : 
	{
        printf ("\n\t\t250 mg of  Coffee\n");
	/*Asking user to enter Quantity of Cofe. */
        printf ("\n\t\tPlease enter the quantity: ");
        scanf ("%d", &qu);
	/*To get the bill by maultiplication. */
        pr[order_count].num_of_food +=qu;
        pr[order_count].cost += (80*qu);
        break;
    }
    
	case 19 : 
	{
        printf ("\n\t\t250 mg of Cappuccino\n");
	/*Asking user to enter Quantity of Cappuccino. */
        printf ("\n\t\tPlease enter the quantity: ");
        scanf ("%d", &qu);
	/*To get the bill by maultiplication. */
        pr[order_count].num_of_food +=qu;
        pr[order_count].cost += (120*qu);
        break;
    }
    
	case 20 :
	{
		/*Asking user to enter Size of Coke. */
        printf ("\n\t\tEnter the size of Coke: \n\t\t1. 250mg  \n\t\t2. 500mg\n");
        int i;
        scanf ("%d", &i);
	/*Asking user to enter Quantity of Coke. */
        printf ("\n\t\tPlease enter the quantity: ");
        scanf ("%d", &qu);
	/*To get the bill by maultiplication. */
        pr[order_count].num_of_food +=qu;

        if (i==1)
		{
		pr[order_count].cost += (30*qu);	
		} 

        else
		{
		pr[order_count].cost += (50*qu);	
		} 
        break;
    }
    
	/*If user enter wrong code then print Invalid. */
	default : 
	{
        printf ("Invalid selection try again\n");
        n++;
    }
        }
    }
    
    char tem;
    /* Asking user weather he wants more food.*/
    printf ("\n\t\t\tDo you want to order anything else?(y/n)\nEnter: ");
    scanf("%s", &tem);
    if (tem == 'y' || tem == 'Y')
    {
    	goto level;
	}
    
	else 
	/*Printing all bill and no of foods. */
	printf ("\n\n\t\t\t\t---------Number of food ordered %d.---------\n", pr[order_count].num_of_food);
    printf ("\n\t\t\t\tThank you ---%s--- for your order.\n\t\t\t\t Your bill is %d pkr.\n\t\t\t\tPlease wait while we prepare the food.\n\n", pr[order_count].name, pr[order_count].cost);
    order_count ++;	
}

/*Items function defination. */
void items ()
{
	/*Printing All food in Menu. */
    printf("......................................................MENU.................................................\n\n");

    printf("Item Code#     Description				Size					Price(Pkr)\n\n");

    printf("[11]		Burger					200/300gm				150/200\n");
    printf("[12]		Chicken Pizza				12/14/16inch				800/1000/1200\n");
    printf("[13]		Fried Chicken				1/4/10 pcs				100/350/800\n");
    printf("[14]		Grilled Chicken				quarter/half/full			70/140/250\n");
    printf("[15]		Kashmiri Tea				Half/Full				30/50\n");
    printf("[16]		Cheese Paratha				Full					100\n");
    printf("[17]		Mango Juice				250mg					70\n");
    printf("[18]		Coffee					250mg					80\n");
    printf("[19]		Cappuccino				250mg					120\n");
    printf("[20]		Coke Cola				250/500mg				30/60\n\n");
	printf("...........................................................................................................\n\n");
}

/*Receice function defination. */
int receive ()
{
	/*Serving food by checking condition. */
	printf("\t!*!...............................Serve Food..................................!*!\n\n");
    if (order_count==0)
	{
        printf ("\n\t\tSir! Please order first\n\n");
        return;
    }

    else if (served_count == order_count)
	 {
        printf ("\n\t\tAll order served\n");
        return;
    }
/*To print order number and name. */
    printf ("\n\t\tOrder no. %d by %s is ready\n", pr[served_count].order_num, pr[served_count].name);
    printf ("\n\t\tEnjoy your meal.\n\n");
    served_count++;
}
/*Display function defination. */
int display ()
{
	 printf("\n\t!*!...................................Total Orders......................................!*!\n\n");
    printf ("\n\t\tTotal order taken: %d\n", (order_count));
    printf ("\n\t\tTotal number of order served %d\n", served_count);
    printf ("\n\t\tNumber of Currently waiting to be served: %d\n", (order_count-served_count));
    printf ("\n\t\tCurrently preparing food for order no. %d\n\n", pr[served_count].order_num);
	 printf("\n\t!*!....................................................................................!*!\n\n");
}
/*About Cafe defination function defination. */
void  aboutcafe()
{
	
	 printf("\n\t!*!.................................About Cafe...................................!*!\n\n");
	            printf ("\n\t\t\tSir! In this Cafe You Can Order food.\n");
                printf ("\n\t\t\tEach food will contain a specific Code no.\n");
                printf ("\n\t\t\tThen Then the ordered food will be served       \n");
                printf ("\n\t\t\tYou can also check Total Orders       \n");
                printf ("\n\t\t\tWe hope you Like it.        \n");
                printf ("\n\t\t\tProject developed by: Awais,Zafar and Farooq.");
				printf ("\n\n\t\t\t\t\t---Thank You---\n\n");
                 printf("\t!*!...........................................................................!*!\n\n");
			

}

/*us function defination. */
int us()

{
	 printf("\n\t!*!.................................About US...................................!*!\n\n");
	            printf ("\n\t\t\tSir! We are closed. Come Later.\n");
                printf ("\n\t\t\tProject submitted by:\n");
                printf ("\n\t\t\t1). Zafar Ullah Khan       \n");
                printf ("\n\t\t\t2). Farooq Khan       \n");
                printf ("\n\t\t\t3). Muhammad Awais Khan       \n");
                printf ("\n\t\t\tProject submitted To: Dr. Nosheen Gul");
				printf ("\n\n\t\t\t\t\t---Thank You---\n\n");
                 printf("\t!*!...........................................................................!*!\n\n");
				return 0;
}
