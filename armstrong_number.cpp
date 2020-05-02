
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>





int len( char string[] ){

  int count = 0;

  while(1){

    if( string[count] == 0 ) break;
    else count++;

  }

  return count;
}

long power(int base, int power){
  
  long res = 1;

  for( int i = 0; i < power; i++ ){
    res *= base; 
  }

  return res;
}


long armstrong_number( char number[] ){

long pow = len(number), result = 0;

for(int i = 0; i < pow; i++){
  

  result = result + ( power( ( number[i] - 0 ), pow) );
  

}

if( atoi( number ) == result ) return true;

return false;

}


