#include <iostream>

using namespace std;

int main(){
   
    int N, j = 0;

    cin >> N;

    int vet[N], soma[N], maior;

    for(int i = 0; i < N; i++){
        soma[i] = 0;
    }
    
    cin >> vet[0];
    soma[j] = soma[j] + 1;
    for(int i = 1; i < N; i++){
      cin >> vet[i]; 
      if(vet[i-1] == vet[i]){
        soma[j] = soma[j] + 1;
      }    
      else{
          j++;
          soma[j] = soma[j] + 1;
      }
    }
 
    maior = soma[0];
    for(int i = 1; i <= j; i++){
       if(maior < soma[i]){
           maior = soma[i];
       }
    }

    cout << maior << endl;

    
    return 0;
}
