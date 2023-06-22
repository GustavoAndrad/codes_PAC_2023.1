#include <stdio.h>


int mdc(int,int);
int mmc(int,int);
int VerificaPrimosEntreSi(int,int);

int main(){
    int a, b,c,inicioA;
    printf("Informe o valor do maior número:");
    scanf("%d", &a);
    inicioA=a;
    printf("Informe o valor do menor número:");
    scanf("%d", &b);

    c =  mdc(a,b);

    printf("\n==================================\n");
    printf("O mdc entre %d e %d é %d\n", inicioA,b,c);
    printf("O mmc entre %d e %d é %d\n", inicioA,b,mmc(a,b));

    if(VerificaPrimosEntreSi(a,b)){
        printf("%d e %d são primos entre si\n\n", a,b);
    } else{
        printf("%d e %d não são primos entre si\n\n",a,b);
    }


    return 0;
}



/*
int mdc(int,int) --------> PROTÓTIPO DA FUNÇAÕ (QUANDO A FUNÇÃO É DEFINIDA SÓ NO FINAL)
NÃO USAR ISSO EM C
*/

int mdc(int a, int b){

    int resto;
    while (b!=0){
        resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int mmc(int a, int b){
    return  (a*b)/mdc(a,b);
}

/*int VerificaPrimosEntreSi(int a,int b){
    int d  = mdc(a,b);
    if (d==1){
        return 1;
    }
    else{
        return 0;
    }
    
}*/

int VerificaPrimosEntreSi(int a,int b){
    if (mdc(a,b)==1);

}
//EXPRESSÕES BOOLEANAS EM C SÃO DESCRITAS COM 0 E 1 (NÚMEROS INTEIROS)