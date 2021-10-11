Question-1:

Program:

#include <stdio.h>

int main()

{
    int num,n,rev,rem,count;
    
     rev=rem=count=0;
    
     printf("Enter the number:\n");
    
     scanf("%d",&num);
    
     n=num;
    
     while(num!=0)
    
     {
       
        rem=num%10;
        
        rev=rev*10+rem;
        
        num=num/10;
    
     }
   
     printf("The reverse number of %d is %d\n",n,rev);
   
     printf("The digits of the given number are:\n");
    
     while(rev!=0)
    
     {
       
        count++;
        
        rem=rev%10;
       
        rev=rev/10;
        
        printf("%d\n",rem);
    
     }
    
     printf("The total number of digits in the number are:%d\n",count);
    
     return 0;

}



Output:
Enter the number:
34567
The reverse number of 34567 is 76543
The digits of the given number are:
3
4
5
6
7
The total number of digits in the number are:5

--------------------------------------------------------------------------------------------------------------------------

Question-2:

Program:

#include <stdio.h>

int main()

{
    
    int num,n,sum,sdsum,rem;
    
    sum=0,sdsum=0;
    
    printf("Enter the number:\n");
    
    scanf("%d",&num);
    
    n=num;
    
    while(num!=0)
    
    {
        
       rem=num%10;
        
       sum=sum+rem;
        
       num=num/10;
    
    }
    
    printf("The sum of the digits of %d is:%d\n",n,sum);
    
    while(sum!=0)
   
    {
        
       rem=sum%10;
        
       sdsum=sdsum+rem;
        
       sum=sum/10;
    
    }
   
    printf("The single digit sum is:%d\n",sdsum);
    
    return 0;

}

 

Output:
Enter the number:
5678
The sum of the digits of 5678 is:26
The single digit sum is:8 

--------------------------------------------------------------------------------------------------------------------------

Question-3:

Program:

#include <stdio.h>

int main()

{
    
    int num,n,rem,sum;
    
    sum=0;
    
    printf("Enter the number:\n");
    
    scanf("%d",&num);
    
    n=num;
    
    while(num!=0)
    
    {
       
       rem=num%10;
        
       sum=(rem+1)+sum;
        
       num=num/10;
    
    }
    
       printf("The sum is:%d\n",sum);
    
       return 0;

}
 

Output:
Enter the number:
2467
The sum is:23

--------------------------------------------------------------------------------------------------------------------------

Question-4:

Program:

#include <stdio.h>

int main()

{
    
    int num,n,rem,rev;
    
    rev=0;
    
    printf("Enter the number:\n");
    
    scanf("%d",&num);
    
    n=num;
    
    while(num!=0)
    
    {
        
       rem=num%10;
        
       rev=rev*10+rem;
        
       num=num/10;
    
    }
    
    printf("The digits are:\n");
   
    while(rev!=0)
    
    {
        
       rem=rev%10;
        
       rev=rev/10;
        
       if(rem!=0)
        
       printf("%d\n",rem);
        
       else 
        
       continue;
    
    }
    
    return 0;

}


Output:
Enter the number:
10507
The digits are:
1
5
7

--------------------------------------------------------------------------------------------------------------------------

Question-5:

Program:

#include <stdio.h>

int main()

{
    
     int code,n,pin,rev,rem;
    
     rev=0;
    
     printf("The code is:\n");
    
     scanf("%d",&code);
    
     n=code;
    
     while(code!=0)
    
     {
        
        rem=code%10;
        
        rev=rev*10+rem;
        
        code=code/10;
    
     }
 
     printf("The pin is:\n");   
     while(rev!=0)
    
     {
        
        rem=rev%10;
        
        rev=rev/10;
        
        if(rem==9)
        
        printf("0");
        
        else 
        
        printf("%d",rem+1);
    
     }
    
     return 0;

}


Output:

The code is:
4996
The pin is:
5007





      