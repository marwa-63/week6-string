#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[]="good morning";
    for(int i=0;a[i]!= '\0';i++){
        a[i]=a[i]-32;
    printf("%c",a[i]);
    }

    return 0;
}
