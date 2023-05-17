#include <iostream>
using namespace std;
int main() {
    int i = 0;
    
    while (i < 5) {
        int gol=7;

        cout << "El valor del contador es: " <<endl;
        cin>>gol;
        if(gol==7){

            cout<<"ganaste";
            i=34;
        }else if (gol < 7){

            cout<<"segui intentando";
          
        }
             i++;
    }

   
    
    return 0;
}