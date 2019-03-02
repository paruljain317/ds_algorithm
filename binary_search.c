#include<stdio.h>
int b_search(int [], int , int , int );
int main()
{
    int a[100] ,i,j,x,n,r;
    printf("enter the no of elements: ");
    scanf("%d",&n);
    printf("enter the array elements in ascending order:  ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the element you want to search : ");
    scanf("%d",&x);
    r=b_search(a , 0, n-1, x);
    if(r!=0)
        printf("element found at position %d ",r);
    else if(r==0)
        printf("element not found!!");
    return 0;
}
int b_search(int a[], int l, int h, int x)
{
    int m ;
    if(h>=1)
    {
        m=(l+h)/2;
        if(a[m]==x)
            return (m+1);
        else if(a[m]>x)
            b_search(a , l, m-1, x);
        else
            b_search(a, m, h, x);
    }
    return 0;
}
