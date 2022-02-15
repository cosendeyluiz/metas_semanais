#include <iostream>

using namespace std;

int main(){

    int N, soma = 0;

    cin >> N;

    int qua[N][N], lin[N], col[N], dia[2];

    for(int i = 0; i < N; i++){
        lin[i] = 0;
        col[i] = 0;
        dia[0] = 0;
        dia[1] = 0;
      for(int j = 0; j < N; j++){
      cin >> qua[i][j];
      }
    }
    for(int i = 0; i < N; i++){
       for(int j = 0; j < N; j++){
          lin[i] += qua[i][j]; //soma linha
          col[i] += qua[j][i]; //soma coluna
       }
       dia[0] += qua[i][i];//diagonal principal
       dia[1] += qua[i][N-1-i];//diagonal secundaria
    }
    for(int i = 0; i < N; i++){
        if(lin[i] == col[i] && dia[0] == lin[i] && col[i] == dia[1]){
          soma = lin[i];
          continue;
        }
        else{
            soma = -1;
            break;
        }
    }

    cout << soma << endl;
    return 0;
}