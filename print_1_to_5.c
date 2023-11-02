#include <stdio.h>
void fun(int i)
{
    if(i == 6 ) return;
    printf("%d, ", i);
    fun(i+1);
}
int main()
{
    fun(0);
    return 0;
}