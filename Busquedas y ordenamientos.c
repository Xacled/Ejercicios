// Busqueda Secuencial
#include <stdio.h>

int main() {
    int N; // Tamaño del arreglo
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &N);

    int A[N]; // Declaración del arreglo de tamaño N

    // Inicialización del arreglo A
    printf("Ingrese los elementos del arreglo:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int x; // Elemento a buscar
    printf("Ingrese el elemento a buscar: ");
    scanf("%d", &x);

    // Búsqueda secuencial
    for (int i = 0; i < N; i++) {
        if (A[i] == x) {
            printf("El elemento %d está en la posición %d.\n", x, i);
            return 0; // Se encontró el elemento, se sale del programa
        }
    }

    printf("Elemento no encontrado.\n");

    return 0;
}
// Busqueda lineal con centinela
#include <stdio.h>

int main() {
    int N; // Tamaño del arreglo
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &N);

    int A[N + 1]; // Declaración del arreglo de tamaño N + 1 (centinela)

    // Inicialización del arreglo A
    printf("Ingrese los elementos del arreglo:\n");
    for (int i = 1; i <= N; i++) {
        scanf("%d", &A[i]);
    }

    int x; // Elemento a buscar
    printf("Ingrese el elemento a buscar: ");
    scanf("%d", &x);

    int i = 1;

    // Búsqueda lineal con centinela
    A[0] = x; // Centinela
    while (A[i] != x) {
        i++;
    }

    if (i <= N) {
        printf("El elemento %d se encontró en la posición %d.\n", x, i);
    } else {
        printf("Elemento no encontrado.\n");
    }

    return 0;
}

// Busqueda binaria
#include <stdio.h>

int main() {
    int N; // Tamaño del arreglo
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &N);

    int nom[N]; // Declaración del arreglo de tamaño N

    // Inicialización del arreglo nom
    printf("Ingrese los elementos del arreglo (asegúrese de que estén ordenados):\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &nom[i]);
    }

    int x; // Elemento a buscar
    printf("Ingrese el elemento a buscar: ");
    scanf("%d", &x);

    int iz = 0;
    int de = N - 1;
    int cen;

    // Búsqueda binaria
    while (iz <= de) {
        cen = (iz + de) / 2;

        if (nom[cen] == x) {
            printf("El elemento buscado está en la posición %d.\n", cen);
            return 0; // Se encontró el elemento, se sale del programa
        } else if (nom[cen] < x) {
            iz = cen + 1;
        } else {
            de = cen - 1;
        }
    }

    printf("El elemento buscado no está en el arreglo.\n");

    return 0;
}
// Insercion directa
#include <stdio.h>

int main() {
    int n; // Tamaño del arreglo
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    int a[n]; // Declaración del arreglo de tamaño n

    // Carga del arreglo
    printf("Ingrese los elementos del arreglo:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Ordenación por inserción directa
    for (int i = 1; i < n; i++) {
        int x = a[i];
        int j = i - 1;

        while (j >= 0 && x < a[j]) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = x;
    }

    // Imprimir el arreglo ordenado
    printf("Arreglo ordenado por inserción directa:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
// Seleccion directa
#include <stdio.h>

int main() {
    int n; // Tamaño del arreglo
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    int a[n]; // Declaración del arreglo de tamaño n

    // Carga del arreglo
    printf("Ingrese los elementos del arreglo:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Ordenación por selección directa
    for (int i = 0; i < n - 1; i++) {
        int x = a[i];
        int max = i;

        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[max]) {
                max = j;
            }
        }

        a[max] = x;
    }

    // Imprimir el arreglo ordenado
    printf("Arreglo ordenado por selección directa:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
// Intercambio directo o de burbuja
#include <stdio.h>

void intercambioDirecto(int A[], int N) {
    int i, j, temp;
    int bandera = 1; // Bandera para verificar si se realizó algún intercambio

    while (bandera) {
        bandera = 0;
        for (i = 0; i < N - 1; i++) {
            if (A[i] < A[i + 1]) {
                // Intercambio de elementos si están en orden incorrecto
                temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
                bandera = 1; // Se realizó un intercambio, la bandera se mantiene en 1
            }
        }
    }
}

int main() {
    int N;

    // Ingrese el tamaño del arreglo
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &N);

    int A[N];

    // Ingrese los elementos del arreglo
    printf("Ingrese los elementos del arreglo:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Llamada a la función de intercambio directo
    intercambioDirecto(A, N);

    // Imprimir el arreglo ordenado
    printf("Arreglo ordenado de mayor a menor:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
