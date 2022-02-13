#include <iostream>

using namespace std;

int fatorial(int n){

    if(n==0){ //caso base
        return 1;
    }

    return n*fatorial(n-1); //recursividade
}


int main(){

    int N;

    cin >> N;
    cout << fatorial(N) << endl;
    
    return 0;
}