#include <iostream>
using namespace std;
void asort(int a[], int n)
{
    int i,j;
    for(i=0;i<n;i++)
        {
            for (j=i+1;j<n;j++)
                {
                    if (a[i]>a[j])
                    {
                        int t;
                        t=a[i];
                        a[i]=a[j];
                        a[j]=t;
                    }


                }
}
//return a;
}
main ()
{
    int q;
    cin>>q;
    int i,a[q];
    for (i=0;i<q;i++)
        cin>>a[i];
    asort(a,q);
    for(i=0;i<q;i++)
        cout<<a[i];
}
