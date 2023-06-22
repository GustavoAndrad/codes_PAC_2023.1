/*EXERCICIOS DA LISTA 9 DE PAC
*/

#include <stdio.h>

/*================================================================*/
//Q.1
/*
void valorVendas(int vendas[6][12], float preco[6]){
        int vendasAno;
        float valorVendasAno;
        for(int i=0;i<6;i++){
            vendasAno=0;
            valorVendasAno=0;
            for(int j=0;j<12;j++){
                vendasAno+=vendas[i][j];
            }
            valorVendasAno = vendasAno*preco[i];
            printf("ANO 20%d: %.2f\n",i+10, valorVendasAno);
        }
}
//TESTE
int main() {
    int vendas[6][12] = {
        {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100},
        {120, 180, 220, 200, 190, 280, 300, 240, 200, 180, 160, 150},
        {200, 250, 280, 300, 350, 400, 380, 350, 300, 250, 200, 180},
        {150, 200, 220, 240, 250, 280, 300, 270, 230, 200, 180, 160},
        {180, 240, 260, 300, 320, 350, 330, 300, 280, 240, 220, 200},
        {100, 150, 180, 200, 220, 250, 280, 250, 200, 150, 100, 80}
    };
    
    float preco[6] = {20000.0, 21000.0, 22000.0, 23000.0, 24000.0, 25000.0};
    
    valorVendas(vendas, preco);
    
    return 0;
}
*/

/*================================================================*/
//Q.2
/*

void analiseDeVendasAgosto(int qntVendidaTipo[4][31], float precoTipo[4][31]){
    float precoMesTipo=0;
    float precoDia=0;
    printf("PREÇO TOTAL DAS VENDAS DE CADA TIPO POR MÊS");
    for(int i=0;i<4;i++){
        precoMesTipo=0;
        for(int j=0;j<31;j++){
            precoMesTipo+=qntVendidaTipo[i][j]*precoTipo[i][j];
        }
        printf("Valor total do tipo %d no mês: %f\n",i+1,precoMesTipo);
    }

    printf("PREÇO TOTAL DAS VENDAS DE TODAS OS TIPOS CADA DIA");
    for(int j=0;j<31;j++){
        precoDia=0;
        for(int i=0;i<4;i++){
            precoDia+=qntVendidaTipo[i][j]*precoTipo[i][j];
        }
        printf("Valor total de todos os tipos no dia %d: %f\n",j+1,precoDia);
    }
}

//TESTE
int main() {
    int qntVendida[4][31] = {
        {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,10, 10, 10, 10, 10, 10, 10},
        {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,10, 10, 10, 10, 10, 10, 10},
        {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,10, 10, 10, 10, 10, 10, 10},
        {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,10, 10, 10, 10, 10, 10, 10}
    };
    
    float preco[4][31] = {
        {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,10, 10, 10, 10, 10, 10, 10},
        {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,10, 10, 10, 10, 10, 10, 10},
        {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,10, 10, 10, 10, 10, 10, 10},
        {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,10, 10, 10, 10, 10, 10, 10}
    };
    
    analiseDeVendasAgosto(qntVendida, preco);
    
    return 0;
}
*/

/*================================================================*/
//Q.3
/*
struct _Aluno{
    char nome[30];
    float nota1;
    float nota2;
};
typedef struct _Aluno aluno;

void exibe(aluno a[], float mediaTurma){
    float media;
    //printf("----Média da turma: %f", mediaTurma);
    for(int i=0;i<3;i++){
        media=((a[i].nota1)+(a[i].nota2))/2;
        printf("\n===\nAluno: %s",a[i].nome);
        printf("\nMédia: %f",media);
        if(media>mediaTurma){printf("\nAcima da média");} 
        else if(media<mediaTurma){printf("\nAbaixo da média");} 
        else {printf("\nNa média");} 
    }
}

int main(){
    aluno alunos[20];
    float notas,mediaTurma;
    for(int i=0;i<3;i++){
        printf("Aluno:  ");
        scanf("%s",&alunos[i].nome);
        printf("Nota 1:  ");
        scanf("%f",&alunos[i].nota1);
        printf("Nota 2:  ");
        scanf("%f",&alunos[i].nota2);

        notas += (alunos[i].nota1 + alunos[i].nota2);
    }
    mediaTurma=notas/6;
    exibe(alunos,mediaTurma);
    return 0;
}
*/

/*================================================================*/
//Q.4
/*
struct _Produto{
    float preco;
    int estoque;
};
typedef struct _Produto produto;

int leitura(char nomes[30][30], produto p[30]){
    int i;
    for(i=0;i<30;i++){
        printf("\n===\nProduto: ");
        scanf("%s",&nomes[i]);
        if(strcmp(nomes[i],"Fim")==0){
            break;
        }
        printf("Preço: ");
        scanf("%f", &p[i].preco);
        printf("Estoque: ");
        scanf("%d", &p[i].estoque);
    }
    return i;
}

int main(){
    char nomeProduto[30][30];
    produto produtos[30];
    char pesquisa[30];
    int qntProd = leitura(nomeProduto,produtos);

    printf("\n======\nCONSULTAS\n");
    printf("Produto:  ");
    scanf("%s",&pesquisa);
    while(strcmp(pesquisa,"Fim")!=0){
        if(qntProd==0){printf("Não há produtos ainda");break;}  

        for(int i=0;i<qntProd;i++){
            if(strcmp(nomeProduto[i],pesquisa)==0){
                printf("Preço: %f\n", produtos[i].preco);
                printf("Estoque: %d\n", produtos[i].estoque);
                break;
            } 
            if((strcmp(nomeProduto[i],pesquisa)!=0) && (i==qntProd-1)){
                printf("Produto não encontrado");
                break;
            }
        }
        printf("\nProduto:  ");
        scanf("%s",&pesquisa);
    }
    return 0;
}
*/

/*================================================================*/
//Q.5