                                       //Examen  Parcial Programacion c++
//Creado por Nicole Guagua
                                                                                 //Curso: 1ro "B" Tics

// Programa que determina si un numero es mayor, igual que  otro numero
#include<iostream>
using namespace std;
int main()
{
        //Se declaran las variables
  float n,g;
  cout<<"Por favor Usuario Ingrese el primero numero en n : "; cin>>n;
  cout<<"Por favor Usuario Ingrese el segundo numero  en  g  : "; cin>>g;

                                                     // se declara if para confirmar si el numero es igual o no
  if(n==g)
  {
     cout<<"Son numeros Iguales "<<endl;
  }
  else                                          //  el if  comprueba los menores de las cantidades
  {
     if(n<g)
     {
	     cout<<n<<" Es Menor que "<<g<<"\n";
    }
     else
     {
       cout<<g<<" Es Menor que  "<<n<<"\n";
     }
  }

return (0);
}

                                //Se Finaliza el Programa 
				//muchas gracias

