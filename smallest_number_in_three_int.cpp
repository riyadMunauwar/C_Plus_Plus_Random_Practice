
int smallest_number(int first_number, int second_number, int third_number){
  
  if( first_number < second_number && first_number < third_number ) return first_number;

  if( second_number < third_number ) return second_number;

  return third_number;

}

