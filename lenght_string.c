#include <stdio.h>
int fun(char arr[], int i)
{
    if (arr[i] == '\0')
        return 0;
    int l = fun(arr, i + 1);
    return l + 1;
}
int main()
{
    char a[] = "black_rose";
    int len = fun(a, 0);
    printf("%d\n", len);
    return 0;
}