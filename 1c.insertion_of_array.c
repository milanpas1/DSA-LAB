#include <stdio.h>

void ins(int arr[], int a, int b, int n);

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5, a, b;

    printf("The array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("enter the number to be inserted: \n");
    scanf("%d", &a);
    printf("enter the position to be inserted in: \n");
    scanf("%d", &b);

    if (b > n)
    {
        printf("invalid position\n");
    }
    else
    {
        ins(arr, a, b - 1, n);
    }

    return 0;
}

void ins(int arr[], int a, int b, int n)
{
    int i;
    for (i = n; i >= b; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[b] = a;
    n++;

    printf("new array is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}