/*EXERCICIOS DA LISTA 2 DE PAC
https://cefetrjbr.sharepoint.com/sites/Section_138327/Documentos%20Compartilhados/General/Listas/PAC%20-%20Lista%20de%20exerci%CC%81cios%2002%20-%2020231.pdf?CT=1681694573163&OR=ItemsView
*/

#include <stdio.h>

/*================================================================*/

//Q.1
/*
int calcula_soma(int n1, int n2, int n3){
    return n1+n2+n3;
}

void calcula_media(int n1, int n2, int n3){
    float media = (n1+n2+n3)/3;
    printf("A média desses números é %1.f\n", media);
}

int main(){
    int n1,n2,n3;
    printf("Informe 3 números inteiros: \n");
    scanf("%d%d%d", &n1,&n2,&n3);
    printf("A soma desses números é: %d\n", calcula_soma(n1,n2,n3));
    calcula_media(n1,n2,n3);
    return 0;
}*/

/*================================================================*/

//Q.2
/*
int calcula_soma(int n1, int n2, int n3){
    int soma = n1+n2+n3;
    printf("A média desses números é %d\n", soma);
    return soma;
}

void calcula_media(int n1, int n2, int n3){
    float media = (n1+n2+n3)/3;
    printf("A média desses números é %1.f\n", media);
}

int main(){
    int n1,n2,n3;
    printf("Informe 3 números inteiros: \n");
    scanf("%d%d%d", &n1,&n2,&n3);
    calcula_soma(n1,n2,n3);
    calcula_media(n1,n2,n3);
    return 0;
}*/

/*================================================================*/

//Q.3
/*
int calcula_soma(int n1, int n2, int n3){
    int soma = n1+n2+n3;
    printf("A média desses números é %d\n", soma);
    return soma;
}

void calcula_media(int n1, int n2, int n3){
    float media = calcula_soma(n1,n2,n3)/3;
    printf("A média desses números é %1.f\n", media);
}

int main(){
    int n1,n2,n3;
    printf("Informe 3 números inteiros: \n");
    scanf("%d%d%d", &n1,&n2,&n3);
    calcula_media(n1,n2,n3);
    return 0;
}
*/

/*================================================================*/

//Q.4
/*
float calcula_media(float soma){
    printf("A média desses números é: %1.f\n",soma/3);
}

int le_calcula_soma(){
    int n1,n2,n3;
    printf("Informe 3 números inteiros: \n");
    scanf("%d%d%d", &n1,&n2,&n3);
    calcula_media(n1+n2+n3);
    return n1+n2+n3;
}

int main(){
    
    printf("A soma desses valores é %d", le_calcula_soma());
    return 0;
}*/

/*================================================================*/

//Q.5
/*
float calculaMediaAritimetica(float val1, float val2){
    return (val1+val2)/2;
}

int main(){
    int mat;
    float trab1, trab2, prova1, prova2;
    float somaProvas, somaTrbalhos;
    printf("Informe a matícula: ");
    scanf("%d",&mat);
    printf("\nInforme a nota da prova 1: ");
    scanf("%f",&prova1);
    printf("\nInforme a nota do trabalho 1: ");
    scanf("%f",&trab1);
    printf("\nInforme a nota da prova 2: ");
    scanf("%f",&prova2);
    printf("\nInforme a nota do trabalho 2: ");
    scanf("%f",&trab2);

    printf("\nMatícula: %d", mat);
    printf("\n Média dos trabalhos: %.2f", calculaMediaAritimetica(trab1, trab2));
    printf("\n Média das provas: %.2f", calculaMediaAritimetica(prova1, prova2));

    somaProvas= prova1+prova2;
    somaTrbalhos= trab1+trab2;
    printf("\n Média geral: %.2f", calculaMediaAritimetica(somaProvas, somaTrbalhos));


    return 0;
}*/

/*================================================================*/


//Q.6
/*
#include <math.h>

int distanciaPontos(int x1,int  y1, int x2, int y2){
    int distancia;
    distancia = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return distancia;
}

int main(){
    int v1x,v1y;
    int v2x,v2y;
    int v3x,v3y;
    int perimetro, distancia1_2, distancia2_3, distancia3_1;
    printf("Informe o 1º vértice do triângulo: \n");
    scanf("%d%d", &v1x,&v1y);
    printf("Informe o 2º vértice do triângulo: \n");
    scanf("%d%d", &v2x,&v2y);
    printf("Informe o 3º vértice do triângulo: \n");
    scanf("%d%d", &v3x,&v3y);

    distancia1_2= distanciaPontos(v1x,v1y,v2x,v2y);
    distancia2_3= distanciaPontos(v2x,v2y,v3x,v3y);
    distancia3_1= distanciaPontos(v3x,v3y, v1x, v1y);
    perimetro= distancia1_2+distancia2_3+distancia3_1;
    printf("Perímetro aproximado do triângulo: %d", perimetro);
    return 0;
}
*/

/*================================================================*/

//Q.7
/*
#include <math.h>
float calculaVolumeCaixa(float a, float b, float c){
    return a* b* c;
}
float calculaVolumeCilindro(float r, float h){
    return 3.14*h*pow(r,2);
}
float calculaVolumeCaixaComCilindro(float volCaixa,float volCilindro){
    return volCaixa - volCilindro;
}

int main(){
    float a,b,c,h,r;
    float volumeCaixa, volumeCilindro, volumeCaixaComCilindro;
    printf("Informe as dimensões (a,b,c) da caixa: \n");
    scanf("%f%f%f",&a,&b,&c);
    printf("Informe o raio(r) e a altura(h) do cilindro: \n");
    scanf("%f%f",&r,&h);

    volumeCaixa = calculaVolumeCaixa(a,b,c);
    volumeCilindro =  calculaVolumeCilindro(r,h);
    volumeCaixaComCilindro = calculaVolumeCaixaComCilindro(volumeCaixa, volumeCilindro);

    printf("\nVolume da caixa: %.2f", volumeCaixa);
    printf("\nVolume do Cilindro: %.2f", volumeCilindro);
    printf("\nVolume da caixa com um furo cilindrico: %.2f", volumeCaixaComCilindro);
    return 0;
}
*/