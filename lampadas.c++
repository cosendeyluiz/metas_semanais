#include <iostream>

using namespace std;

int main(){

    int N, I, A=0, B=0;

    cin >> N;
     
    for(int i = 0; i < N; i++){
        cin >> I;
        if(I == 1){
          if(A==0){
              A = 1;//ACESA
          }
          else{
              A=0; //APAGADA
          }
        }
        else if(I == 2){
          if(A==0){
              A = 1;//ACESA
          }
          else{
              A=0; //APAGADA
          }
          if(B==0){
              B = 1;//ACESA
          }
          else{
              B=0; //APAGADA
          }
        }
    }
    cout << A << endl;
    cout << B << endl;
    return 0;
}