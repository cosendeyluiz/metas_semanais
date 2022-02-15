#include <iostream>

using namespace std;

int main(){

    int N;
     cin >> N;

     int vet[N], mina[N];

     for(int i = 0; i < N; i++){
         cin >> vet[i];
     }
     for(int i = 0; i < N; i++){
         mina[i] = 0;
     }

 

     for(int i = 0; i < N; i++){
         if(i == 0){
             if(i+1 < N){
                 mina[0] = vet[0] + vet[1];
             }
             else{
                  mina[0] = vet[0];
               
             }
         }
         else if(i == N-1){
             mina[N-1] = vet[N-1] + vet[N-2];
         }
         else if(i != 0 && i != N-1){
             mina[i] = vet[i-1] + vet[i] + vet[i+1];
         }
         
     }

     for(int i = 0; i < N; i++){
           cout << mina[i] << endl;
     }


    return 0;
}