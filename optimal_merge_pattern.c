#include<stdio.h>
void quick_sort(int a[], int ,int );
void merge(int [] ,int ,int );
int main()
{
    int a[100] , i,j,n;
    printf("enter the no of elements:\n");
    scanf("%d",&n);
    printf("enter the elements in array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        quick_sort(a , 0, n-1);
        merge(a , i ,n-1);
    }
    printf("total = %d",a[n-1]);
    return 0;
}
void quick_sort(int a[] ,int l , int h)
{
    int i,j,pivot,temp;
    if(l<h)
    {
        pivot=l;
        i=l;
        j=h;
        while(i<j)
        {
            while(a[i]<=a[pivot] && i<h)
                i++;
            while(a[j]>a[pivot])
                j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        temp=a[pivot];
        a[pivot]=a[j];
        a[j]=temp;
        quick_sort(a, l , j-1);
        quick_sort(a , j+1 , h);
    }
}
void merge(int a[] , int l , int h)
{
    int i=l;
    if(i<h)
    a[i+1]=a[i]+a[i+1];
}
