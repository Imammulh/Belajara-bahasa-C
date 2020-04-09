#include<stdio.h> 
int main() 
{ 
    int a = 100; 
    int *x; 
    x = (int *) &a; 
    a = 512; 
    x[0] = 1; 
    x[1] = 2; 
    printf("%d",a+1); 
    return 0; 
}
