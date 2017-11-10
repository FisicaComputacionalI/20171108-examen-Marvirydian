//Programa del Diagrama traducido a lenguaje C++
//Marlene Guerra Santiago.
//10 de noviembre de 2017.
//El programa inicia con x=1 y verifica que cumpla x<=5, como es cierto, verifica que pueda dividirse entre 3.
//Dado que no es posible muestra el valor actual de x, luego le suma 2 sin mostrar el valor de x. Después de ésto x sigue siendo <=5 pero como ahora la división es posible imprime el valor de x y le suma 2, luego x>=5 entonces finaliza el programa.

#include <iostream>
#include <string>
using namespace std;
int main (){
  int x=1; 
  while(x<=5){ 
    if(x%3==0){ 
      x=x+2;
    }
    else{
      cout << x << endl;
      x = x+2;
    }
  }
  return 0;
}

//Los valores que mostrará serán 1 y 5.
