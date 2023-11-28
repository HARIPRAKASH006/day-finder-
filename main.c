/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int date,month,year,a,b,c,d,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,x,y,z;
int cal(int);
int calc(int,int,int);
int mul(int);
int muli(int,int,int);
void main()
{
    scanf("%d%d%d",&date,&month,&year);
    if(date<=0)
    {
        printf("The data was wrong, Please check it!");
        return;
    }
    else if(year<=1599)
    {
        printf("The data was wrong, Please check it!");
        return;
    }
    if((month==1)&&(date<32)||(month==2)&&(date<=29)||(month==3)&&(date<32)||(month==4)&&(date<31)||
    (month==5)&&(date<32)||(month==6)&&(date<31)||(month==7)&&(date<32)||(month==8)&&(date<32)||
    (month==9)&&(date<31)||(month==10)&&(date<32)||(month==11)&&(date<31)||(month==12)&&(date<32))
    
    {
    if(month<=12&&(year<2000&&year>1600))
     {
        b=cal(year);
        a=calc(date,month,year);
        c=0+a+b;
        if(year<2000&&year>1900)
        {
            c=0+1+a+b;
        }
        else if(year<1900&&year>1800)
        {
            c=0+3+a+b;
        }
        else if(year<1800&&year>1700)
        {
            c=0+5+a+b;
        }
        else if(year<1700&&year>1600)
        {
            c=0+a+b;
        }
        
        if(c>7)
        {
            d=c%7;
            switch(d)
        {
            case 1:
            printf("Monday");
            break;
            case 2:
            printf("Tuesday");
            break;
            case 3:
            printf("wednesday");
            break;
            case 4:
            printf("Thursday");
            break;
            case 5:
            printf("Friday");
            break;
            case 6:
            printf("Saturday");
            break;
            case 7:
            printf("Sunday");
        }
        }
        else
        {
            d=c;
             switch(d)
        {
            case 1:
            printf("Monday");
            break;
            case 2:
            printf("Tuesday");
            break;
            case 3:
            printf("wednesday");
            break;
            case 4:
            printf("Thursday");
            break;
            case 5:
            printf("Friday");
            break;
            case 6:
            printf("Saturday");
            break;
            case 7:
            printf("Sunday");
        }
        }
    }
    else if(month<=12&&year>2000)
    {
        j=mul(year);
        i=muli(date,month,year);
        k=0+i+j;
        if(k>7)
        {
            l=k%7;
             switch(l)
        {
            case 1:
            printf("Monday");
            break;
            case 2:
            printf("Tuesday");
            break;
            case 3:
            printf("wednesday");
            break;
            case 4:
            printf("Thursday");
            break;
            case 5:
            printf("Friday");
            break;
            case 6:
            printf("Saturday");
            break;
            case 7:
            printf("Sunday");
        }
        }
        else
        {
            l=k;
             switch(l)
        {
            case 1:
            printf("Monday");
            break;
            case 2:
            printf("Tuesday");
            break;
            case 3:
            printf("wednesday");
            break;
            case 4:
            printf("Thursday");
            break;
            case 5:
            printf("Friday");
            break;
            case 6:
            printf("Saturday");
            break;
            case 7:
            printf("Sunday");
        }
        }
    }
    }
    else
    {
        printf("The data was wrong, Please check it!");
    }
    }

int calc(int date,int month,int year)
{
    if(month==1&&(date<32&&date>0))
    {
        s=date;
    }
    else if(month==2&&(date<=29&&date>0))
    {
        s=31+date;
    }
    else if(month==3&&(date<32&&date>0))
    {
        s=59+date;
    }
    else if(month==4&&(date<31&&date>0))
    {
        s=90+date;
    }
    else if(month==5&&(date<32&&date>0))
    {
        s=120+date;
    }
    else if(month==6&&(date<31&&date>0))
    {
        s=151+date;
    }
    else if(month==7&&(date<32&&date>0))
    {
        s=181+date;
    }
    else if(month==8&&(date<32&&date>0))
    {
        s=212+date;
    }
    else if(month==9&&(date<31&&date>0))
    {
        s=243+date;
    }
    else if(month==10&&(date<32&&date>0))
    {
        s=273+date;
    }
    else if(month==11&&(date<31&&date>0))
    {
        s=304+date;
    }
    else if(month==12&&(date<32&&date>0))
    {
        s=334+date;
    }
    if(year%4==0)
    {
        a=(s+1)%7;
    }
    else
    {
        a=s%7;
    }
    return a;
}    
    int cal(int year)
{
    if(year<2000&&year>=1900)
    {
        g=year-300-1600;
    }
    else if(year<1900&&year>=1800)
    {
        g=year-200-1600;
    }
    else if(year<1800&&year>=1700)
    {
        g=year-100-1600;
    }
    else if(year<1700&&year>=1600)
    {
        g=year-1600;
    }

    h=g-1;
    u=h/4;
    v=h-u;
    x=u*2;
    y=x+v;
    b=y%7;
    return b;
}
int mul(int year)
{
    m=year-2000;
    n=m-1;
    o=n/4;
    p=n-o;
    q=o*2;
    r=q+p;
    j=r%7;
    return j;
}
int muli(int date,int month,int year)
{
    if(month==1)
    {
        t=date;
    }
    else if(month==2)
    {
        t=31+date;
    }
    else if(month==3)
    {
        t=59+date;
    }
    else if(month==4)
    {
        t=90+date;
    }
    else if(month==5)
    {
        t=120+date;
    }
    else if(month==6)
    {
        t=151+date;
    }
    else if(month==7)
    {
        t=181+date;
    }
    else if(month==8)
    {
        t=212+date;
    }
    else if(month==9)
    {
        t=243+date;
    }
    else if(month==10)
    {
        t=273+date;
    }
    else if(month==11)
    {
        t=304+date;
    }
    else if(month==12)
    {
        t=334+date;
    }
    if(year%4==0)
    {
        i=(t+1)%7;
    }
    else
    {
        i=t%7;
    }
    return i;
}
