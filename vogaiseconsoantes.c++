#include <iostream>
#include <string>

using namespace std;


int main(){

   char S[50];

    cin >> S;



    cout << "Vogais: ";
    for(int i = 0; S[i] != '\0'; i++){
        if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u'){
           cout << S[i];
        }
    }
    cout << endl;
    cout << "Consoantes: ";
    for(int i = 0; S[i] != '\0'; i++){
        if(S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u'){
           cout << S[i];
        }
    }
    cout << endl;

    return 0;
}