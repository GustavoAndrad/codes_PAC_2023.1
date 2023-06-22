/*EXERCICIOS DA LISTA 7 DE PAC
file:///C:/Users/vilag/Downloads/PAC%20-%20Lista%20de%20exerc%C3%ADcios%2008%20-%2020231.pdf
*/

#include <stdio.h>

/*================================================================*/
//Q.1
/*
void inicializa(int a[]){
    for(int i=0;i<11;i++){
        a[i]=0;
    }
}

void exibe(int a[]){
    printf("====NOTAS DA TURMA====");
    for(int i=0;i<11;i++){
        printf("Nota %d: %d\n",i,a[i]);
    }
}

int main(){
    int QntNotas[11];
    int nota;

    inicializa(QntNotas);

    printf("Informe a nota: ");
    scanf("%d",&nota);
    while(nota!=-1){
        for(int i=0;i<11;i++){
            if(nota==i){
                QntNotas[i]++;
            }
        }
        printf("Informe a nota: ");
        scanf("%d",&nota);
    }
    
    exibe(QntNotas);  
}*/

/*================================================================*/
//Q.2
/*
//ACHO QUE NESSA NÃO PRECISAVA DE STRUCT
void inicializa(float a[]){
    for(int i=0;i<10;i++){
        a[i]=0.0;
    }
}

void exibe(float a[]){
    printf("\n===MENORES SALARIOS===\n");
    for(int i=0;i<10;i++){
        printf("Dep.%d : %.2f\n", i+1,a[i]);
    }
}

struct _Funcionario {
    int cod_dept;
    float salario;
};
typedef struct _Funcionario func ;

int main(){
    float menorSal[10];
    func funcionarios[500];
    float sal;
    int cod;
    inicializa(menorSal);
    for(int i=0;i<500;i++){
        printf("Código do dept. do %dº funcionario: ", i+1);
        scanf("%d",&funcionarios[i].cod_dept);
        printf("Salario do %dº funcionario: ", i+1);
        scanf("%f",&funcionarios[i].salario);

        cod = funcionarios[i].cod_dept;
        sal = funcionarios[i].salario;

        if(menorSal[cod-1]==0 || sal<menorSal[cod-1]){
            menorSal[cod-1]=sal;
        }
    }
    exibe(menorSal);
}*/

/*================================================================*/
//Q.3
/*
struct _Clientes{
    int conta;
    float saldo;
};
typedef struct _Clientes clientes;

void exibe(clientes a[], int c, float media){
    for(int i=0;i<c;i++){
        printf("\n=====Cliente %d=====\n",i+1);
        printf("Número da conta: %d\n", a[i].conta);
        printf("Saldo na conta: %f\n", a[i].saldo);
        if(a[i].saldo<media){
            printf("Saldo menor que a média\n");
        } else if(a[i].saldo>media){
            printf("Saldo maior que a média\n");
        } else if(a[i].saldo==media){
            printf("Saldo igual a média\n");
        } 
    }
}

int main(){
    clientes pessoas[10573];
    int contador=0;
    float soma=0,media;
    do{
        printf("Nº da conta do cliente %d : ",contador+1);
        scanf("%d",&pessoas[contador].conta);

        if(pessoas[contador].conta==0){
            break;
        }

        printf("Saldo da conta do cliente %d : ",contador+1);
        scanf("%f",&pessoas[contador].saldo);
        contador++;
    } while(contador<=10572);

    for(int i=0;i<contador;i++){
        soma+=pessoas[i].saldo;
    }
    media=soma/contador;

    exibe(pessoas,contador,media);
}*/

/*================================================================*/
//Q.4
/*
//SE NÃO TIVER NGM NO DPT ELE INFORMA NaN
struct _Funcionarios{
    int mat;
    int codDpt;
    int idade;
};
typedef struct _Funcionarios func;

struct _MediaDepartamento{
    int codDpt;
    float media;
};
typedef struct _MediaDepartamento media;

void inicializa (media a[]){
    for(int i=0;i<11;i++){
        a[i].codDpt=0;
        a[i].media=0.0;
    }
}

void exibe(media a[]){
    printf("\n===IDADES MÉDIAS===");
    for(int i=0;i<11;i++){
        printf("\nCód Dept: %d",a[i].codDpt);
        printf("\nMédia de idade no dpt.: %.2f: ",a[i].media);
    }
}

int main(){
    func funcionarios[1000];
    media mediaIdadesDept[11];
    float somaIdades[11] = {0};
    int funcionariosDpt[11] = {0};
    inicializa(mediaIdadesDept);
    for(int i=0;i<1000;i++){
        printf("-----------------------");
        printf("\nMatricula do funcionário %d: ",i+1);
        scanf("%d",&funcionarios[i].mat);
        printf("\nCódigo DPT do funcionário %d: ",i+1);
        scanf("%d",&funcionarios[i].codDpt);
        printf("\nIdade do funcionário %d: ",i+1);
        scanf("%d",&funcionarios[i].idade);

        somaIdades[(funcionarios[i].codDpt)-10]+=funcionarios[i].idade;
        funcionariosDpt[(funcionarios[i].codDpt)-10]++;  
    }

    for(int i=0;i<11;i++){
        mediaIdadesDept[i].codDpt=i+10;
        mediaIdadesDept[i].media = (somaIdades[i])/(funcionariosDpt[i]);
    }

    exibe(mediaIdadesDept);

    return 0;
}*/

/*================================================================*/
//Q.5

struct _Produto{
    int cod;
    int preco;
    int estoque;
};
typedef struct _Produto produto;

void leitura(produto produtos[]){
     for(int i=0;i<1000;i++){
        printf("\nCódigo %d : ",i+1);
        scanf("%d",&produtos[i].cod);
        printf("\nPreço %d : ",i+1);
        scanf("%d",&(produtos[i].preco));
        printf("\nEstoque %d : ",i+1);
        scanf("%d",&(produtos[i].estoque));
    }
}

int busca(produto produtos[], int cod){
    for(int i=0;i<1000;i++){
        if(produtos[i].cod==cod){
            return i;
        }
    }
    return -1;
}

int main(){
    produto produtos[1000];
    int pesquisa=1;
    int codObtido;
    leitura(produtos);

    do{
        printf("\n===================");
        printf("\nCódigo a pesquisar: ");
        scanf("%d",&pesquisa);
        if(pesquisa==0){
            break;
        }
        codObtido = busca(produtos,pesquisa);
        if(codObtido==-1){
            printf("\nProduto inexistente");
        } else{
            printf("\nPreço do produto : %d ",produtos[codObtido].preco);
            printf("\nEstoque : %d ",produtos[codObtido].estoque);
        }
    } while(pesquisa!=0);

    return 0;
}