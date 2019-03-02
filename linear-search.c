#include<stdio.h>
int main()
{
    int a[100],n, x,c=0,i,j;
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter %d elements in array  ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the element you want to search:");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("element found at position %d",i+1);
            c=1;
            break;
        }
    }
    if(c==0)
        printf("entered element is not found");
    return 0;
}
