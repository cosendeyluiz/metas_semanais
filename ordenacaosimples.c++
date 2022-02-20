#include <iostream>
using namespace std;

void Quick(int vetor[], int inicio, int fim){
   
   int pivo, aux, i, j, meio;
   
   i = inicio;
   j = fim;
   
   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];
   
   do{
      while (vetor[i] < pivo) i = i + 1;
      while (vetor[j] > pivo) j = j - 1;
      
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
      }
   }while(j > i);
   
   if(inicio < j) Quick(vetor, inicio, j);
   if(i < fim) Quick(vetor, i, fim);   

}

int main(){


    int N, aux;
    cin >> N;
    int vet[N];

    for(int i = 0; i < N; i++){
        cin >> vet[i];
    }

    Quick(vet, 0, N-1);

    for(int i = 0; i < N; i++){
        cout << vet[i] << " ";
    }
    cout << endl;
    



    return 0;
}