// Example program
#include <iostream>
#include <string>
using namespace std;
void morse(string str);
int main()
{
string frase;
cout<<" Codigo Morse\n" <<endl;
cout<<"Ingrese una frase: ";
getline(cin,frase);
morse(frase);
}
void morse(string str){
cout<<"\n La frase escrita en codigo morse es: ";

for (char c: str){
    switch (c) 
    { case 65: case 97:
    cout<<" .- ";// A o a
    break;
    break;
      case 66: case 98:
               
               std::cout<< " -... ";//B
               break;
          
           case 67: case 99:
               
               std::cout<< " -.-. ";//C
               break;
          
           case 68: case 100:
          
               std::cout<< " -.. ";//D
               break;
          
           case 69: case 101:
          
               std::cout<< " . ";//E
               break;
          
           case 70: case 102:
          
               std::cout<< " ..-. ";//F
               break;
          
           case 71: case 103:
          
               std::cout<< " --. ";//G
               break;
          
           case 72: case 104:
          
               std::cout<< " .... ";//H
               break;
          
           case 73: case 105:
          
               std::cout<< " .. ";//I
               break;
          
           case 74: case 106:
          
               std::cout<< " .--- ";//J
               break;
          
           case 75: case 107:
          
               std::cout<< " -.- ";//K
               break;
          
           case 76: case 108:
          
               std::cout<< " .-.. ";//
               break;
          
           case 77: case 109:
          
               std::cout<< " -- ";//M
               break;
          
           case 78: case 110:
          
               std::cout<< " -. ";//N
               break;
          
           case 79: case 111:
          
               std::cout<< " --- ";//O
               break;
          
           case 80: case 112:
          
               std::cout<< " .--. ";//P 
               break;
          
           case 81: case 113:
          
               std::cout<< " --.- ";//Q
               break;
          
           case 82: case 114:
          
               std::cout<< " .-. ";//R
               break;
          
           case 83: case 115:
          
               std::cout<< " ... ";//S
               break;
          
           case 84: case 116:
          
               std::cout<< " - ";//T
               break;
          
           case 85: case 117:
          
               std::cout<< " .-. ";//U
               break;
          
           case 86: case 118:
          
               std::cout<< " ...- ";//V
               break;
          
           case 87: case 119:
          
               std::cout<< " .-- ";//W
               break;
          
           case 88: case 120:
          
               std::cout<< " -..- ";//X
               break;
          
           case 89: case 121:
          
               std::cout<< " -.-- ";//Y
               break;
                           
           case 90: case 122:
          
               std::cout<< " --.. ";//Z
               break;
               
           case 32:
           std::cout<<" / ";
               break;
               
            default:
               break;
          
       }
    }
    
    
    }
