void print_find_and_average_of_three_int(int first_number, int second_number, int third_number){

  int sum ; float average;

  sum = first_number + second_number + third_number;
  average = (float) sum / 3;

  printf("Sum is = %d \n", sum);
  printf("Average is = %0.3f \n", average);
  
}
