#include <iostream> 
#include <cstdlib> 
#include <cmath>

  using namespace std;
float add (float x, float y)
{   
    float soma;
    soma= x + y;     
    return soma; }

float sub(float x, float y){
    float subtrac;     
    subtrac= x - y;     
    return subtrac; } 
    
float multi (float x, float y){     
    float multip;     
    multip= x * y;     
    return multip; }  
    
float divi(float x, float y){
    float divis;       
    divis= x / y;       
    return divis; }
      
int main (){
    float num, num2;     
    int op = 7;          
    cout << "*****UEMG - Unidade Passos*****\n**********Calculadora**********\n\n"; 
    while (op != 0) {     
        cout << "Escolha uma Operacao: " << endl;    
        cout << "\n(1) para Soma: ";     
        cout << "\n(2) para Subtracao: ";     
        cout << "\n(3) para multiplicao: ";      
        cout << "\n(4) para divisao: ";     
        cout << "\n(5) para potencia: ";     
        cout << "\n(6) para raiz: " << endl;     
        cin >> op;     

        if (op < 1 || op > 6){                         
            cout << "*****UEMG - Unidade Passos*****\n**********Calculadora**********\n\n";            
            cout << "NUMERO INVALIDO!\n" << endl;            
            cout << "escolha uma operacao valida: \n";             
            cout << "\n(1) para Soma: ";
            cout << "\n(2) para Subtracao: ";             
            cout << "\n(3) para multiplicao: ";              
            cout << "\n(4) para divisao: ";             
            cout << "\n(5) para potencia: ";             
            cout << "\n(6) para raiz: " << endl;            
            cin >> op;     }

switch(op) {  

    case 1:        
        cout << "Calculadora\n\n";        
        cout << "\nDigite os numeros: \n";        
        cin >> num >> num2;        
        cout << "Resultado é: " << add (num, num2) << endl;        
        break;
        
    case 2:        
        cout << "Calculadora\n\n";        
        cout << "\nDigite os numeros: \n";        
        cin >> num >> num2;        
        cout << "Resultado é: " << sub (num, num2)<< endl;
        break;                
    
    case 3:        
        cout << "Calculadora\n\n";             
        cout << "\nDigite os numeros: \n";
        cin >> num >> num2;
        cout << "Resultado é: " << multi (num, num2)<< endl;        
        break;                
    
    case 4:        
        cout << "Calculadora\n\n";        
        cout << "\nDigite os numeros: \n";        
        cin >> num >> num2;        
        cout << "Resultado é: " << divi (num, num2)<< endl;        
        break;                
    
    case 5:        
        cout << "Calculadora\n\n";        
        cout << "\nDigite os numeros: \n";        
        cin >> num;       
        cout << "Elevado a: ";        
        cin >> num2;        
        cout << "Resultado é: " << pow(num, num2)<< endl;        
        break;                
    
    case 6:        
        cout << "Calculadora\n\n";        
        cout << "\nDigite um numero: \n";        
        cin >> num;        
        cout << "Resultado é: " << sqrt(num)<< endl;        
        break; 
    default:        
        cout << "Calculadora\n\n";        
        cout << "NUMERO INVALIDO!\n" << endl;        
        cout << "Escolha uma operacao valida. \n";         
        } 
cout << "\n\n";

                }
                
system("pause"); 

} 
