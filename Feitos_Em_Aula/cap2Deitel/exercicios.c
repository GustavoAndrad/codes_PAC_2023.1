#include <stdio.h>

//OPERADORES ARITIMÉTICOS 2.16 DEITEL
/*int main(){
    int n1, n2;
    printf("Informe 2 números: ");
    scanf("%d%d", &n1, &n2);

    printf("\na some a %d\n", n1+n2);
    printf("o produto é é %d\n", n1*n2);
    printf("a diferença é %d\n", n1-n2);
    printf("o quociente é %d\n", n1/n2);
    printf("o resto da divisão é %d", n1%n2);
    return 0;
}*/


//USOS DE PRINTF 2.17 DEITEL
/*int main(){
    int n1=1, n2=2,n3=3, n4=4;
    printf("1, 2, 3, 4\n");

    printf("%d, %d, %d, %d\n", n1, n2, n2, n4);

    printf("1, ");
    printf("2, ");
    printf("3, ");
    printf("4\n");

    return 0;
}*/

//TESTE CONDICIONAL SIMPLES 2.18 DEITEL
/*int main(){
    int n1, n2;
    printf("Informe 2 números: ");
    scanf("%d%d", &n1,&n2);
    if(n1>n2){
        printf("\n%d é maior", n1);
    }
    if(n2>n1){
        printf("\n%d é maior", n2);
    }
    if(n1==n2){
        printf("\nEstes números são iguais");
    }
    return 0;
}*/


//SELEÇÃO E ARITIMÉTICA 2.19 DEITEL
/*int main(){
    int n1, n2, n3;
    printf("Informe 3 números DIFERENTES: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    if(n1!=n2 && n2!=n3){
        printf("\na soma a %d\n", n1+n2+n3);
        printf("a média é %d\n", (n1+n2+n3)/3);
        printf("o produto é %d\n", n1*n2*n3);
        //menor
        if(n1<n2 && n1<n3)
            printf("O menor é %d\n", n1);
        if(n2<n1 && n2<n3)
            printf("O menor é %d\n", n2);
        if(n3<n1 && n3<n2)
            printf("O menor é %d\n", n3);
        //maior
        if(n1>n2 && n1>n3)
            printf("O maior é %d", n1);
        if(n2>n1 && n2>n3)
            printf("O maior é %d", n2);
        if(n3>n1 && n3>n2)
            printf("O maior é %d", n3);
    }

    if(n1==n2 || n2==n3 || n1==n3){
        printf("\nVALORES NÃO PODEM SER IGUAIS");
    }
    
    return 0;
}*/


//CARACTERES DO COMPUTADOR 2.29 DEITEL
/*int main(){
    int n1, n2;
    printf("%d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d", 'A', ' ','B','C','a','b','c','0','12','$','*');
    return 0;
}*/


//DIVIDOR DE NÚMEROS DE 5 DÍGITOS
/*int main(){
    int n;
    printf("Número de 5 digítos: \n");
    scanf("%d",&n);

    printf("%d   ", n/10000);
    printf("%d   ", (n/1000)%10);
    printf("%d   ", (n/100)%10);
    printf("%d   ", (n/10)%10);
    printf("%d   ", n%10);

    return 0;
}*/

//TABELA DE QUADRADO E CUBO COM PRINT 2.31 DEITEL
int main(){

    printf("Número      Quadrado        Cubo\n");
    printf("\n\n");
    printf("0           0               0\n");
    printf("1           1               1\n");
    printf("2           4               8\n");
    printf("3           9               27\n");
    printf("4           16              64\n");
    printf("5           25              125\n");
    printf("6           36              216\n");
    printf("7           49              343\n");
    printf("8           64              512\n");
    printf("9           81              729\n");
    printf("10          100             1000\n");
    
    return 0;
}