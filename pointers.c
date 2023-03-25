#include<stdio.h>
int main()
{
    int a = 25;
    int *x = &a; // int* -> int a address store karta hai
    // VVIP -> *x = 7; // a is changed.
    int **y = &x; // int** -> int* ka address store karta hai
    int ***z = &y;
    printf("%d\n", a);
    printf("%d\n", *x); // %p se address print hota hai
    printf("%d\n", **y);
    printf("%d\n", ***z);
    return 0;
}