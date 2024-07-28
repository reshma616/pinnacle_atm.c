#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,choice;
	float cash=0;
	char c;
	while(1)
	{
	printf("\n enter \n1.withdraw\n2.deposite\n3.balance check\n4.exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:{
	int withdraw;
	printf("\n enter amount to withdraw");
	scanf("%d",&withdraw);
	if(withdraw%100==0)
	{
 	if(cash>=withdraw)
 	{
   	cash-=withdraw;
   	printf("\n Amount after withdraw of cash is %f\n",cash);
 	}

        else
        {
        printf("\n you do not have sufficient balance. please deposite\n");
        }
       }
        else
       {
        printf("\n Enter withdraw amount in 100's\n");
       }
       break;
       }
       case 2:{
        int deposite;
        printf("\n Enter amount to deposite");
        scanf("%d",&deposite);
        if(deposite%100==0)
        {
          cash=cash+deposite;
          printf("\n Balance after deposite amount is %f\n",cash);
        }
        else
        {
          printf("\n please enter amount in 100's\n");
        }
        break;
          }
        case 3:{
          printf("balace is acccount is %2f\n",cash);
          break;
        }
         
        case 4:{
             exit(0);
           }
        default:{
               printf("\n enter valid choice\n");
         }
               break;
        }
       
       
}
           
     
      return 0;
}
	

