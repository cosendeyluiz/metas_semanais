#include <iostream>

using namespace std;


int main(){


    int N;

    cin >> N;
    int vet[N], dir, esq, resul[N];
    for(int i = 0; i < N; i++){
        cin >> vet[i];
    }
    for(int j = 0; j < N; j++){
        dir = 0;
        esq = 0;
        for(int i = j; vet[i] !=0  && dir<9; i++){
            dir++;
            if(i == N-1){
                dir = N+1;
                break;
            }
        }
        for(int k = j; vet[k] !=0 && esq<9; k--){
            esq++;
            if( k == 0 ){
                esq = N+1;
                break;
            }
        }
        resul[j] = dir; 
        if(dir == 0){
          resul[j] = esq; 
        }
        else if(dir > esq && esq !=0){
            resul[j] = esq; 
        }
    }
    
    for(int i = 0; i < N; i++){
        cout << resul[i] << " ";
    }

    cout << endl;


    return 0;


}