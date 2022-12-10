#include<stdio.h>
int main()
{
    int N,i,a[N],sum=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
}