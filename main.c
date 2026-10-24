// #include <stdio.h>
// int main() {
//     printf("Hello, Git!\n");
//     return 0;
// }

#include <stdio.h>
int main() {
    int a,b;
    printf ("введите первое целое число: ");
    scanf ("%d", &a);
    printf ("введите второе целое число: ");
    scanf ("%d", &b);

    int diff = a - b;
    printf ("Разность чисел: %d\n", diff);
    
    return 0;
}
