#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int const N= 3;
void ordinamento(a[],int N);
int main(int argc, char** argv) {
    
    int i,j;
    
    int min;

    struct s_alunno {
    
        
        char cognome [10];
        char nome [10];
        int classe,eta;
        
    };
    struct s_alunno cambio; 
    struct s_alunno a[N];
    
    for(i=0;i<N;i++){
        
        printf("nome: ",a[i].nome);
        scanf("%s",&a[i].nome);
        printf("conome: ",a[i].cognome);
        scanf("%s",&a[i].cognome);
        printf("classe: ",a[i].classe);
        scanf("%d",&a[i].classe);
        printf("eta: ",a[i].eta);
        scanf("%d",&a[i].eta);
    }
    ordinamento(a[],int N);
    
    for(i=0;i<N;i++){
        
     printf("nome:  %s  cognome:  %s    classe:  %d  eta:   %d",a[i].nome,a[i].cognome,a[i].classe,a[i].eta);
        
    }
  void ordinamento(a[],int N){
      struct s_alunno scambio;
    for(i=0;i<N;i++){
        
        min=i;
        
        for(j=i+1;j<N;j++){
            
            if(strcmp(a[j].cognome,a[min].cognome)<0){
                min=j;
            }
        }
        
      if(j!=min){
          scambio=a[min];
          a[min]=a[j];
          a[j]=scambio;
      }  
    }
    }
    return (EXIT_SUCCESS);
}
  