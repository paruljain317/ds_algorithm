#include<stdio.h>
int main()
{
    int res=0,n,i,j,k,x;
    printf("enter n*n matrix size:  ");
    scanf("%d",&n);
    int a[n][n] , b[n][n], c[n][n];
    printf("enter the matrix a:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
        printf("\n");
    }
    printf("enter matrix b:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);
        printf("\n");
    }
    printf("select what you want to do :-\n");
    printf("1.addition of two matrix....\n");
    printf("2.subtraction of two matrix...\n");
    printf("3.multiplication of two matrix...\n");
    printf("4.division of two matrix...\n");
    printf("enter your choice..... ");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                res=a[i][j]+ b[i][j];
                c[i][j]=res;
                printf("%d  ",c[i][j]);
            }
            printf("\n");
        }
        break;
    case 2:
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                res=a[i][j]-b[i][j];
                c[i][j]=res;
                printf("%d  ",c[i][j]);
            }
            printf("\n");
        }
        break;
    case 3:
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                c[i][j]=0;
                for(k=0;k<n;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
                printf("%d  ",c[i][j]);
            }
            printf("\n");
        }
        break;
    case 4:
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                res=a[i][j]/b[i][j];
                c[i][j]=res;
                printf("%d  ",c[i][j]);
            }
            printf("\n");
        }
        break;
    default:
        printf("your option choice is wronge!!!");
        break;
    }
    return 0;
}
