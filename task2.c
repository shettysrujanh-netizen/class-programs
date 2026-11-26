#include <stdio.h>

void main()
{
    int a[100], n, i, key, flag = 0;

    printf("Enter the no. of elements\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched\n");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("Element found at position %d\n", i + 1);
    else
        printf("Element not found\n");
}