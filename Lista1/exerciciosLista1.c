/*EXERCICIOS DA LISTA 1 DE PAC
https://cefetrjbr.sharepoint.com/sites/Section_138327/Documentos%20Compartilhados/General/Listas/PAC%20-%20Lista%20de%20exerci%CC%81cios%2002%20-%2020231.pdf?CT=1681694573163&OR=ItemsView
*/

#include <stdio.h>

/*================================================================*/

//Q.1
/*
int somaNumeros(int n1, int n2){
    int soma;
    soma=n1+n2;
    printf("A soma é: %d", soma);
    return soma;
}

int main(){
    int n1, n2;
    printf("Informe dois números para somar:");
    scanf("%d%d",&n1, &n2);
    somaNumeros(n1,n2);

}*/

/*================================================================*/

//Q.2
/*
int calculaMedia(int m1, int m2){
    int media;
    media = (m1+m2)/2;
    return media;
}

int main(){
    int m1, m2;
    printf("Informe a média de dois alunos:");
    scanf("%d%d",&m1, &m2);
    calculaMedia(m1,m2);
    printf("A média é %d", calculaMedia(m1,m2));

}*/

/*================================================================*/

//Q.3
/*
int ajuste20(int preco){
    return preco + (preco*0.20);
}

int main(){
    int preco;
    printf("Informe o preço:");
    scanf("%d",&preco);
    printf("O preço do produto com ajuste de 20%% é: %d", ajuste20(preco));
}*/

/*================================================================*/

//Q.4
/*
float calculaValor(float valLitro, float qntLitros){
    float valPagar = valLitro*qntLitros;
    printf("Valor a pagar é: R$%f\n", valPagar);
}

int main(){
    float valLitro, qntLitros;
    printf("Informe o valor do litro em R$: ");
    scanf("%f", &valLitro);
    printf("Informe a quantidade de litros desejado:");
    scanf("%f",&qntLitros);
    calculaValor(valLitro,qntLitros);

    return 0;
}*/

/*================================================================*/


//Q.5 ITEM A)
/*
int converteMinutos(int horas, int minutos){
    return minutos + (horas*60);
}

int main(){
    int horas, minutos;
    printf("Informe as horas:");
    scanf("%d", &horas);
    printf("Informe os minutos:");
    scanf("%d", &minutos);
    printf("O total disso em minutos é: %d", converteMinutos(horas, minutos));
    return 0;


}*/

/*================================================================*/


//Q.5 ITEM B)
/*int converteMinutos(int horas, int minutos){
    return minutos + (horas*60);
}

int calculaDiferencaMinutosHorarios( int hora1, int min1, int hora2, int min2){
    int previstoMinutos = converteMinutos(hora1, min1);
    int chegadaMinutos = converteMinutos(hora2, min2);

    return chegadaMinutos - previstoMinutos;
    //levando em consideração que o previsto ocorre antes da chegada (o voo atrasou)
}

int main(){
    int horasPrevisto, minutosPrevisto;
    int horasChegada, minutosChegada;

    printf("Informe as horas previstas da chegada do vôo:");
    scanf("%d", &horasPrevisto);
    printf("Informe os minutos previstos da chegada do vôo:");
    scanf("%d", &minutosPrevisto);

    printf("Informe as horas da chegada efetiva do vôo:");
    scanf("%d", &horasChegada);
    printf("Informe os minutos da chegada efetiva do vôo:");
    scanf("%d", &minutosChegada);

    printf("O vô se atrasou %d minutos", calculaDiferencaMinutosHorarios(horasPrevisto, minutosPrevisto, horasChegada, minutosChegada));


    return 0;
}*/

/*================================================================*/

//Q.6
/*
void transformaSemanas(int dias){
    int semanas = dias/7;
    int diasSobra = dias%7;
    printf("%d semanas e %d dias", semanas, diasSobra);
}

int main(){
    int dias;
    printf("Informe o número de dias decorridos do evento: ");
    scanf("%d",&dias);
    transformaSemanas(dias);
    return 0;
}*/

/*================================================================*/


//Q.7
/*
void informaQntCedulas(int valor){
    int n100,n50,n20,n10,n5,n2,n1;
    if(valor>=100){
        n100 = valor/100;
        //valor = valor-(n100*100);   JEITO MAIS LONGO
        valor = valor%100;
        printf("%d notas de 100 reais\n", n100);
    }
    if(valor>=50){
        n50= valor/50;
        valor=valor%50;
        printf("%d notas de 50 reais\n", n50);
    }
    if(valor>=20){
        n20= valor/20;
        valor=valor%20;
        printf("%d notas de 20 reais\n", n20);
    }
    if(valor>=10){
        n10= valor/10;
        valor=valor%10;
        printf("%d notas de 10 reais\n", n10);
    }
    if(valor>=5){
        n5= valor/5;
        valor=valor%5;
        printf("%d notas de 5 reais\n", n5);
    }
    if(valor>=2){
        n2= valor/2;
        valor=valor%2;
        printf("%d notas de 2 reais\n", n2);
    }
    if(valor>=1){
        n1= valor;
        printf("%d notas de 1 real\n", n1);
    }

}

int main(){
    int saque;
    printf("Valor do saque: R$");
    scanf("%d",&saque);
    informaQntCedulas(saque);
    return 0;
}
*/