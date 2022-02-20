#include <iostream>

using namespace std;

int main(){
   int N;

   cin >> N;
   int tab[N][N], somacol[N], somalin[N], maior=0;
   for(int i = 0; i < N; i++){
       for(int j = 0; j < N; j++){
           cin >> tab[i][j];
    
       }
       somacol[i] = 0;
       somalin[i] = 0;
   }
   
   for(int i = 0; i < N; i++){
       for(int j = 0; j < N; j++){
           somacol[i] += tab[i][j];
           somalin[i] += tab[j][i];
       }  
   }

   for(int i = 0; i < N; i++){
       for(int j = 0; j < N; j++){
          if(maior < (somacol[i] + somalin[j] - 2*tab[i][j])){
              maior = somacol[i] + somalin[j] - 2*tab[i][j];
          }
       }
   }

   cout << maior << endl;

    return 0;
}