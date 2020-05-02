int reverse_number(int number){

  int rev;

  while( number !=  0 ){

    rev = rev * 10;
    rev = rev +  ( number % 10 ) ;
    number = number / 10;

  }

  return rev;

}


bool palindrome(int number){

  if( number == reverse_number(number) ) return true;

  return false;

}

