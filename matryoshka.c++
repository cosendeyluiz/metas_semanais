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

    int N, tam=0;
    cin >> N;
    int bon[N], arr[N], troca[N];
    for(int i = 0; i < N; i++){
        cin >> bon[i];
        arr[i] = bon[i];
    }
    Quick(arr, 0,N-1);//vetor arrumado
 
    for(int i = 0; i < N; i++){
       if(bon[i] != arr[i]){
           troca[tam] = bon[i];
           tam++;
       }
    }
    if(tam==0){
        cout << "0"<< endl;
        return 0;
    }
    Quick(troca,0,tam-1);
    cout << tam << endl;
    for(int i = 0; i < tam; i++){
        cout << troca[i] << " ";
    }
    cout << endl;

    return 0;
}