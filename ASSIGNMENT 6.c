//1.Print sum of n natural no
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a natural number:");
    scanf("%d",&n);
  
    for(i=1; i<=n; i++)
   
    sum=sum+i;
        printf(" Sum is %d",sum);
   
}
  //2.Print sum of n even natural no.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a natural number:");
    scanf("%d",&n);
  
    for(i=0; i<=n; i++)
   
    sum=sum+i*2;
        printf(" Sum of even no is %d",sum);
   
}
//3.Print sum of n odd natural no.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a natural number:");
    scanf("%d",&n);
  
    for(i=1; i<=n; i++)
   
    sum=sum+i*2-1;
        printf(" Sum of odd no is %d",sum);
   
}
    
    //4.Print sum of n square no.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);

    for(i=1; i<=n; i++)

        sum=sum+i*i;
    printf(" Sum of square is %d",sum);

}
//5.Print sum of n cube no.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);

    for(i=1; i<=n; i++)

        sum=sum+i*i*i;
    printf(" Sum of cube is %d",sum);

}

//6.Print  factorial of N no.
#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter a number :");
    scanf("%d",&n);

    for(i=n; i>=1; i--)

        fact=fact*i;
    printf(" factorial of %d is %d",n,fact);

}
//7.Write a program to count digits in a given numbe
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a number :");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
    count++;
    }
    printf("no of digit is %d",count);


}
//9.Write a program to  calculate lcm of two numbers.
#include<stdio.h>
int main()
{
    int i,n,a,b;
    printf("Enter two mumbers :");
    scanf("%d%d",&a,&b);
    for(i=1; i<=a*b; i++)

    {
        if(i%a==0 && i%b==0)
        {
            break;
        }
    }
    printf("L.C.M of %d and %d is %d",a,b,i);

    
}
//10.Write a program to  reverse a number.
#include<stdio.h>
int main()
{
    int i,n,rem, rev;
    printf("Enter a number :");
    scanf("%d",&n);
    while(n!=0)
    {
    rem=n%10;
    n=n/10;
    rev= rev*10+rem;
    }
    printf("Reverse is %d",rev);

    
}
