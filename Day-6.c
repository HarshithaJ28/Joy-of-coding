Question-2:

Program:

#include <stdio.h>

#include <string.h>
 
int main()

{
    
    char a[30]="RNS Institute of Technology";
    
    char b[30]=" Bengaluru";
   
    int l,i;
    
    l = strlen(a);
   
    printf("The length of the string is %d\n",l);
    
    strcat(a,b);
    
    printf("The new sting is %s\n",a);
    
    printf("Enter a string :%s\n",a);
    
    for (i = 0; a[i]!='\0'; i++) 
    
    {
        
        if(a[i] >= 'a' && a[i] <= 'z') 
        
        {
           
           a[i] = a[i] - 32;
        
        }
    
    }
   
    printf("\nString in Upper Case = %s", a);
   
    return 0;

}

Output:
The length of the string is 27
The new sting is RNS Institute of Technology Bengaluru
Enter a string :RNS Institute of Technology Bengaluru

String in Upper Case = RNS INSTITUTE OF TECHNOLOGY BENGALURU

-------------------------------------------------------------------------------------------------------------------------

Question-3:

Program:

#include <stdio.h>

#include <string.h>

int main()

{
    
    char a[30];
    
    int i;
    
    printf("Enter a string:\n");
   
    gets(a);
   
    printf("The abbrevated string is:\n ");
    
    for(i=0;a[i]!='\0';i++)
    
    {
        
        if(a[i]>='A' && a[i]<='Z')
        
        printf("%c",a[i]);
    
    }
   
    return 0;

}


Output:
Enter a string:
R N S Institute of Technology
The abbrevated string is:
RNSIT

-------------------------------------------------------------------------------------------------------------------------

Question-4:

Program:

#include <stdio.h>

int main()

{
    
    char a[100];
    
    int i,count=0;
    
    printf("Enter the string:\n");
    
    gets(a);
    
    int size = strlen(a);
    
    printf("The number of words in the string is:\n");
    
    for(i=0; i < size; i++)
    
    {
        
       if(a[i] ==' ')
        
       {
           
          count++;
        
       }
    
    }
    
    printf("%d\n",count+1);
    
    return 0;

}



Output:
Enter the string:
I have a car
The number of words in the string is:
4

-------------------------------------------------------------------------------------------------------------------------

Qusetion-5:

Program:

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main()

{
    
    char a[30],rev;
    
    int i;
    
    int size;
    
    printf("The string is :\n");
    
    gets(a);
    
    size=strlen(a);
   
    printf("The reverse of the string is :\n");
    
    for(i=size-1;i>=0;i--)
   
    {
        
       rev=printf("%c",a[i]);
   
    }
    
    for(i=0;i<size;i++)
    
    {
        
       if(a[i]==a[size-i-1])
       
       continue;
    
    }
    
    for(i=0;i<size;i++)
   
    {
        
       if(a[i]!=a[size-i-1]) 
       
       {
          
           printf("\nThe string is not a palindrome");
           
           exit (0);
        
       }
    
    }
   
    printf("\nThe string is a palindrome");
   
    return 0;

}

 
Output:
The string is :
MALAYALAM
The reverse of the string is :
MALAYALAM
The string is a palindrome





