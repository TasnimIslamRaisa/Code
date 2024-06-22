/* #include<stdio.h>
 #include<math.h>

 int main()
 {   double r,area;
     scanf("%lf",&r);
     area=3.141592653*pow(r,2);
     printf("%.9lf",area);
     return 0;
 }
//if(c == '>')
    //printf(a>b? "right\n":"wrong\n");*/


/*#include<stdio.h>

int main()
{
    long long a,b;
    char s;
    scanf("%lld %c %lld",&a,&s,&b);
    if(s=='+')
    printf("%lld\n" ,a+b);
    if(s=='-')
    printf("%lld\n" ,a-b);
    if(s=='*')
    printf("%lld\n" ,a*b);
    if(s=='/')
    printf("%lld\n" ,a/b);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i=1;
    scanf("%d",&i);
    while(i>=10)
    {
        i=i/10;

    }
    if(i%2==0)
        printf("EVEN");
    else
        printf("ODD");

    return 0;
}*/


/*#include<stdio.h>
int main()
{
    double x,y;
    scanf("%lf%lf",&x,&y);
    if(x>0 && y >0)
        printf("Q1\n");
     else if(x<0 && y>0)
        printf("Q2\n");
     else if(x<0 && y<0)
        printf("Q3\n");
     else if(x>0 && y<0)
        printf("Q4\n");
     else if(x>0 || x<0 && y==0)
        printf("Eixo X\n");
     else if(x==0 && y==0)
            printf("Origem\n");
     else
        printf("Eixo Y\n");
    return 0;
} */
/*
#include<stdio.h>
int main()
{
    long long n,y,m,d;
    scanf("%lld",&n);
    y=n/365;
    m=(n%365)/30;
    d=(n%365)%30;
    printf("%lld years\n",y);
    printf("%lld months\n",m);
    printf("%lld days\n",d);
    return 0;
}*/
/*
#include<stdio.h>
int main()
{
    double x;
    scanf("%lf",&x);
    if(x>=0 && x<=25)
        printf("Interval [0,25]\n");
    else if(x>25 && x<=50)
        printf("Interval (25,50]\n");
    else if(x>50 && x<=75)
        printf("Interval (50,75]\n");
    else if(x>75 && x<=100)
        printf("Interval (75,100]\n");
    else
        printf("Out of Intervals\n");
    return 0;
}
#include<stdio.h>
int main()
{
    long long a,b,c;
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a<b){
        if(a<c)
            printf("%lld",a);
        else
            printf("%lld",c);
        }
        else
        {
            if(b<c)
                printf("%lld",b);
            else
                printf("%lld",c);
        }
    return 0;
}

#include<stdio.h>
int main()
{
    long long a,b;
    char s;
    scanf("%lld %c %lld",&a,&s,&b);
    if(s== '>')
        printf((a>b)? "Right\n":"Wrong\n");
    else if(s== '<')
        printf((a<b)? "Right\n":"Wrong\n");
    else if(s== '=')
        printf((a==b)? "Right\n":"Wrong\n");
return 0;
}
/*
#include<stdio.h>
int main()
{
    long long a,b,c;
    char s,q;
    scanf("%lld %c %lld %c %lld",&a,&s,&b,&q,&c);
    if(s=='+'){
        if(a+b==c)
            printf("Yes\n");
        else
            printf("%d\n",a+b);
    }
    else if(s=='-')
    {
        if(a-b==c)
            printf("Yes\n");
        else
            printf("%d\n",a-b);
    }
    else if(s=='*')
    {
        if(a*b==c)
            printf("Yes\n");
        else
            printf("%d\n",a*b);
    }
    return 0;
}*/
/*
#include<stdio.h>
main()
{
   int x;
   double d,r;
   scanf("%lf",&d);
   x=d;
   r=d-x;
   if(r==0)
    printf("int %d\n",x);
   else
    printf("float %d %.3lf\n",x,r);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    long long a,b,c,d,m1,m2,m3,m4,m5;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    m1=a%100;
    m2=b%100;
    m3=c%100;
    m4=d%100;
    m5=(m1*m2*m3*m4)%100;
    if(m5>=0 && m5<10)
        printf("0%lld\n",m5);
    else
    printf("%lld\n",m5);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i=1,n,x,c=0;
    float sum=0,avr;
    //scanf("%d",&n);
    while(1){
            scanf("%d",&x);
            if(x==-1)
                break;
        sum=sum+x;
        c=c+1;
    //i++;
    }
    avr=sum/c;
    printf("%.2f",avr);
    return 0;
}
/*#include<stdio.h>
main()
{
    int i,n,x,counter;
    float sum=0;avr;

}
#include<stdio.h>
int main()
{
    int p=0,f=0,s=1,result;
    while(s<=10){
            printf("Enter result: ");
        scanf("%d",&result);
        if(result==1)
           p=p+1;
        else
            f=f+1;
        s=s+1;
    }
    printf("passed %d\n",p);
    printf("fail %d\n",f);
    if(p>8)
        printf("raise tuition\n");
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    double p=1000.0,a,r=.5;
    int y;
    printf("%d%f\n","y","a");
    for(y=1;y<=10;y++){
        a=p* pow(1+r,y);
    printf("%f\n",a);
}
}
#include<stdio.h>
int main()
{
    long long i,n,x,even=0,odd=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
       scanf("%lld",x);
    if(i%2==0)
    {even = even+1;
    printf("Even %lld\n",even);}
    else if(i%2!=0)
    {odd=odd+1;
    printf("Odd %lld",odd);}
     }
    return 0;
}
#include<stdio.h>
int main()
{
    long long x,y,z,min,max;
    scanf("%lld%lld%lld",&x,&y,&z);
    min=x;
    if(min>y)
        min=y;
    if(min>z)
        min=z;
    max=x;
    if(max<y)
        max=y;
    if(max<z)
        max=z;
    printf("%lld %lld",min,max);

    return 0;
}

#include<stdio.h>
int main()
{
    long long a,b,c,x,y,z,min,temp;
    scanf("%lld %lld %lld",&a,&b,&c);
    x=a;
    y=b;
    z=c;
    min=a;
    if(min>b)
        min=b;
    if(min>c)
        min=c;
    if(min==b)
    {
        temp=b;
        b=a;
        a=temp;
    }
    else if(min==c)
    {
        temp=c;
        c=a;
        a=temp;
    }
    if(b>c)
    {
        temp=b;
        b=c;
        c=temp;
    }
    printf("%lld\n%lld\n%lld\n",a,b,c);
    printf("\n");
    printf("%lld\n%lld\n%lld\n",x,y,z);
    return 0;
}
#include<stdio.h>
int main()
{
    long long n,x,i;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&x);

       }

    return 0;
}
#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
        printf("%d * %d = %d\n",n,i,i*n);
    return 0;
}
#include<stdio.h>
int main()
{
    long long i,n,f=1;
    scanf("%lld",&n);
    for(i=n;i>=1;i--)
        f=f*i;
    printf("%lld\n",f);

    return 0;
}*/

















































