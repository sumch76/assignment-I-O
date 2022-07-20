
//1.Print N times MySirG
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter n times MySirG:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {

        printf("MySirG\n");
    }
}

//2.Print first N natural no.
#include<stdio.h>
int main()
{
    int i,n;
    printf("First N natural No:  ");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {

        printf("%d\n",i);
    }
}

//3.Print first N natural no in reverse order.
#include<stdio.h>
int main()
{
    int i,n;
    printf("first N natural no in reverse order  ");
    scanf("%d",&n);
    for(i=n; i>=0; i--)
    {

        printf("%d\n",i);
    }
}
//4.Print first N odd natural no.
#include<stdio.h>
int main()
{
    int i,n;
    printf("First N odd natural no.");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d\n",2*i-1);
    }
}


//5..Print first N odd natural no in reverse order.
#include<stdio.h>
int main()
{
    int i,n;
    printf("first N odd natural no: ");
    scanf("%d",&n);
    
    for(i=n; i>=1; i--)
    {
        printf("%d\n",2*i-1);
    }
 }

//6..Print first n even natural no.
#include<stdio.h>
int main()
{
    int i,n;
    printf("first N even natural No: ");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
        printf("%d\n",2*i);
    }
}
//7.Print first N even natural no in reverse order.
#include<stdio.h>
int main()
{
    int i,n;
    printf("First N even natural no in reverse order: ");
    scanf("%d",&n);
    
    for(i=n; i>=1; i--)
    {
        printf("%d\n",2*i);
    }
}
//8.Print square of first N  natural no.
 #include<stdio.h>
 int main()
 {
    int i,n;
     printf("Square of first N natural no:  ");
       scanf("%d",&n);


    for(i=0; i<=n; i++)
    {
        printf("%d\n",i*i);
    }
}

// //9.Print cube of first N natural no.
#include<stdio.h>
int main()
{
    int i;
       printf("CUBE of first N natural no");
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
        printf("%d\n",i*i*i);
    }
}
// //10.Print table of first N natural no.
#include<stdio.h>
int main()
{
    int i,n;
    printf("Table of  ");
    scanf("%d",&n);
  
    for(i=1; i<=10; i++)
    {
        printf("%d\n",n*i);
    }
}
