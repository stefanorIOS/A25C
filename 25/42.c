/*Escribir el algoritmo necesario para calcular y mostrar el cuadrado de un n�mero
ingresado por teclado. El n�mero debe ser mayor que cero, en caso de error que aparezca
el mensaje "ERROR, el n�mero debe ser mayor que cero". El programa termina su
ejecuci�n cuando se ingresa un 0.

#include <stdio.h>
#include <math.h>

void main(){
    int n;

    do{
        printf("Ingrese un numero:");
        scanf("%d",&n);
        fflush(stdin);
        if(n>0){
            printf("El cuadrado de su numero es: <%d>\n",n*n);
        }
        else if (n<0){
            printf("ERROR, el numero debe ser mayor que cero\n");
        }

    }while(n!=0);

    printf("Fin del programa. Usted ingreso un 0.");

}
*/



