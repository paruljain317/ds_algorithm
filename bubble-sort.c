#include<stdio.h>
int main()
{
    int a[100],n,i,t,j;
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter %d elements in array  ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for (j=0;j<n-1;j++)
        {
            if(a[j+1]<a[j])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    printf("elements after sorting : ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
