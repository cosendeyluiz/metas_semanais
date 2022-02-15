#include <iostream>

using namespace std;

int main(){

    int N, ponto=0;

    cin >> N;
    char gab[N], teste[N];

    for(int i = 0; i < N; i++){
        cin >> gab[i];
    }
    for(int i = 0; i < N; i++){
        cin >> teste[i];
        if(teste[i] == gab[i]){
            ponto++;
        }
    }

    cout << ponto << endl;



    return 0;
}