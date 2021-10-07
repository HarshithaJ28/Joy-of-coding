# Joy-of-coding


//Question-1

#include <stdio.h>
int main()
{
    int a=10,b=100;
    float c=10.5,d=100.5;
    printf("++a=%d\n",++a);
    printf("--b=%d\n",--b);
    printf("++c=%f\n",++c);
    printf("--d=%f\n",--d);
    return 0;
}


//Question-2

#include <stdio.h>
int main()
{
    int a=5,b=5,c=10;
    printf("%d==%d is %d\n",a,b,a==b);
    printf("%d==%d is %d\n",a,c,a==c);
    printf("%d>%d is %d\n",a,b,a>b);
    printf("%d>%d is %d\n",a,c,a>c);
    printf("%d<%d is %d\n",a,b,a<b);
    printf("%d<%d is %d\n",a,c,a<c);
    printf("%d != %d is %d\n",a,b,a!=b);
    printf("%d != %d is %d\n",a,c,a!=c);
    printf("%d>=%d is %d\n",a,b,a>=b);
    printf("%d>=%d is %d\n",a,c,a>=c);
    printf("%d<=%d is %d\n",a,b,a<=b);
    printf("%d<=%d is %d\n",a,c,a<=c);
    return 0;
}


//Question-3

#include <stdio.h>
int main()
{
   int a=5,b=5,c=10,result;
   result=(a==b)&&(c>b);
   printf("(a==b)&&(c>b) is %d\n",result);
   result=(a==b)&&(c<b);
   printf("(a==b)&&(c<b) is %d\n",result);
   result=(a==b)||(c<b);
   printf("(a==b)||(c<b) is %d\n",result);
   result=(a!=b)||(c<b);
   printf("(a!=b)||(c<b) is %d\n",result);
   result=!(a!=b);
   printf("!(a!=b)=%d\n",result);
   result=!(a==b);
   printf("!(a==b) is %d\n",result);
   return 0;
}


//Question-4

#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("the size of int is %d\n",sizeof(a));
    printf("the size of float is %d\n",sizeof(b));
    printf("the size of char is %d\n",sizeof(c));
    printf("the size of double is %d\n",sizeof(d));
    return 0;
}


//Question-5

#include <stdio.h>
int main()
{
    int num=22;
    int n1=num<<1;
    int n2=num<<2;
    int n3=num>>1;
    int n4=num>>2;
    printf("%d<<1 is %d\n",num,n1);
    printf("%d<<2 is %d\n",num,n2);
    printf("%d>>1 is %d\n",num,n3);
    printf("%d>>2 is %d\n",num,n4);
    return 0;
}


//Question-6

#include <stdio.h>
int main()
{
    int a,b,c,large;
    printf("Enter the three numbers\n");
    scanf("%d\n%d\n%d\n",&a,&b,&c);
    large=(a>b)?a:b;
    large=(large>c)?large:c;
    printf("The largest of the three numbers is:%d\n",large);
    return 0;
}
