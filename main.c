#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i, n, j;
    scanf("%d",&n);
    int arr[1000000]={0};
    for(i=2; i<=n; i++)
    {
        if(arr[i]!=1)
        {
            for(int j=i+i; j<=n; j+=i)
            {
                arr[j]=1;
            }
        }
    }

    for(i=2; i<=n; i++)
    {
        if(arr[i]!=1)
            printf("%d ",i);
    }

    return 0;
}
