


float sqrt(double number){

  float estimation = 1;

  for(int i = 0; i < 20; i++){
    estimation = ( estimation + ( number / estimation ) ) / 2;
  }

  return estimation;
}



