#include <stdio.h>
struct mhs {
char nim[10];
int usia, jenkel;
float ip;
};
typedef struct mhs MHS;
int main() {
MHS dt={"G64189250",19,1,2.75};
MHS *p=&dt;
printf("%s %.2f\n", dt.nim, dt.ip);
printf("%s %.2f\n", p->nim, p->ip);
return 0;
}
