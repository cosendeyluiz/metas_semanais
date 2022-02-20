#include <iostream>

using namespace std;

int main(){

    int N;
    cin >> N;
    int num[N], soma[10];
    
    for(int i = 0; i < 10; i++){
        soma[i] = 0;
    }

    
    for(int i = 0; i < N; i++){
        cin >> num[i];
    }


    for(int i = 0; i < N && num[i] > 0; i++){
         while(num[i] > 0){
             //cout << num[i]%10 << endl;
             if(num[i]%10 == 0)
               soma[0] += 1;
             else if(num[i]%10 == 1)
               soma[1] += 1;
             else if(num[i]%10 == 2)
               soma[2] += 1;
             else if(num[i]%10 == 3)
               soma[3] += 1;
             else if(num[i]%10 == 4)
               soma[4] += 1;
             else if(num[i]%10 == 5)
               soma[5] += 1;
             else if(num[i]%10 == 6)
               soma[6] += 1;
             else if(num[i]%10 == 7)
               soma[7] += 1;
             else if(num[i]%10 == 8)
               soma[8] += 1;
             else if(num[i]%10 == 9)
               soma[9] += 1;        
             num[i] = num[i]/10;
         }
    }

    for(int i = 0; i < 10; i++){
         cout << i << " - " << soma[i] << endl;
    }
    



    return 0;
}