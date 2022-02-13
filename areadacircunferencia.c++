#include <iostream>
#include <iomanip>

using namespace std;
using std::setprecision;

int main(){
    
    float R, area;

    cin >> R;

    area = R * 3.1416 * R;
    cout<<fixed<<setprecision(2);
    cout <<  area <<  endl;
    
    return 0;
}