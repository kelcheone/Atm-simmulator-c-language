 #include <stdio.h>
 /*declare the variables*/
 unsigned long amount =1000, deposit, withdraw, transfers, paybills;
 int choice, pin, k;
 char transaction ='y'; // initialize  transactions
 void main(){
 	while (pin != 2021) //(authentication)  set the pin.
 	{
 		printf("Enter PIN Nunber: ");
 		scanf("%d", &pin); // ask for the pin
 		if (pin!=2021) 
 		printf("Wrong PIN Plaese enter a valid PIN: ");
	 }
	 do // 
	 {
	 	//Menu selection
	 	printf("------------------------KELCHE INC  ATM ------------------\n");
	 	printf("1. Check balance \n");
	 	printf("2. Withdraw cash \n");
	 	printf("3. Deposit cash \n");
	 	printf("4. Pay Bills \n");
	 	printf("5. Transfer funds \n");
	 	printf("6. Quit \n");
	 	printf("***************************-----------*********************");
	 	printf("Enter choice to continue\n");
	 	scanf("%d", &choice);	
	 	switch (choice)
	 	{
	 		case 1:
	 			printf("\nYour balance  is $: %ul. ", amount);
	 			break;
	 		case 2:
	 			printf("\nEnter The amount to withdraw: ");
	 			scanf("%ul", &withdraw);
	 			if (withdraw % 100 != 0) // atm allows on withdrawal of notes thus multiple of hundreds.
	 			{
	 				printf("\nPlease enter the amount in multiples of 100");
				 }
				 else if (withdraw >(amount -500))
				 {
				 	printf("\nInsufficient Bakance.");
				 }
				 else
				 {
				 	amount = amount - withdraw;
				 	printf("\n\nPlease collect  cash");
				 	printf("\n Your current balance is %lu", amount);
				 }
				 break;
			case 3:
				printf("\nEnter the amount to deposit");
				scanf("%lu", &deposit);
				amount = amount + deposit;
				printf("Your balance is %lu", amount);
				break;
			case 4:
				printf("\nEnter amount to  Pay ");
				scanf("%lu", &paybills);
				if (paybills % 100 != 0)
				{
					printf("\nPlease enter the amount in multiples of 100");
					
				}
				else if (paybills >(amount - 500))
				{
					printf("\n Insuficient Balance");
				}
				else
				{
					amount -=paybills;
					printf("\n\n Done!");
					printf("\n Your current balance is %lu", amount);
				}
				break;
			case 5:
				printf("\nEnter amount Transfer ");
				scanf("%lu", &transfers);
				if (transfers % 100 != 0)
				{
					printf("\nPlease enter the amount in multiples of 100");
					
				}
				else if (transfers >(amount - 500))
				{
					printf("\n Insuficient Balance");
				}
				else
				{
					amount = amount - transfers;
					printf("\n\n Done!");
					printf("\n Your current balance is %lu", amount);
				}
				break;
			case 6:
				printf("\nThank you for using Kelche Inc");
				break;
			default:
				printf("\nInvalid choice!!");
				
			}
			printf("\n\nDo you wish to have another transaction? (Y/N): \n");
			fflush(stdin);
			scanf("%c", &transaction);
			if (transaction == 'n' || transaction == 'N')
			k=1;
	 	
	 		 	
	 } while (!k);
	 printf("\n\n Thanks for using our atm service");
	 
 }
