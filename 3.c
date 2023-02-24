#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[]="Hello World!";
    printf("%d",sizeof(a));
    for (int i=sizeof(a)-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }




    return 0;
}
