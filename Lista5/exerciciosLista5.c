/*EXERCICIOS DA LISTA 5 DE PAC
https://teams.microsoft.com/_?culture=pt-br&country=br#/pdf/viewer/teamsSdk/https:~2F~2Fcefetrjbr.sharepoint.com~2Fsites~2FSection_138327~2FDocumentos%20Compartilhados~2FGeneral~2FListas~2FPAC%20-%20Lista%20de%20exerc%C3%ADcios%2005%20-%2020231.pdf?threadId=19:XkOdziQrW-UwboGwWNK-SPCKdHjWAPa13VJ-bP82uAg1@thread.tacv2&subEntityId=%257B%2522viewParams%2522%253A%2522id%253D%25252Fsites%25252FSection%25255F138327%25252FDocumentos%252520Compartilhados%25252FGeneral%25252FListas%2526listurl%253D%25252Fsites%25252FSection%25255F138327%25252FDocumentos%252520Compartilhados%2526viewid%253D6c1b93d3%25252D89b9%25252D445c%25252D91f0%25252Dee17148a7ab0%2522%257D&baseUrl=https:~2F~2Fcefetrjbr.sharepoint.com~2Fsites~2FSection_138327&fileId=f866305e-25df-4a8a-bc5a-4fa3b56b61ad&ctx=openFilePreview&viewerAction=view
*/

#include <stdio.h>

/*================================================================*/

//Q.1
/*
float calculaValorPago(float valMB, int  qntDow){

    int tamDow;
    float valPagar, valTotPagar;
    for(int i=0;i<qntDow;i++){
            printf("Tamanho do download %d :  ", i+1);
            scanf("%d", &tamDow);
            valPagar = tamDow*valMB;
            valTotPagar+=valPagar;
    }

    printf("Usuário acima deve pagar: R$%.2f", valTotPagar);
    return valTotPagar;

}

int main(){
    float valMB;
    int controleFluxo=1;
    int qntDow=0;
    int divisorMedia=0;
    float valUsuario, somaTodosValores=0, mediaValores=0;
    float maiorValor=-1;
    printf("Valor por MByte: ");
    scanf("%f", &valMB);

    while(controleFluxo!=0){

        printf("\n\nQuantidade de downloads: ");
        scanf("%d", &qntDow);

        if(qntDow==0){
            controleFluxo=0;
        } 
        else{
            valUsuario = calculaValorPago(valMB,qntDow);
            divisorMedia++;
            somaTodosValores+=valUsuario;

            if(controleFluxo==1){
                maiorValor=valUsuario;
            }else{
                if(valUsuario>maiorValor){
                    maiorValor=valUsuario;
                }
            }
        }

    }
        if(maiorValor!=-1){
            mediaValores=somaTodosValores/divisorMedia;
            printf("\nMédia dos valores: %.2f", mediaValores);
            printf("\nMaior valor: %f", maiorValor);            
        }
        else{
            printf("\nNão houve vendas!");
        }
    return 0;
}
*/

/*================================================================*/

//Q.2
/*
int calculaAreaQuadrado(){
    int lado;
    printf("Lado do Quadrado: ");
    scanf("%d",&lado);
    return lado*lado;
}

int calculaAreaRetangulo(){
    int base, altura;
    printf("Base do Retângulo: ");
    scanf("%d",&base);
    printf("Altura do Retângulo: ");
    scanf("%d",&altura);
    return base*altura;
}

int calculaAreaTriangulo(){
    int base, altura;
    printf("Base do Triângulo: ");
    scanf("%d",&base);
    printf("Altura do Triângulo: ");
    scanf("%d",&altura);
    return (base*altura)/2;
}

int calculaAreaTrapezio(){
    int baseMaior, baseMenor, altura;
    printf("Base Maior do Trapézio: ");
    scanf("%d",&baseMaior);
    printf("Base Menor do Trapézio: ");
    scanf("%d",&baseMenor);
    printf("Altura do Trapézio: ");
    scanf("%d",&altura);
    return  ((baseMaior + baseMenor)* altura)/2;
}

int menu(){
    int opcao;
    printf("\n1 - QUADRADO\n2 - RETÂNGULO\n3 - TRIÂNGULO\n4 - TRAPÉZIO\n5 - FIM\n");
    scanf("%d",&opcao);
    return opcao;
}

int main(){
    int controlaFluxo=1;
    int opcao=-1;
    int areaExibida;

    while(controlaFluxo!=0){
        opcao = menu();
        if(opcao==5){
            controlaFluxo=0;
        } else{
            if(opcao==1){
                areaExibida = calculaAreaQuadrado();
            }else if(opcao==2){
                areaExibida = calculaAreaRetangulo();
            }else if(opcao==3){
                areaExibida = calculaAreaTriangulo();
            }else if(opcao==4){
                areaExibida = calculaAreaTrapezio();
            }

            printf("\nÁrea do elemento acima: %d", areaExibida);
            
        }
    }
}
*/

/*================================================================*/

//Q.3
/*
float calculaValPeri(int qntPeri){
    float precoPeri,precoTotal;
    for(int i=0;i<qntPeri;i++){
        printf("\nPreco do periférico %d: ",i+1);
            scanf("%f",&precoPeri);
            precoTotal+=precoPeri;
    }
    return precoTotal;
}

int main(){
    int controleFluxo=1;
    int cod, qntPeri;
    float valPagar, precoModelo;
    int vendasSemPeri=0;
    float somaVendas=0, denominadorMediaVendas=0, mediaVendas; 

    while(controleFluxo!=0){
        printf("\n\nCódigo: ");
        scanf("%d",&cod);
        if(cod==0)
        {
            controleFluxo=0;
        } 
        else
        {
            printf("\nPreço do Modelo: ");
            scanf("%f",&precoModelo);
            printf("\nQnt. de periféricos: ");
            scanf("%d",&qntPeri);

            valPagar=precoModelo+calculaValPeri(qntPeri);
            printf("Valor da venda: R$%.2f", valPagar);

            //TESTES E ATRIBUIÇÕES PARA O FINAL
            if(qntPeri==0)
            {
                vendasSemPeri++;
            }

            somaVendas+=valPagar;
            denominadorMediaVendas++;
        }
    }

    printf("Vendas sem perifèrico: %d", vendasSemPeri);

    mediaVendas=somaVendas/denominadorMediaVendas;
    printf("\nMédia das vendas: %.2f", mediaVendas);

    return 0;
}*/

/*================================================================*/