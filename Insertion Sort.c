#include<stdio.h>
int main()
{
    int a[100], b, i, j, temp;
    printf("Enter the size of array=");
    scanf("%d",&b);
    printf("Enter the array elements=");
    for(i=0;i<b;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=b-1;i++)
    {
        for(j=i;j>0&&a[j-1]>a[j];j--)
        {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
        }
    }
    printf("Numbers are sorted by insertion sort=");
    for(i=0;i<b;i++)
    {
        printf(" %d  ",a[i]);
    }
    return 0;
}