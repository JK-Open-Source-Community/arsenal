/*

any file open in C program needs to be closed 

- fopen()
- fclose()
- fscanf()

*/

#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    char myString[34] = "this content \nhello world";

    /* READ
    ptr = fopen("sample.txt", "r");
    fscanf(ptr, "%s", myString); // whitespaces will not be read
    printf("%s\n", myString);
    */

    /* WRITE */
    ptr = fopen("sample.txt", "w");
    fprintf(ptr, "%s", myString);

    /* APPEND
    ptr = fopen("sample.txt", "a");
    fprintf(ptr, "%s", myString);
   */

    fclose(ptr);
    return 0;
}
