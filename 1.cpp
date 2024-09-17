#include <cstdlib>
#include <iostream.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int opciones;
    int opciones1;
    int opciones2;
    int opciones3;
    int opciones4;
    opciones=0;
    opciones1=500;
    opciones2=300;
    opciones3=180;
    opciones4=48;
    
    system("color 4a"); 
    cout<<"   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"   |||||||||||||||||||||||Pizzeria Luis C.A|||||||||||||||||||||||||"<<endl;
    cout<<"   ||||||||||||||||||||||||||Bienvenidos||||||||||||||||||||||||||||"<<endl;
    cout<<"   |||||||||||||||||||||Creado por: Luis Maita||||||||||||||||||||||"<<endl;
    cout<<"   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl<<endl;
    cout<<"Bienvenidos A Pizza Luis:"<<endl<<endl;
    cout<<"Tamano de Pizza"<<endl<<endl;
    cout<<"1. Grande BS. 500"<<endl<<endl;
    cout<<"2. Mediana BS. 300"<<endl<<endl;
    cout<<"3. Pequena BS. 180"<<endl<<endl;
    cout<<"Tamano de Pizza:"<<endl;
    cin>>opciones;
    cout<<"----------------------------------------------------------------"<<endl<<endl;
   
    switch (opciones){
           
           case 1:cout<<"1. Margarita"<<endl<<endl;
                  cout<<"2. Pollo Y Queso "<<endl<<endl;
                  cout<<"3. Pernil"<<endl<<endl;
                  cout<<"4. Cuatro Sabores"<<endl<<endl;
                  cout<<"Tipo de Pizza:"<<endl;
                  cin>>opciones1;
                  cout<<"----------------------------------------------------------------"<<endl<<endl;
                  break;
           case 2:cout<<"1. Margarita"<<endl<<endl;
                  cout<<"2. Pollo Y Queso "<<endl<<endl;
                  cout<<"3. Pernil"<<endl<<endl;
                  cout<<"4. Cuatro Sabores"<<endl<<endl;
                  cout<<"Tipo de Pizza:"<<endl;
                  cin>>opciones2;
                  cout<<"----------------------------------------------------------------"<<endl<<endl;
                  break;    
           case 3:cout<<"1. Margarita"<<endl<<endl;
                  cout<<"2. Pollo Y Queso "<<endl<<endl;
                  cout<<"3. Pernil"<<endl<<endl;
                  cout<<"4. Cuatro Sabores"<<endl<<endl;
                  cout<<"Tipo de Pizza:"<<endl;
                  cin>>opciones3;
                  cout<<"----------------------------------------------------------------"<<endl<<endl;
                  break;
     
}
    cout<<"Ingrediente Adicionales"<<endl<<endl; 
    cout<<"1. Maiz BS. 48"<<endl<<endl;
    cout<<"2. Queso Mozzarela BS. 48"<<endl<<endl;
    cout<<"3. Salchichon BS. 48"<<endl<<endl;
    cout<<"4. Pimenton BS. 48"<<endl<<endl;
    cout<<"Tipo de Ingrediente:"<<endl;
    cin>>opciones4;
    cout<<"Garcias Por Su Compra"<<endl;
    cout<<"----------------------------------------------------------------"<<endl<<endl;
    
        
    system("PAUSE");
    return EXIT_SUCCESS;
}
