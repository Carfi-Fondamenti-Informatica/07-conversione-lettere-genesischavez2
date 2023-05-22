#include "lib.h"

bool funzione(char &a){
  if((a>=97 and a<=122) or (a>=65 and a<=90)){
    if(a>=97 and a<=122){
      a=a-32;
    }else if(a>=65 and a<=90){
      a=a+32;
    }  
  return true;
  }else{ 
    return false;
  }
}
