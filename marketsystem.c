#include<stdio.h>
#define  Apple 5
#define   Orange 7
#define  Tomate	9
#define  Meat   50
#define  Chicken	25
#define  Milk   	2.5
#define  Yoghurt	4.2
#define  Egg  	1.1
#define  Lemonate	1.9
#define  Coke	2.3

int main(void)
{
  float number,quantity;
  
  float sum=0,price,ekstra;
  char variable;
     printf("****************Online Shopping*****************\n");
     printf("1- Apple	5$\n2- Orange	7$\n3- Tomate	9$\n4- Meat   	50$\n5- Chicken	25$\n6- Milk   	2.5$\n7- Yoghurt	4.2$\n8- Egg   	1.1$\n9- Lemonate	1.9$\n10-Coke  	2.3$\n");
     printf("************************************************\n");
    
    while(1)
    {    
         printf("Please enter your choice and quantity(Enter '0' for exit, '-1' for total price): ");
         scanf("%f",&number);

        if(number==-1)
        {
          printf("-1\n");
           
           printf("Your total price is %.2f$. How much money you enter: ",sum); //toplam para
           scanf("%f",&price);
           printf("%.2f$\n",price);
           if(sum>price)   //girdiğim para
           {
              
              printf("Your money is not enough. You must add %.2f$ for total price. How much money you enter: ",sum-price);
              scanf("%f",&ekstra);
              printf("%.2f$",ekstra);

              if(ekstra>=sum-price)
              {
                printf("\nTotal price has been paid. Your remaining money %.2f$. ",ekstra-(sum-price));
                printf("\nHave a good day...\n");
                break;
              }
              else
              {
                printf("\nYour money is not enough. You must add %.2f$ for total price. How much money you enter: ",sum-price);
                scanf("%f",&ekstra);
                printf("%.2f$",ekstra);
              } 
          }
           else
           {
              printf("Total price has been paid. Your remaining money %.2f$. ",price-sum);
              printf("\nHave a good day...\n");
              break;

           }
        }
        else if(number==0)
        {
          
          printf("Are you sure (y/n) : ");
          scanf(" %c",&variable);
          printf("%c\n",variable);
          if(variable=='y')
          {
            printf("Have a good day...\n");
            break;
          }
          if(variable=='n')
          {
           continue;
          }
          
         
        }
        else if(number==1)
        {
          scanf("%f",&quantity);
          sum+=quantity*Apple;
        printf("%.2f kg Apple: %.2f$\n",quantity,Apple*quantity);
        
        }
        else if(number==2)
        {
          scanf("%f",&quantity); 
          sum+=quantity*Orange;
        printf("%.2f kg Orange: %.2f$\n",quantity,Orange*quantity);
        }
        else if(number==3)
        {
          scanf("%f",&quantity);
          sum+=quantity*Tomate;
        printf("%.2f kg Tomate: %.2f$\n",quantity,Tomate*quantity);
        }
        else if(number==4)
        { 
          scanf("%f",&quantity);
          sum+=quantity*Meat;
        printf("%.2f kg Meat: %.2f$\n",quantity,Meat*quantity);
        }
        else if(number==5)
        {
          scanf("%f",&quantity);
          sum+=quantity*Chicken;
        printf("%.2f kg Chicken: %.2f$\n",quantity,Chicken*quantity);
        }
        else if(number==6)
        {
          scanf("%f",&quantity);
          sum+=quantity*Milk;
        printf("%.2f lt Milk: %.2f$\n",quantity,Milk*quantity);
        }
        else if(number==7)
        {
          scanf("%f",&quantity);
          sum+=quantity*Yoghurt;
        printf("%.2f kg Yoghurt: %.2f$\n",quantity,Yoghurt*quantity);
        }
        else if(number==8)
        {
          scanf("%f",&quantity);
          sum+=quantity*Egg;
        printf("%.2f kg Egg: %.2f$\n",quantity,Egg*quantity);
        }
        else if(number==9)
        {
          scanf("%f",&quantity);
          sum+=quantity*Lemonate;
        printf("%.2f lt Lemonate: %.2f$\n",quantity,Lemonate*quantity);
        }
        else if(number==10)
        {
          scanf("%f",&quantity);
          sum+=quantity*Coke;
        printf("%.2f lt Coke: %.2f$\n",quantity,Coke*quantity);
        }
        else
        { 
         break;
        }
    }
      
}
