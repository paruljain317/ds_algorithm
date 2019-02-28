#include<stdio.h>
void input_a(int [],int);
void input_b(int [],int);
void display_a(int [],int);
void display_b(int [],int);
void insert(int [],int);
void delet(int [],int);
void merge(int [],int [],int ,int );
void search(int [],int);
void main()
{
    int a[100],b[100],a1,b1;
    printf("enter the no of elements in array a\n");
    scanf("%d",&a1);
    input_a(a,a1);
    printf("enter the no of elements in array b \n");
    scanf("%d",&b1);
    input_b(b,b1);
    display_a(a,a1);
    display_b(b,b1);
    insert(a,a1);
    delet(a,a1);
    merge(a,b,a1,b1);
    search(a,a1);

}
void input_a(int a[],int a1)
{
    int i;
    printf("enter the elements of a\n");
    for(i=0;i<a1;i++)
        scanf("%d",&a[i]);
}
void input_b(int b[],int b1)
{
    int i;
    printf("enter the elements of b\n");
    for(i=0;i<b1;i++)
        scanf("%d",&b[i]);
}
void display_a(int a[],int a1)
{
    int i;
    printf("\narray a==");
    for(i=0;i<a1;i++)
        printf("%d  ",a[i]);
}
void display_b(int b[],int b1)
{
    int i;
    printf("\narray b==");
    for(i=0;i<b1;i++)
        printf("%d  ",b[i]);
}
void insert(int a[],int a1)
{
    int x,i,p;
    printf("\nenter the element u want to insert ");
    scanf("%d",&x);
    printf("enter the position at which u want to insert the element");
    scanf("%d",&p);
    for(i=a1;i>p;i--)
        a[i]=a[i-1];
    a[i]=x;
    display_a(a,a1+1);
}
void delet(int a[],int a1)
{
    int x,i,j;
    printf("\nenter the element u want to delete");
    scanf("%d",&x);
    for(i=0;i<a1;i++)
    {
        if(a[i]==x)
            break;
    }
    for(j=i;j<a1;j++)
        a[j]=a[j+1];
    display_a(a,a1);
}
void merge(int a[],int b[],int a1,int b1)
{
    int c[100],i,j;
    for(i=0;i<a1;i++)
        c[i]=a[i];
    for(j=0;j<b1;j++)
        c[i+j]=b[j];
    for(i=0;i<(a1+b1);i++)
        printf("%d  ",c[i]);
}
void search(int a[],int a1)
{
    int x,i,c=0;
    printf("\nenter the element u want to search");
    scanf("%d",&x);
    for(i=0;i<a1;i++)
    {
        if(a[i]==x)
        {
            printf("\nelement found at position %d ",i+1);
            c=1;
            break;
        }
    }
    if(c==0)
        printf("element not found");
}
