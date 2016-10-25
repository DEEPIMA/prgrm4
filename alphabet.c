#include<stdio.h>
void main()
{
    char s;
    printf("\n given character is");
    scanf("%c",&s);
    if(s>='a'&&s<='z'||s>='A'&&s<='Z')
    {
        printf("\n9an alphabet");
    }
    else
    {
        printf("\n not an alphabet");
    }
return 0;
}
