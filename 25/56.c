#include <stdio.h>
//#include <conio.h>
/*56- Escribir un programa que solicite el ingreso de un n�mero entero y a partir de �l, genere
una cuenta regresiva hasta cero, mostrando los sucesivos valores hasta el �ltimo luego
de lo cual emitir� un pitido.*/

void main(){
    int n;
    printf("Ingrese un numero para su cuenta regresiva\n");
    scanf("%d",&n);
    fflush(stdin);
    //system("cls");

    for(int i=n; i>0;i--){

        printf("%d\n",i);

    }
    printf("Fin del programa");




}
