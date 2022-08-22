#include <stdio.h>
void main()
{
 char line[80];
 scanf("%[ ABCDEFGHIJKLMNOPQRSTUVWXYZ]",line);
 printf ("%s",line); // thử Hải thì ra H
}