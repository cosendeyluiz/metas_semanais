#include <stack>
#include <iostream>

using namespace std;
/*ESTOU TENDO PROBLEMAS PARA EXIBIR AS MENSAGENS SO NO FIM DE LER TODOS OS N's */
int Hanoi(int N, stack<int> ori,  stack<int> dest,  stack<int> temp){ 
    int cont=0;
   
      
      for(int i=1;i<=N;i++){
        ori.push(i);
      }
      while((!ori.empty())){
           if(ori.top()==1){//ori para dest
            dest.push(ori.top());
            //cout << "HELOO";
            cont++;
            ori.pop();
                if(!temp.empty()){//temp para dest
                    for(int i=1; i <= N-1; i++){
                        dest.push(temp.top());
                        cont++;
                        temp.pop();
                    }
                }
            }
            else{//ori para temp
                temp.push(ori.top());
                cont++;
                ori.pop();
            }
      }
   
   return cont;
}
int main(){
    stack<int> ori;
    stack<int> dest;
    stack<int> temp;
    int N, disco=0, i=1, tam=0, vet[1000];
    cin >> N;
    
    while(N!=0){
       vet[tam] = Hanoi(N, ori, dest, temp);
       tam++;
       cin >> N;
    }
    for(int j =0; j < tam; j++){
        cout << "Teste "<< j+1 << endl << vet[j] <<endl; 
    }
 
    return 0;
}
  

  /*procedimento Hanoi(N, Orig, Dest, Temp)
     se N = 1 então
        mover o menor disco do pino Orig para o pino Dest;
     senão
        Hanoi(N-1, Orig, Temp, Dest);
        mover o N-ésimo menor disco do pino Orig para o pino Dest;
        Hanoi(N-1, Temp, Dest, Orig);
     fim-se
  fim
*/

