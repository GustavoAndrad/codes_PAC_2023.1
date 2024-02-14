#include <stdio.h>
//o "leia" e o "escreva" estão definidas nessa biblioteca
#include<math.h>

// Para compilar no terminal (tem que salvar antes)
// gcc -o eq2g eq2g.c -lm

int main()
{
    //real a,b,c,delta,x1,x2
    float a, b, c, delta, x1, x2;
    printf("Entre com os Coficietes da Equação do Segundo Grau:");
    //os %f significam que 3 floats serão lidos
    //leia(a,b,c)
    scanf("%f%f%f", &a,&b,&c);
    delta=b*b-4*a*c;
    if(delta>0)
    {
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        printf("As raízes são: %f e %f.",x1,x2);
    }
    if(delta==0)
    {
        x1=-b/(2*a);
        printf("Raiz única: %f",x1);
    }
    if(delta<0)
    {
        printf("Não existe raíz real!");
    }

    return 0; 
}