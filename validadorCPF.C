#include<stdio.h>
#define N 11

int ehValido(int cpf[]);

int main()
{
    // Type here the CPF that do you want to analyze.
    int cpf[N] = {1,2,3,4,5,6,7,8,9,0,0};

    if(ehValido(cpf))
        printf("Eh valido");
    else
        printf("Nah eh valido");

    return 0;
}

int ehValido(int cpf[]){

    int penultimo=0, ultimo=0;

    for(int i=0; i<9; i++){
        penultimo += (i+1)*cpf[i];
    }
    penultimo %= 11;
    penultimo %= 10;

    for(int i=1; i<10; i++){
        ultimo += i * cpf[i];
    }
    ultimo %= 11;
    ultimo %= 10;

    if (penultimo == cpf[9] && ultimo == cpf[10]){
        return 1;
    }else{
        return 0;
    }

}