#include <iostream>

using namespace std;

int main(){

    int vet[10], X, cont=0, posi[10], j=0;

    for(int i = 0; i < 10; i++){
        cin >> vet[i];
    }
    
    cin >> X;

    for(int i = 0; i < 10; i++){
        if(X == vet[i]){
            cont++;
            posi[j] = i;
            j++;
        }
    }
    if(cont == 0){
        cout << "Mia x" << endl;
        return 0;
    }
    cout << cont << endl;
    for(int i = 0; i < cont; i++){
        cout << posi[i] <<" ";
    }
    cout << endl;



    return 0;
}