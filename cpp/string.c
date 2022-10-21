/*

'\0' -> null character 
char name[] = "harry"; //double quotes add '\0' at end
char name[] = {'h', 'a', 'r', 'r', 'y' '\0'}; //single quotes
scanf doesn't take whitespaces

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[52];
    gets(str);           //string input
    printf("%s\n", str); //print string
    puts(str);           //print string
}