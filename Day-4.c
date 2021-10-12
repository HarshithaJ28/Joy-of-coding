Question-1:

a. int arr1[10] - (The array is declared properly)
b. int n=10;-( Variable declaration)
   int arr2[n]- (Variable n cannot be used to in the array size)
c. int arr[]={10,20,30,40}-(Semi-colon is missing, Array declaration without size)
d. int arr[6]={10,20,30,40}-(Semi-colon is missing, Partial Array declaration) 
e. int arr[];-(Array declaration without size)
f. int arr[5];-(Array declaration0
   arr[3/2]=2;-(Array not declared properly)
g. int arr[2]={10,20,30,40,50};-(The numbers initialised are more than declared size of array)
h. int arr[2];
   printf("%d",&a[3]);
   printf("%d",&a[-2]);-(Uninitialised array is used)

-------------------------------------------------------------------------------------------------------------------------

Question-2:

Program:

int main()

{
    
    int i,j,k;
    
    int a[6];
    
    float b[6];
    
    char c[6];
    
    
    a[0]=560,a[1]=660,a[2]=590,a[3]=760,a[4]=480,a[5]=960;
    
    b[0]=97.5,b[1]=66,b[2]=79.25,b[3]=76.55,b[4]=98.45,b[5]=96.4;
    
    c[0]='M',c[1]='T',c[2]='W',c[3]='T',c[4]='F',c[5]='S';
    
    printf("Mr.Int earns:\n");
    
    for(i=0;i<6;i++)
    
    {   
       
       printf("%c : %d\n",c[i],a[i]);
    
    }
    
    printf("Mr.Float earns:\n");
    
    for(j=0;j<6;j++)
    
    {   
      
       printf("%c : %f\n",c[j],b[j]);
   
    }
    
    printf("Mr.Char remembers days as:\n");
    
    for(k=0;k<6;k++)
    
    {
        
       printf("%c\n",c[k]);
    
    }
    
    printf("The reverse order of Mr.Int earnings is:\n");
    
    for(i=5;i>=0;i--)
    
    {
       
       printf("%c : %d\n",c[i],a[i]);
    
    }
    
    printf("The reverse order of Mr.Float earnings is:\n");
    
    for(j=5;j>=0;j--)
    
    {
        
       printf("%c : %f\n",c[j],b[j]);
    
    }
    
    printf("The reverse order of days according to Mr.Char is:\n");
    
    for(k=5;k>=0;k--)
    
    {
        
       printf("%c\n",c[k]);
    
    }
   
    return 0;

}


Output:

Mr.Int earns:
M : 560
T : 660
W : 590
T : 760
F : 480
S : 960
Mr.Float earns:
M : 97.500000
T : 66.000000
W : 79.250000
T : 76.550003
F : 98.449997
S : 96.400002
Mr.Char remembers days as:
M
T
W
T
F
S
The reverse order of Mr.Int earnings is:
S : 960
F : 480
T : 760
W : 590
T : 660
M : 560
The reverse order of Mr.Float earnings is:
S : 96.400002
F : 98.449997
T : 76.550003
W : 79.250000
T : 66.000000
M : 97.500000
The reverse order of days according to Mr.Char is:
S
F
T
W
T
M


-------------------------------------------------------------------------------------------------------------------------

Question:3

Program:

#include <stdio.h>

int main()

{
    
   int i,j,sum=0,sum1;
    
   float sum2,avg1,avg2;
    
   int a[6];
    
   float b[6];
    
   char c[6];
      
   a[0]=560,a[1]=660,a[2]=590,a[3]=760,a[4]=480,a[5]=960;
    
   b[0]=97.5,b[1]=66,b[2]=79.25,b[3]=76.55,b[4]=98.45,b[5]=96.4;
    
   c[0]='M',c[1]='T',c[2]='W',c[3]='T',c[4]='F',c[5]='S';
    
   printf("Mr.Int earns:\n");
    
   for(i=0;i<6;i++)
    
   {   
       
      printf("%c : %d\n",c[i],a[i]);
    
   }
    
   printf("Mr.Float earns:\n");
    
   for(j=0;j<6;j++)
   
   {   
        
      printf("%c : %f\n",c[j],b[j]);
    
   }
    
   for(i=0;i<6;i++)
    
   {
        
      sum1=a[i]+sum;
    
   }
    
   printf("The weekly salary of Mr.Int is :%d\n",sum1);
    
   for(j=0;j<6;j++)
    
   {
        
      sum2=b[j]+sum;
    
   }
    
   printf("The weekly salary of Mr.Float is :%f\n",sum2);
    
   avg1=sum1/6;
    
   avg2=sum2/6;
    
   printf("The average salary of Mr.Int is :%f\n",avg1);
    
   printf("The average salary of Mr.Float is :%f\n",avg2);
    
   return 0;

}


Output:
Mr.Int earns:
M : 560
T : 660
W : 590
T : 760
F : 480
S : 960
Mr.Float earns:
M : 97.500000
T : 66.000000
W : 79.250000
T : 76.550003
F : 98.449997
S : 96.400002
The weekly salary of Mr.Int is :960
The weekly salary of Mr.Float is :96.400002
The average salary of Mr.Int is :160.000000
The average salary of Mr.Float is :16.066668

-------------------------------------------------------------------------------------------------------------------------

Question-4:

Program:

#include <stdio.h>

int main()

{
    
    int i,j,max1=0;
    
    float max2=0;
    
    char day1,day2;
    
    int a[6];
    
    float b[6];
    
    char c[6];
    
    a[0]=560,a[1]=660,a[2]=590,a[3]=760,a[4]=480,a[5]=960;
    
    b[0]=97.5,b[1]=66,b[2]=79.25,b[3]=76.55,b[4]=98.45,b[5]=96.4;
    
    c[0]='M',c[1]='T',c[2]='W',c[3]='T',c[4]='F',c[5]='S';
    
    for(i=0;i<6;i++)
    
    {
       
        if(a[i]>max1)
        
        {
            
           max1=a[i];
            
           day1=c[i];
        
        }
        
    
    }
    
    printf("Mr.Int party's when he earns %d on %c\n",max1,day1);
    
    for(j=0;j<6;j++)
    
    {
        
        if(b[j]>max2)
        
        {
            
           max2=b[j];
            
           day2=c[j];
       
        }
    
    }
    
    printf("Mr.Float party's when he earns %f on %c\n",max2,day2);
    
    return 0;

}

Output:
Mr.Int party's when he earns 960 on S
Mr.Float party's when he earns 98.449997 on F

-------------------------------------------------------------------------------------------------------------------------

Question-5:

Program:

#include <stdio.h>

int main()

{
    
   int a[10],key,i,count=0;
   
   printf("Enter random order of numbers :\n");
    
   for(i=0;i<10;i++)
   
   {
        
      scanf("%d",&a[i]);
    
   }
    
   printf("Enter the number that Mr.ShortInt asked to find:\n");
    
   scanf("%d",&key);
    
   for(i=0;i<10;i++)
    
   {
       
      count++;
        
      if(key!=a[i])
        
      continue;
        
      else
       
      printf("The number is found in %d attempts\n",count);
    
   }
    
    
   return 0;

}
 
Output:
Enter random order of numbers :
1
3
5
7
8
9
2
4
6
10
Enter the number that Mr.ShortInt asked to find:
9
The number is found in 6 attempts

Enhanced program:

#include <stdio.h>

int main()

{
    
    int a[10],key,i,count1=0,count2=0;
    
    printf("Enter random order of numbers :\n");
    
    for(i=0;i<10;i++)
    
    {
        
       scanf("%d",&a[i]);
    
    }
    
    printf("Enter the number that Mr.ShortInt asked to find:\n");
    
    scanf("%d",&key);
    
    for(i=0;i<10;i++)
    
    {
       
       count1++;
        
       if(key!=a[i])
        
       continue;
       
       else
        
       count2++;
        
       printf("The number %d is found at position %d\n",key,count1);
    
    }
    
    printf("The number %d is found %d times\n",key,count2);
    
    return 0;

}

Output:
Enter random order of numbers :
1
2
3
4
5
2
6
7
2
2
Enter the number that Mr.ShortInt asked to find:
2
The number 2 is found at position 2
The number 2 is found at position 6
The number 2 is found at position 9
The number 2 is found at position 10
The number 2 is found 4 times
   
   