#include <stdio.h>
#include <string.h>
 
int main()
{
    char Str[1000];
    int i;
 
    printf("Informe a String: ");
    scanf("%s", Str);
 
    for (i = 0; Str[i] != '\0'; ++i);
 
    printf("O comprimento da String informada e %d", i);
 
    return 0;
}