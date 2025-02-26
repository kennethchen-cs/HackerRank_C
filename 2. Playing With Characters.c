#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch, s[99], sen[99];
    
    scanf("%c", &ch);
    printf("%c\n", ch);
    
    scanf("\n");
    
    scanf("%[^\n]%*c", s);
    printf("%s\n", s);
    
    scanf("%[^\n]%*c", sen);
    printf("%s\n", sen);
    
    return 0;
}
