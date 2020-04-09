#include <stdio.h>
int main() {
char ch, c[5]; int i;
scanf("%c",&ch);
for (i=0; i<5; i++) scanf("%c", &c[i]);
printf("%c", c[1]);
for (i=0; i<5; i++) printf("%c", c[i]);
printf("\n");
return 0;
}

