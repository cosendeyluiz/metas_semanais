#include <iostream>

using namespace std;

int main(){

    int vet[10];

    for(int i = 0; i<10; i++){
        cin >> vet[i];
    }
    for(int i = 9; i>=0; i--){
        cout << vet[i] << endl;
    }
    
 
    return 0;
}