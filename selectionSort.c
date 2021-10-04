#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, temp;
    int *ptr;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter elements\n");
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j =i+1; j < n; j++)
        {
            if (ptr[i]>ptr[j])
            {
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
            
        }
        
    }
    printf("SORTED ARRAY:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",ptr[i]);
    }
    
    
    return 0;
}
