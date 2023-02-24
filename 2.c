#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[]="Marwa Soliman 555 * #$";
    printf("%s\n",a);
    int count=0;
    for(int i=0;a[i] != '\0';i++)
        count++;
    printf("The number of digits is in the string is:%d",count);
    return 0;
}
