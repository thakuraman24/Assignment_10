/*Q1. Write a function to calculate the area of a circle.

#include<stdio.h>

float circle(float r);

int main()
{
    printf("Enter radius\n");
    float r;
    scanf("%f",&r);
    printf("Aare of circle with radius %f is %f",r,circle(r));
    return 0;
}

float circle(float r)
{
    float a=(22*r*r)/7;
    return a;
}

Q2. Write a function to calculate simple interest.

#include<stdio.h>

float si(float pr, float ir, float t);

int main()
{
    printf("Enter principal\n");
    float pr,ir,t;
    scanf("%f",&pr);
    printf("Enter intrest rate\n");
    scanf("%f",&ir);
    printf("Enter time in years\n");
    scanf("%f",&t);
    printf("simple interest is %f",si(pr,ir,t));
    return 0;
}

float si(float pr, float ir, float t)
{
    float SI=(pr*ir*t)/100;
    return SI;
}

Q3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0.


#include<stdio.h>

int eo(int n);

int main()
{
    printf("Enter a no\n");
    int n;
    scanf("%d",&n);
    printf("%d",eo(n));
    return 0;
}

int eo(int n)
{
    int r=n%2;
    if(r==0)
        return 1;
    if(r==1)
        return 0;
}

Q4. Write a function to print first N natural numbers.

#include<stdio.h>

void pnn(int n);

int main()
{
    printf("How many natural no you want to print\n");
    int n;
    scanf("%d",&n);
    pnn(n);
    return 0;
}

void pnn(int n)
{
    for(int i=1;i<=n;i++)
        printf("%d\n",i);

}

Q5. Write a function to print first N odd natural numbers.


#include<stdio.h>

void pon(int n);

int main()
{
    printf("How many odd natural no you want to print\n");
    int n;
    scanf("%d",&n);
    pon(n);
    return 0;
}

void pon(int n)
{
    for(int i=1;i<=n;i++)
        printf("%d\n",2*i-1);

}



Q6. Write a function to calculate the factorial of a number.

#include<stdio.h>

long long int fac( int n);

int main()
{
    printf("Enter a no, whose factorial you want\n");
    int n;
    scanf("%d",&n);
    printf("%lli",fac(n));
    return 0;
}

long long int fac( int n)
{
    long long int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
        if(i==n)
            return f;
    }

}


Q7. Write a function to calculate the number of combinations one can make from n items and r selected at a time.

#include<stdio.h>

long long int combi(int n, int r);

int main()
{
    printf("enter n\n");
    int n,r;
    scanf("%d",&n);
    printf("enter r\n");
    scanf("%d",&r);

    printf("total no of possible combinations of %d elements selected %d at a time are %lli",n,r,combi(n,r));

    return 0;
}

long long int combi(int n, int r)
{
    long int i,j,k;
    long long int x,y,z;
    x=y=z=1;

    for(i=1;i<=n;i++)
        x=x*i;
    for(j=1;j<=r;j++)
        y=y*j;
    for(k=1;k<=(n-r);k++)
        z=z*k;

    return x/(y*z);
}

Q8. Write a function to calculate the number of arrangements one can make from n itemsand r selected at a time.

#include<stdio.h>

long int comb(int n, int r);

int main()
{
    printf("enter n\n");
    int n,r;
    scanf("%d",&n);
    printf("enter r\n");
    scanf("%d",&r);

    printf("number of arrangements one can make from %d items and %d selected at a time are %ld",n,r,comb(n,r));

    return 0;
}

long int comb(int n, int r)
{
    int i,j,k;
    long int x,y;
    x=y=1;

    for(i=1;i<=n;i++)
        x=x*i;
    for(j=1;j<=(n-r);j++)
        y=y*j;

    return x/y;
}

Q9. Write a function to check whether a given number contains a given digit or not.


#include<stdio.h>
char digitCheck(int num, int digit);

int main()
{
    printf("Enter the number\n");
    int num,digit;
    scanf("%d",&num);
    printf("Enter the digit\n");
    scanf("%d",&digit);

    printf("%c", digitCheck(num,digit));

    return 0;
}

char digitCheck(int num, int digit)
{
    int rem,con=0;

    for (int i = 1; con!=1 ; ++i)
    {
        rem=num%10;
        if(rem!=0)
        {
            if(rem==digit)
            {
                con=1;
                return 'Y';
            }
            num=(num-rem)/10;
        }
        else
            return 'N';

    }

}

Q10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3.

#include<stdio.h>
void pf(int num);

int main()
{
    int num;
    printf("Enter a number, whose prime factors you want to know\n");
    scanf("%d",&num);
    pf(num);
    return 0;
}

void pf(int num)
{
    int d=2;
    while(num!=1)
    {
        if(num%d==0)
        {
            num=num/d;
            printf("%d ",d);
        }
        else
            d++;
    }
}
*/






























