#include<stdio.h>

int main()
{
    int d = 0, j=0, k=0;
    scanf("%d", &d);
    for (int i = d; i > 1; i--)
    {
        j = i;
        while (j % 5 == 0)
        {
            j = j / 5;
            k++;
        }
    }
    printf("%d", k);
}