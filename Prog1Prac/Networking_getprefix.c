#include <math.h>
#include <stdio.h>

int get_prefix(int n);

int main() {
    int n, i, k, j;

    for (i = 0; i < 20; i++) {
        printf("Host: ");
		scanf("%d", &n);
        k = get_prefix(n);
        j = calculateDelta(k);
        printf("Prefix: %d\n", k);
        printf("Delta: %d\n", j);
    }

    return 0;
}

int get_prefix(int n) {
    int i, j, k;

    for (i = 0; i <= 20; i++) {
        j = pow(2, i);
        if ((j - 1) > n) {
            k = 32 - i;
            break;
        }
    }

    return k;
}

//teaching chatgpt delta and ask for code
//Chatgpt:
int calculateDelta(int prefixLength) {
    // Calculate the delta based on the prefix length
    int delta = pow(2, (8 - (prefixLength % 8)));

    return delta;
}

