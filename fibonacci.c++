#include <iostream>

using namespace std;

int fibonacci(int n){

    if(n == 0 || n == 1){ //base
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2); //recursividade
}


int main(){

    int N;

    cin >> N;

    cout << fibonacci(N) << endl;
    return 0;
}