#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>

int main()
{
   //Constants
   #define MAX 40
   #define N 40
   
   //Array Initialization
  char inventory[N][MAX] =
   {
     "Sugar", "Salt", "Spices","Tea",
     "Coffee","Bread","Butter","Cheese",
     "Milk","Flour","Rice","Pulses","Besan",
     "Poha","Tomatoes","Potatoes","Capsicum",
     "Pumpkin","Bhendi","Onion","Mango",
     "Apples","Bananas","Grapes","Jam",
     "Chips","Chocolate","Nuts","Eggs","Biscuits"
  };
  
  //Variable declaration
  char name[30];
  char item[30];
  char phone[15];
  int bill=0;
  int i, flag, p, quan;
  time_t t;  // not a primitive datatype
  
  printf("\nEnter your name - ");
  scanf("%s", name);
  printf("\nEnter your phone number - ");
  scanf("%s", phone);
  printf("\n\t Welcome to the Super Duper Supermarket %s!\n\n", name);
  printf ("Enter the items you want to buy or press q to quit - ");
  scanf("%s", item); //first input
 
 //The while loop will run as long as input is not q
  while  (strcmp(item, "q")!= 0)
  {
    flag = 0;
    
    for(i = 0; i < N; i++)
        {
            if(strcmp(inventory[i], item) == 0)
            {
               //statements for if match is found
               printf("  Found %s.\n", item);
               printf("  Enter the quantity - ");
               scanf("%d",&quan);
               bill=bill+ (quan*100);
               printf("\n\nEnter the next item or press q to quit - ");
               scanf("%s", item); //next input
               flag = 1;
               break;
            }
        }
        
    if(flag == 0)
        {
            //statements for if match is not found
            printf("  Not found, Please enter an item from the List");
            printf("\n\nEnter the next item or press q to quit - ");
            scanf("%s", item); //next input
        }
  }
  
   printf("\nEnd of List. \n\n\t");
   
  for(p=0; p<= 60; p++)
  {
      printf("*");  //design
  }
  
  
  //Final output display
  printf("\n\tName of Customer - %s", name);
  printf("\n\tCustomer Phone Number - %s", phone);
  
  time(&t); //UTC current time function
  
  printf("\n\tDate and Time: %s", ctime(&t));
  printf("\n\tTotal cost= Rs. %d ", bill);
  
  if (bill>=500 && bill<1000)
  {
      //discount no1
      printf("\n\tSince your total bill is more than Rs.500, You have recieved a discount of 10percent!");
      bill = bill - bill*0.1;
  }

  if (bill>=1000)
  {
      //discount no2
      printf("\n\tSince your total bill is more than Rs.1000, You have recieved a discount of 20percent!");
      bill = bill - bill*0.2;
  } 
  
  //Final bill after discount (if applicable)
  printf("\n\tAmount required to pay= Rs. %d \n\t", bill);
  
  for(p=0; p<=60; p++)
  {
      printf("*");  //design
  }
  printf("\n\n\tThank you for visiting the Super Duper Supermarket, %s! Enjoy your day.", name);
  
  
  return 0;
  
}















