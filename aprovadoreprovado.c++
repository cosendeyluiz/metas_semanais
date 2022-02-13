#include <iostream>

using namespace std;

int main(){

   float n1, n2, media=0;

   cin >> n1;
   cin >> n2;
 
media = ((2*n1)+(3*n2))/5;

if(media>=7){
    cout << "Aprovado" << endl;
}
   
else if(media < 3){
   cout << "Reprovado" << endl;
}
    
else if(media>=3 && media <7){
   cout << "Final" << endl;
}

    return 0;
}