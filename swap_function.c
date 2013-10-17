#include <stdio.h>

//Example of using of swap functions in pointer

void swap(int* i, int* j) {
    int aux = *i;
    *i = *j;
    *j = aux;
}

int main() {
    int m , n;

    scanf("%d %d", &m, &n);

    swap(&m, &n);
    printf("Outputs: %d %d\n", m, n);
}
