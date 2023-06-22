/*EXERCICIOS DA LISTA 6 DE PAC
https://teams.microsoft.com/_#/pdf/viewer/teamsSdk/https:~2F~2Fcefetrjbr.sharepoint.com~2Fsites~2FSection_138327~2FDocumentos%20Compartilhados~2FGeneral~2FListas~2FPAC%20-%20Lista%20de%20exerc%C3%ADcios%2006%20-%2020231.pdf?threadId=19:XkOdziQrW-UwboGwWNK-SPCKdHjWAPa13VJ-bP82uAg1@thread.tacv2&subEntityId=%257B%2522viewParams%2522%253A%2522id%253D%25252Fsites%25252FSection%25255F138327%25252FDocumentos%252520Compartilhados%25252FGeneral%25252FListas%2526listurl%253D%25252Fsites%25252FSection%25255F138327%25252FDocumentos%252520Compartilhados%2526viewid%253D6c1b93d3%25252D89b9%25252D445c%25252D91f0%25252Dee17148a7ab0%2522%257D&baseUrl=https:~2F~2Fcefetrjbr.sharepoint.com~2Fsites~2FSection_138327&fileId=9fba6bec-6605-4b31-97de-affdb3b1c98d&ctx=openFilePreview&viewerAction=view
*/

#include <stdio.h>

/*================================================================*/
//Q.1
/*
int leValidaTipo(){
    int tipo=-1;
    while(tipo!=1 && tipo!=2 && tipo!=3){
        printf("\nInforme o tipo do produto (1-fruta, 2-legume, 3-verdura):\n");
        scanf("%d",&tipo);
        if(tipo==1 ||tipo==2||tipo==3){
            return tipo;
        }
        printf("Código inválido!\n");
    }
}

void descobreQuantidades(int qt, int* qntP1, int* qntP2, int* qntP3){
    int tipo;
    for(int i=0;i<qt;i++){
        tipo = leValidaTipo();
        if(tipo==1){
            (*qntP1)++;
        } 
        else if(tipo==2){
            (*qntP2)++;
        }
        else if(tipo==3){
            (*qntP3)++;
        }
    }
}

//FIZ ALEM DO QUE DEVIA
int main(){
    int p1=0,p2=0,p3=0;
    descobreQuantidades(3,&p1,&p2,&p3);
    printf("%d, %d, %d", p1,p2,p3);
    return 0;
}*/

/*================================================================*/
//Q.2/
/*
void tipoProd(char tipo, int* qntN, int* qntI){
    if(tipo=='N'){
        printf("\nDescrição: é nacional");
        (*qntN)++;
    } else if(tipo=='I'){
        printf("\nDescrição: é importado");
        (*qntI)++;
    } else{
        printf("\nTipo Invalido");
    }
}

int main(){
    char tipo;
    int cod,estoque,preco;
    int valEstouque;
    int qntN=0,qntI=0;
    for(int i=0;i<3;i++){
        printf("\nTipo: ");
        scanf(" %c",&tipo);
        printf("\nCodigo: ");
        scanf("%d",&cod);
        printf("\nEstoque: ");
        scanf("%d",&estoque);
        printf("\nPreco: ");
        scanf("%d",&preco);

        printf("\n====PRODUTO======\n");
        valEstouque= preco*estoque;
        printf("\nCódigo: %d",cod);
        tipoProd(tipo,&qntN,&qntI);
        printf("\nValor em estoque: %d", valEstouque);
        printf("\n==================\n");
    }
    printf("Produtos Nacionais: %d",qntN);
    printf("\nProdutos Importados: %d",qntI);
    return 0;
}*/

/*================================================================*/
//Q.3
/*
void umDepartamento(int qnt, int* maiorSal, int* funcSal){
    int mat,sal;
    (*maiorSal)=-1;
    (*funcSal)=-1;
    for(int i=0;i<qnt;i++){
        printf("\nMatricula: ");
        scanf("%d",&mat);
        printf("\nSalario: ");
        scanf("%d",&sal);

        if(i==0){
            (*maiorSal)=sal;
            (*funcSal)=1;
        } else if((*maiorSal)==sal){
            (*funcSal)++;
        } else if((*maiorSal)<sal){
            (*maiorSal)=sal;
            (*funcSal)=1;
        }
    }
}

int main(){
    int maiorSalario;
    int funcionaroSalario;
    int codDpt, qntFunc;
        
    printf("\nCódigo: ");
    scanf("%d",&codDpt);
    while(codDpt!=0){
        printf("\nFuncionários: ");
        scanf("%d",&qntFunc);
        printf("\n====DEPARTAMENTO %d(funcionarios)=====\n",codDpt);
        umDepartamento(qntFunc,&maiorSalario,&funcionaroSalario);
        printf("\n====DEPARTAMENTO %d=====\n",codDpt);
        printf("Maior salário: R$ %d\n",maiorSalario);
        printf("Funcionários que recebem: %d\n",funcionaroSalario);
        
        printf("\nCódigo: ");
        scanf("%d",&codDpt);
    }
    return 0;
}*/

/*================================================================*/
//Q.4
/*
int leValidaClassificacao(){
    int classificacao=-1;
    while(classificacao>4 || classificacao<1){
        printf("\nClassicação: ");
        scanf("%d",&classificacao);
        if (classificacao<=4 && classificacao>=1)
        {
            return classificacao;
        }
        printf("\nClassificação inválida");
    }
}

void classe(int classificao, int* qntMin, int* qntMax){
    if(classificao==1){
        (*qntMax)= 120;
        (*qntMin)= 100;
    } else if( classificao==2){
        (*qntMax)=180;
        (*qntMin)=150;
    }else if( classificao==3){
        (*qntMax)=250;
        (*qntMin)=200;
    }else if( classificao==4){
        (*qntMax)=300;
        (*qntMin)=250;        
    }
}

int main(){
    int cod,classificacao;
    int qntMin,qntMax;
    for(int i=0;i<100;i++){
        printf("\nCódigo: ");
        scanf("%d",&cod);
        classificacao = leValidaClassificacao();
        classe(classificacao,&qntMin,&qntMax);

        printf("\n====PEÇA=====\n");
        printf("Código: %d\n", cod);
        printf("Minimo em estoque: %d\n", qntMin);
        printf("Maximo em estoque: %d\n", qntMax);
    }
    return 0;
}*/