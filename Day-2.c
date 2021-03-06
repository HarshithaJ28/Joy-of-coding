//Question:1

In India, the eligibility for voting is 18 years. Write a program that takes age as input and generates the decision whether one is eligible for voting or not. Display the appropriate
message. Provide alternate solution using ternary operator.


//Program:
 
#include <stdio.h>

int main()

{
    
    int age;
   
    printf("Enter the age :\n");
    
    scanf("%d\n",&age);
    
    if(age>=18)
    
    {
       
       printf("Is eligible to vote\n");
    
    }
   
    else
    
    {
      
       printf("Is not eligible to vote\n");
   
    }
    
    return 0;

}


//Alternate program


#include <stdio.h>

int main()

{
    
     int age;
   
     printf("Enter the age:\n");
    
     scanf("%d",&age);
    
     (age>18)?printf("Eligible to vote"):printf("Not eligible to vote");
    
     return 0;

}



//Output:

Enter the age:
23
Eligible to vote

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Question:2

Write a program that accepts 2 integers as input and displays the largest integer. Upgrade the program that determines the largest of three numbers. Make sure that if any one of the
numbers is negative then the program should abort without finding the largest.


//Program:

#include <stdio.h>

int main()

{
    
    int a,b;
    
    printf("Enter the two numbers:\n");
    
    scanf("%d%d",&a,&b);
   
    if(a<0||b<0)
   
    {
       
      printf("Invalid input\n");
  
    }
    
    else if(a>b)
   
    {
       
      printf("The largest number is %d",a);
    
    }
   
    else
    
    {
       
      printf("The largest number is %d",b);
   
    }
   
    return 0;

}



//Output:

Enter the two numbers:
12

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Question:3

Write a program that accepts two integers and simulate a simple calculator. if one of the operands is “zero”, then print appropriate message while performing division. The operators
to be handled are +, -, *, /, %.

//Program:

#include <stdio.h>

#include <stdlib.h>

int main()

{
    
   int op1,op2,res;
    
   char oper;
    
   printf("Enter the operator:\n");
    
   scanf("%c",&oper);
    
   printf("Enter the operands:\n");
    
   scanf("%d%d",&op1,&op2);
    
   switch(oper)
    
   {
        
      case '+':res=op1+op2;
                 
               break;
        
      case '-':res=op1-op2;
                 
               break;
        
      case '*':res=op1*op2;
                 
               break;
        
      case '/':if(op2==0)
                 
               {
                     
                 printf("Zero error\n");
                     
                 exit(0);
                 
               }
                 
               else
                     
                 res=op1/op2;
                     
                 break;
         
      default:printf("Enter a valid operator!!");            
    
   }
   
   printf("Result is %d\n",res);
    
   return 0;

}


//Output:

Enter the operator:
+
Enter the operands:
12
23
Result is 35

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Question:4

Following is the CET rank cut-off at RNSIT
CSE 3250
ISE 6505
EandC 12012
MEC 22340
Help your friend Mr. Engineer with a rank to know the possibility of getting into a particular branch.


//Program:



#include <stdio.h>

int main()

{
   
   int rank;
    
   printf("Enter the rank obtained in K-CET:\n");
    
   scanf("%d",&rank);
    
   if(rank<=3250)
   
   {
        
      printf("Admission possible in all branches\n");
    
   }
    
   else if(rank>3250&&rank<=6505)
    
   {
       
      printf("Admission possible in ISE\nEandC\nMEC\n");
   
   }
    
   else if(rank>6505&&rank<=12012)
    
   {
        
      printf("Admission possible in EandC\nMEC\n");
    
   }
    
   else if(rank>12012&&rank<=22340)
    
   {
        
      printf("Admission possible in MEC\n");   
    
   }
    
   else
    
   {
        
      printf("Admission not possible in RNSIT\n");
    
   }
    
   return 0;

}


//Output:

Enter the rank obtained in K-CET:
6758
Admission possible in 
EandC
MEC

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Question:5

Now that the colleges are offline, no more online exams!!!! RNSIT to procure blue books from “Paper Mills”. The sales executive quotes ₹ 10 per book. However, for bulk deal he offers the discounts. The deal is as given below
if number of books <10000 then “no discount”
if number of books >10000 and <15000 then 10% discount
if number of books >15000 and <20000 then 20% discount.
Help the accountant to generate the bill based on the order. Explore all test cases and validate
your answer.


//Program:


#include <stdio.h>

int main()

{
   
   int num;
   float bill;
    
   printf("The no.of.books purchased:\n");
    
   scanf("%d",&num);
    
   if(num<=10000)
    
   {
        
      bill=num*10;
        
      printf("No discount!!");
       
      printf("The total bill is %f",bill);
    
   }
    
   else if(num>10000&&num<=15000)
    
   {
        
      bill=num*10;
       
      bill=bill-(bill*10)/100;
        
      printf("Hey!!You got 10 percent discount\n");
        
      printf("The total bill is %f\n",bill);
    
   }
   
   else
    
   {
       
      bill=num*10;
        
      bill=bill-(bill*20)/100;
        
      printf("Hey!!You got 20 percent discount\n");
       
      printf("The total bill is %f\n",bill);
    
   }
    
   return 0;

}



//Output:



The no.of.books purchased:
13400
Hey!!You got 10 percent discount
The total bill is 120600.000000