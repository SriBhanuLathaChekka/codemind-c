#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N],i;
    float avg;
    for(i=1;i<=N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=N;i++)
    {
        avg=avg+a[i];
    }
    printf("%.2f",avg/N);
}