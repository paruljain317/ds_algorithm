#include<stdio.h>
void knap_sack(int ,float [], float [], float );
int main()
{
    float weight[20], profit[20], capacity;
    int i,j,n;
    float ratio[20] , temp;

    printf("enter the no of objects : ");
    scanf("%d",&n);

    printf("\nenter the weights and profits of each object:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f  %f", &weight[i], &profit[i]);
        printf("\n");
    }
    printf("enter the capacity of knapsack : ");
    scanf("%f",&capacity);

    for(i=0;i<n;i++)
        ratio[i]=profit[i]/weight[i];

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ratio[i] < ratio[j])
            {
                temp = ratio[j];
                ratio[j] = ratio[i];
                ratio[i] = temp;

                temp = weight[j];
                weight[j] = weight[i];
                weight[i] = temp;

                temp = profit[j];
                profit[j] = profit[i];
                profit[i] = temp;
            }
        }
    }
    knap_sack(n, weight, profit, capacity);
    return 0;
}
void knap_sack(int n, float weight[], float profit[], float capacity)
{
    float x[20], tp = 0;
    int i, j, u;
    u = capacity;

    for (i = 0; i < n; i++)
        x[i] = 0.0;

    for (i = 0; i < n; i++)
    {
        if (weight[i] > u)
            break;
        else
        {
            x[i] = 1.0;
            tp = tp + profit[i];
            u = u - weight[i];
        }
    }

    if (i < n)
        x[i] = u / weight[i];

        tp = tp + (x[i] * profit[i]);

    printf("\nThe result vector is:- \n");
    for (i = 0; i < n; i++)
        printf("object %d with weight %.2f and profit %.2f is %.2f used\n", i+1, weight[i], profit[i], x[i]);

    printf("\nMaximum profit is:- %.2f", tp);

}