#include<iostream.h>
#include<conio.h>
void main()
{
    int a[100],n,k,sum=0;
    clrscr();
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<k;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum;
    getch();
}
