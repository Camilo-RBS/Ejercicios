#include <iostream>

using namespace std;
float Promedio(int materia,float SumNota);

int main(){

   int i=1;
    int materia;
    float notas ;
    float SumNota;
    cout<<"ingrese la cantidad de materias"<<endl;
    cin>>materia;

   while(i<=materia){

cout<<"ingrese su nota de la materia :"<<i<<endl;
cin>>notas;
SumNota+=notas;

i++;
   }

 cout<<"su promedio es: "<<Promedio(materia, SumNota);
    return 0;
}

float Promedio(int materia,float SumNota){
    float prom;
    prom=SumNota/materia;

return prom;

}
