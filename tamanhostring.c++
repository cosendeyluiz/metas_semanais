#include <iostream>
#include <string>


using namespace std;

int main(){

    char pala[50];
    int tam=0;
    
    cin >> pala;

    for(int i = 0; pala[i] != '\0'; i++){
        tam++;
     }
    
    cout << tam << endl;

    return 0;
}