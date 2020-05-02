
void swap_two_number(int* first_number, int* second_number){

  int temp;

  temp = *first_number;
  *first_number = *second_number;
  *second_number = temp;

}


void swap_two_number_without_temp_variable(int* first_number, int* second_number){

  *first_number = *first_number - *second_number;
  *second_number = *first_number + *second_number;
  *first_number = *second_number - *first_number;

}

