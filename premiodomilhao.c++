#include <iostream>

using namespace std;

int main(){

    int N, A, soma = 0, num;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> A;
        soma = soma + A;
        if(soma >= 1000000){
          num = i + 1;
          break;
        }
    }
    for(int i = num; i < N; i++){
        cin >> A;
    }

    cout << num << endl;
    
    return 0;
}