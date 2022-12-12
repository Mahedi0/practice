#include <stdio.h>

int main()
{
    int N, i;

    scanf("%d", &N);
    int arr[N];

    int * p = arr;
    for (i = 0; i < N; i++)
    {
        scanf("%d", p);
        p++;
    }

    p = arr;
    for (i = 0; i < N; i++)
    {
        printf("%d ", *p);
        p++;
    }

    return 0;

}
