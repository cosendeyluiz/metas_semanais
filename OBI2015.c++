#include <iostream>

using namespace std;


int main(){

   int N, cont = 0;

   cin >> N;

   int vet[N];

   cin >> vet[0];
   cin >> vet[1];
   for(int i = 2; i < N; i++){
       cin >> vet[i];
       if(vet[i-2] == 1 && vet[i-1] == 0 && vet[i] == 0){
           cont++;
       }
   }

   cout << cont << endl;
   

    return 0;
}