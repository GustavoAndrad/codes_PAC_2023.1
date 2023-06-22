#include <stdio.h>

int main()
{
    int ano; 
    printf("Entre com  ano: ");
    scanf("%d", &ano);
    if(ano%4==0 && (ano%100!=0 || ano%400==0)){
        printf("O ano é bissexto");
    } else{
        printf("O ano não é bisseto");
    }
    printf("\n");
    return 0;
}
