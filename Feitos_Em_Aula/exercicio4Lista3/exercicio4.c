#include <stdio.h> 

int validaMat(int mat){
    int AA,S,NN;
    AA = mat/1000;
    S=(mat-(AA*1000))/100;
    NN=mat%100;
    //NN=(mat-(AA*1000)-(S*100));


    if(AA<10 || AA>22 || S<1 || S>2 || NN<01 || NN>90){
        return 0;
    } else{
        return 1;        
    }  

        printf("%d, %d, %d", AA, S, NN);
}

int main(){
    int mat;
    printf("Qual a matícula do aluno?");
    scanf("%d",&mat);

    if(validaMat(mat)==1){
        printf("MATÍCULA VÁLIDA\n");
    }
    else{
        printf("MATRÍCULA INVÁLIDA\n");
    }


}