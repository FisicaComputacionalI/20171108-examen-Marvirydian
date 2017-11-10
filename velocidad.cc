//Programa que calcula la velocidad dando valores de distancia y tiempo.
//Marlene Guerra Santiago
//10 de Noviembre de 2017.

#include <iostream>
#include <string>
using namespace std;
int main (){
  float t=0;
  float d=0;
  float v=0;
  cout << "Ingresa la distancia" << endl;
  cin>>d;
  cout << "Ingresa el tiempo" << endl;
  cin>>t;
  v=d/t;
  cout << "La velocidad es:" << v << endl;
  return 0;
}
