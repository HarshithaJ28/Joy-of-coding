Question-1:

Program:

#include <stdio.h>

int main()

{
    
   int a[10];
    
   int key,ele1,ele2,i;
    
   printf("The array of elements is:\n");
    
   for(i=0;i<10;i++)
    
   { 
     
      scanf("%d",&a[i]);
    
   }
    
   printf("Number to be entered between the numbers:\n");
   
   scanf("%d",&key);
    
   printf("The numbers inbetween which it has to be entered:\n");
    
   scanf("%d%d",&ele1,&ele2);
    
   printf("The output after the number is added at desired position is:\n");
    
   for(i=0;i<10;i++)
   
   {
      
      if(a[i]!=ele1)
     
      {
        
         printf("%d\t",a[i]);
      
      }
      
      else
      
      {
        
         printf("%d\t",a[i]);
     
         printf("%d\t",key);
      
      }
    
   }
   
   return 0;

}


Output:

The array of elements is:

1 
2 
3 
4 
5
 6 
7 
8 
9
 10

Number to be entered between the numbers:

22

The numbers inbetween which it has to be entered:

7
8

The output after the number is added at desired position is:

1 
2 
3 
4 
5 
6 
7 
22 
8 
9 
10

-------------------------------------------------------------------------------------------------------------------------

Question-2:


Program:

#include <stdio.h>

int main()

{
    
   int a[10];
    
   int i,key;
    
   printf("Enter the elements of the array:\n");
    
   for(i=0;i<10;i++)
   
   {
        
      scanf("%d",&a[i]);
    
   }
   
   printf("Enter the element to be removed:\n");
    
   scanf("%d",&key);
   
   printf("The array after the element is removed is :\n");
    
   for(i=0;i<10;i++)
    
   {
        
      if(a[i]!=key)
        
      printf("%d\t",a[i]);
    
   }
     
   return 0;

}


Output:
Enter the elements of the array:
1 2 3 4 5 6 7 8 9 10
Enter the element to be removed:
7
The array after the element is removed is :
1 2 3 4 5 6 8 9 10

-------------------------------------------------------------------------------------------------------------------------

Question-3:

Program:

#include <stdio.h>

int main()

{
    
   int a[10];
    
   int i,j;
    
   printf("Enter the elements in a group:\n");
    
   for(i=0;i<10;i++)
    
   {
        
      scanf("%d",&a[i]);
    
   }
    
   for(i=0;i<10;i++)
    
   {
        
        
      for(j=i+1;j<10;j++)
       
      {   
            
          if(a[i]==a[j])
            
          {
               
             printf("The array is not unique\n");
                
             exit (0);
            
          }
        
      }
    
    }
   
    printf("The array is unique\n");
   
    return 0;

}


Output:
Enter the elements in a group:
1
2
3
4
1
5
6
7
8
9
The array is not unique

-------------------------------------------------------------------------------------------------------------------------

Question-4:

Program:

#include <stdio.h>

int main()

{
    
    int a[100], f[100];
    
    int size, i, j, count;
    
    printf("Enter size of array: ");
    
    scanf("%d", &size);
    
    printf("Enter elements in array: ");
    
    for(i=0; i<size; i++)
    
    {
        
        scanf("%d", &a[i]);
       
        f[i] = -1;
    
    }
    
    for(i=0; i<size; i++)
    
    {
        
        count = 1;
        
        for(j=i+1; j<size; j++)
        
        {
            
            if(a[i]==a[j])
            
            {
               
               count++;
                
               f[j] = 0;
            
            }
        
        }
       
        if(f[i] != 0)
        
        {
            
            f[i] = count;
       
        }
    
    }
    
    printf("\nFrequency of all elements of array : \n");
    
    for(i=0; i<size; i++)
    
    {
        
        if(f[i] != 0)
        
        {
            
            printf("%d : %d \n", a[i], f[i]);
        
        }
    
     }
   
     return 0;

}

Output:
Enter size of array: 
15
Enter elements in array: 
1
2
3
4
5
1
2
3
4
5
7
8
9
10
1
Frequency of all elements of array : 
1 : 3 
2 : 2 
3 : 2 
4 : 2 
5 : 2 
7 : 1 
8 : 1 
9 : 1 
10 : 1 

