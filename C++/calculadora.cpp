#include <iostream>

using namespace std;



float Suma(float Num1, float Num2){
float Sum;
Sum=Num1+Num2;

return Sum;


}

float Multiplicacion(float Num1, float Num2){
float Mul;
Mul=Num1*Num2;

return Mul;


}

float Division(float Num1, float Num2){
float Div;
Div=Num1/Num2;

return Div;


}

float Resta(float Num1, float Num2){
float Res;
Res=Num1-Num2;

return Res;


}



int main(){
int op;
float Num1,Num2;
cout<<" ingrese que operacion desea realizar "<<endl<<"1 (suma)"<<endl<<"2 (resta)"<<endl<<"3 (multiplicacion)"<<endl<<"4 (division)"<<endl;
cin>>op;
cout<<"ingrese el Num1"<<endl;
cin>>Num1;
cout<<"ingrese el Num2"<<endl;
cin>>Num2;

switch(op){
case 1:
cout<<"su suma es : "<< Suma(Num1,Num2);
break;
case 2:
cout<<"su suma es : "<< Resta(Num1,Num2);
break;
case 3:
cout<<"su suma es : "<< Multiplicacion(Num1,Num2);
break;
case 4:
cout<<"su suma es : "<< Division(Num1,Num2);
break;

default:
cout<<"no es valida la opcion ingresada";
break;





}

    return 0;
}
