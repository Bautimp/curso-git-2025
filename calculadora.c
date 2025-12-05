#include <stdio.h>

//Prototipo
int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);
int potencia(int a);
void mostrar_menu();

// Función para mostrar el menú de operaciones
void mostrar_menu(){
    printf("\n CALCULADORA \n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("5. Potencia\n");
    printf("6. Salir\n");
    printf("Seleccione una opcion: ");
}

int suma(int a, int b) {
    return(a+b);
}

int resta(int a, int b) {
    return(a-b);
}

int multiplicacion(int a, int b) {
    return(a*b);
}

int division(int a, int b){
    return(a/b);
}

int potencia(int a) {
    return(a*a);
}

int main() {
    int opcion = 0, num1, num2, resultado;
    while (opcion!=6) {
        mostrar_menu();
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                printf("Ingrese primer numero: ");
                scanf("%d", &num1);
                printf("Ingrese segundo numero: ");
                scanf("%d", &num2);
                resultado = suma(num1, num2);
                printf("Resultado: %d + %d = %d\n", num1, num2, resultado);
                break;
            case 2:
                printf("Ingrese primer numero: ");
                scanf("%d", &num1);
                printf("Ingrese segundo numero: ");
                scanf("%d", &num2);
                resultado = resta(num1, num2);
                printf("Resultado: %d - %d = %d\n", num1, num2, resultado);
                break;
            case 3:
                printf("Ingrese primer numero: ");
                scanf("%d", &num1);
                printf("Ingrese segundo numero: ");
                scanf("%d", &num2);
                resultado = multiplicacion(num1, num2);
                printf("Resultado: %d * %d = %d\n", num1, num2, resultado);
                break;

            case 4:
                printf("Ingrese primer numero: ");
                scanf("%d", &num1);
                printf("Ingrese segundo numero: ");
                scanf("%d", &num2);
                resultado = division(num1, num2);
                printf("Resultado: %d / %d = %d\n", num1, num2, resultado);
                break;

            case 5:
                printf("Ingrese un numero: ");
                scanf("%d", &num1);
                resultado = potencia(num1);
                printf("Resultado: %d * %d = %d\n", num1, num1, resultado);
                break;

            case 6:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion invalida. Intente nuevamente.\n");
                break;
        }
    }
    return 0;
}