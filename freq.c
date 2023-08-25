#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
   printf("Enter the size of the array\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Array can't be empty\n");
        exit(0);
    }
    int a[n], count[n];
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        count[i]=0;
    }
    for (i = 0; i <n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i]==a[j])
                count[i]++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("Frequency of %d=%d\n",a[i],count[i]);
    }
}