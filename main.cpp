#include <iostream>
#include "lib.h"
using namespace std; 

int main(){
  char a;
  cin>>a;
  if(funzione(a)==true){
    cout<<a;
  } else{ 
    cout<<"errore";
  }
  return 0;
}
