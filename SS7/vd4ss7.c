#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	printf("please enter a character :");
	scanf ("%c",&c);
	if (c>= 'a' && c<= 'z')
	printf("lowercase charactor = %c", c + 'a' - 'a');
	else
	printf ("character entered is = %c",c);
	
	return 0;
}
