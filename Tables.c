#include<stdio.h>
int main()
{
    int a,b,m,n;
    scanf("%d%d",&b,&n);
    for(a=1;a<=n;a++)
    {
        if(a%2==1)
        {
            m=b*a;
            printf("%d x %d = %d
",b,a,m);
        }
    }
}