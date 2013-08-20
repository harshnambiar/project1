#include <iostream>
#include <math.h>
using namespace std;
typedef struct point
{
    float x,y;
} pt;
float maxx(pt p[],int n)
{
    int i;
    float mx=-10000.00;
    for (i=0;i<n;i++)
        {
            if (p[i].x>mx)
                mx=p[i].x;
        }
    return mx;
}
float maxy(pt p[],int n)
{
    int i;
    float my=-10000.00;
    for (i=0;i<n;i++)
        {
            if (p[i].y>my)
                my=p[i].y;
        }
    return my;
}
float minx(pt p[],int n)
{
    int i;
    float m1=10000.00;
    for (i=0;i<n;i++)
        {
            if (p[i].x<m1)
                m1=p[i].x;
        }
    return m1;
}
float miny(pt p[],int n)
{
    int i;
    float m2=10000.00;
    for (i=0;i<n;i++)
        {
            if (p[i].y<m2)
                m2=p[i].y;
        }
    return m2;
}

main()
{
    int i,j,s=0.000,smin=10000.00;
    float a,b;
    int n;
    cin>>n;
    while (n!=0)
    {
        pt p[n];
        for (i=0;i<n;i++)
            cin>>p[i].x>>p[i].y;
        for (a=minx(p,n);a<=maxx(p,n);a=a+1.00)
        {
            for(b=miny(p,n);b<=maxy(p,n);b=b+1.00)
            {
                for (j=0;j<n;j++)
                    s=s+sqrt(pow(p[j].x-a,2)+(pow(p[j].y-b,2)));
                if (s<smin)
                    smin=s;
                s=0;

            }
        }

    }
}
