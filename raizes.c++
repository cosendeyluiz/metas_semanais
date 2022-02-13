#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

int main(){

    int N;

    cin >> N;
    float vet[N];
    for(int i = 0; i < N; i++){
        cin >> vet[i];
    }
    for(int i = 0; i < N; i++){
      cout<<fixed<<setprecision(4);
      cout <<  sqrt(vet[i]) <<  endl;
    }

    return 0;
}