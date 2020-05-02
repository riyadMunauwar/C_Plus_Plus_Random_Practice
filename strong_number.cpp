int fact(int number){

  int factorial = 1;

  for(int i = 1; i <= number; i++){
    factorial *= i;
  }

  return factorial;
}

bool strong_number(int given_number){

  int digit = 0, strong = 0 , number = given_number;

  while( number != 0){

    digit = number % 10;
    strong += fact(digit);
    number = number / 10;

  }

  if( strong == given_number ) return true;

  return false;
}


