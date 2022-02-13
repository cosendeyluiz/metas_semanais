#include <iostream>

using namespace std;

int main(){

    int vet[10], x;

    for(int i = 0; i < 10; i++){
         cin >> vet[i];
    }
    cin >> x;
     for(int i = 0; i < 10; i++){
         if(vet[i] == x){
             cout << "SIM" << endl;
             return 0;
         }
    }
    cout << "NAO" << endl;

    return 0;
}