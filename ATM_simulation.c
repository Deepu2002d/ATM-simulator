#include<stdio.h>


int main()
{
	int pin;
	printf("*********************************Welcome to MY Bank*************************************** \n");
	printf("Enter your pin \n");
	scanf("%d", &pin);
	if (pin != 1234)  //considering PIN as 1234 however in reality it is fetched from database using your ATM card number
	printf("Your PIN is incorrect. Please try again.");
	else
	{
	int option, left_money;
	int wm;  //wm - withdrawl money
	int dm; //dm - deposite money
	int balance=1000;    //intitializing balance as 1000
	printf("\nChoose an option \n");
	printf("1. Balance Enquiry \n");
	printf("2. Withdraw Money \n");
	printf("3. Deposite Money \n");
	printf("4. Exit \n \n");
	scanf("\n %d", &option);
	switch (option)
	{
	case 1: 
	printf("Your current balance is %d \n", balance);
	case 2: 
	printf("Enter amount to withdraw: ");
	scanf("%d", &wm);
	if (wm>1000)
	printf("You don\'t have that much money in your account. \n");
	else
	{
	int left_money = balance-wm;
	printf("Money withdrawl successful. Please collect your cash.\n"); 
	printf("Money debitted - %d \n", wm);
	printf("Balance Left -- %d \n", left_money);
	}
	break;
	case 3:
	printf("Enter amount to deposite \n");
	scanf("%d", &dm);
	int updated_money = balance+dm;
	printf("Money deposited successfully \n");
	printf("Money creditted - %d \n", dm);
	printf("Total money -- %d \n", updated_money);
	default:
	printf("Thank you for using MY Bank");
	break;
}

}
	}

