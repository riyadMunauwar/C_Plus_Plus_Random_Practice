void product(long number){
  for(long i = 2; i <= number; i++){
    if( number % i == 0){
      number = number/i;
      std::cout << i << std::endl;
      i = 1;
    }
  }
}

