#include <stdio.h>
#include <stdlib.h>

int main()
{ char a[100];
    printf("Enter a string:\n");
    gets(a);
    printf("Input a character to search\n");
    char x;
    scanf("%c",&x);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==x){
            printf("'%c' is found at index %d",x,i);
            break;
        }
    }
    return 0;
}
