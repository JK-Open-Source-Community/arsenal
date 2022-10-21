/*

structure - each member has its own storage location
union     - single shared memory location

single shared memory location is equal to size of its largest data member

can use only one member at a time 
*/

#include <stdio.h>
#include <string.h>

union Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    union Student s1;
    s1.id = 1;
    s1.marks = 45;
    s1.fav_char = 'a';
    strcpy(s1.name, "Adi"); // this will be intact all other members will be changed

    printf("%d\n", s1.id);
    printf("%d\n", s1.marks);
    printf("%c\n", s1.fav_char);
    printf("%s\n", s1.name);
}