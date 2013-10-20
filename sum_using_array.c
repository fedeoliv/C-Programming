#include <stdio.h>

double sum(double[], int);

int main() {
    double data[] = {2.0, 3.0, 5.0};

    printf("Output: %.1f", sum(data, sizeof(data)));
    return 0;
}

double sum(double data[], int size) {
    int i;
    double total = 0.0;

    for(i = 0; i < size; i++) {
        total += data[i];
    }

    return total;
}
