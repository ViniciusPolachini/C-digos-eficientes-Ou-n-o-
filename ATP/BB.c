#include <stdio.h>
#include <stdlib.h>

void inserir(int *V, int dim){
    int i;
    for(i=0;i<10;i++) scanf("%d", (V+i ));
}


void bublesort(int *V, int dim){
    int i, j, aux;
    for(i=0;i<dim;i++)
        for(j=0;j<dim-i;j++)
            if(*(V+j+1)<*(V+j)){
                aux = *(V+j);
                *(V+j) = *(V+j+1);
                *(V+j+1) = aux;
            }
}

void ShellSort (int *Str, int Dim) {
int i, j, x, salto;

for (salto=Dim/2; salto>0; salto /=2){
   for (i = salto; i < Dim; i++) {
     x = *(Str+i);
     for (j=i; j >= salto && x < *(Str+j-salto); j=j-salto)
        *(Str+j) = *(Str+j-salto);
     *(Str+j) = x;
   }
}
}
void mergeSort(int *V, int dim){
    int i,j, meio=dim/2;

}

void visualizar(int *V, int dim){
    int i;
    for(i=0; i<dim; i++)
        printf("[%d] = %d\n", i, *(V+i));
            system("pause");
}

int BB(int *V, int chave, int ini, int fim){
    int meio;
    while(ini<=fim){
        meio=(fim-ini)/2;
        if(*(V+meio)==chave) return(1);
        else if(*(V+meio)<chave) fim=meio-1;
        else ini=meio+1;
    }
    return(0);
}

void mergeMaior(int *V, int ini, int fim, int *M){
        int meio=(fim+ini)/2;
        printf("%d|%d|%d\n", ini, meio, fim);
        if((fim-ini)>=2){
            mergeMaior(V, meio, fim, M);
            mergeMaior(V, ini, meio-1, M);
        }
        else{
            if(*(V+ini) >=  *M) *M = *(V+ini);
            if(*(V+fim) >= *M) *M = *(V+fim);
        }

}

int main(){
    int V[10], chave, aux, M=0;
    printf("Insira valores para V:\n");
    inserir(V, 10);
    visualizar(V, 10);
    mergeMaior(V, 0, 9, &M);
    printf("O maior é %d", M);
}
