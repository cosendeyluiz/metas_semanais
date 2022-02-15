#include <iostream>

using namespace std;

int main(){

    int over, P, Q;
    char C;

    cin >> over;
    cin >> P;
    cin >> C;
    cin >> Q;

    if(C == '+'){
       if(P+Q > over){
           cout << "OVERFLOW" << endl;
       }
       else{
           cout << "OK" << endl;
       }
    }
    else if(C == '*'){
       if(P*Q > over){
           cout << "OVERFLOW" << endl;
       }
       else{
           cout << "OK" << endl;
       }
    }
    

    return 0;
}