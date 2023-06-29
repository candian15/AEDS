#include <stdio.h>
#include <stdlib.h>

int countRectangles(int arr[], int n, int k) {
    int count = 0;

    // Iterar sobre todos os possíveis retângulos
    for (int i = 0; i < n; i++) {
        int sum = 0;

        // Somar os valores dentro do retângulo
        for (int j = i; j < n; j++) {
            sum += arr[j];

            // Se a soma é igual a k, incrementar o contador
            if (sum == k)
                count++;
        }
    }

    return count;
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int sequence[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &sequence[i]);
    }

    int result = countRectangles(sequence, N, K);
    printf("%d\n", result);

    return 0;
}
