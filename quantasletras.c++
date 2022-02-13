#include <iostream>
#include <string>

using namespace std;

int main(){

    char pala[50], C;
    int cont = 0;

    cin >> pala;
    cin >> C;

    for(int i = 0; pala[i] != '\0'; i++){
        if(pala[i] == C){
            cont++;
        }
    }
    cout << cont << endl;

    return 0;
}