#include <iostream>
#include <cstring>

using namespace std;


int main(){

    char riso[50], vogais[50]; 
    int cont=0, i =0;

   cin >> riso;

   for(int i =0; i <  strlen(riso); i++){
        if(riso[i] == 'a' || riso[i] == 'e' || riso[i] == 'i' || riso[i] == 'o' || riso[i] == 'u'){
            vogais[cont] = riso[i];
            cont++;
        }
   }

    for(int i = 0, j = cont-1; i < cont && j>=0; i++, j--){
        if(vogais[i] == vogais[j]){
            continue;
        }
        else{
            cout << "N" << endl;
            return 0;
        }
    }
    
    cout << "S" << endl;
    

    return 0;
}