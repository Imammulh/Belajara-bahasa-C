//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//#define N 5
//int main(){
//	char s[N];
//	
//}

/* Example using strcmp by TechOnTheNet.com */

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    /* Create a place to store our results */
    int result;

    /* Create two arrays to hold our data */
    char example1[50];
    char example2[50];

    /* Copy two strings into our data arrays */
    strcpy(example1, "C programming at TechOnTheNet.com");
    strcpy(example2, "C programming is fun");

    /* Compare the two strings provided */
    result = strcmp(example1, example2);
	printf("%d", result);
    /* If the two strings are the same say so */
    if (result == 0) printf("Strings are the same\n");

    /* If the first string is less than the second say so
     (This is because the 'a' in the word 'at' is less than
     the 'i' in the word 'is' */
    if (result < 0) printf("Second string is less than the first\n");

    return 0;
}
