#include <iostream>

using namespace std;

int main(){

    int X, j = 0;

    cin >> X;

    int div[X];
    
    for(int i = 1; i <= X; i++){
        if(X % i == 0){
          div[j] = i;
          j++;
        }
    }

    for(int i = 0; i < j; i++){
        cout << div[i] <<" ";
    }
    cout << endl;

    return 0;
}