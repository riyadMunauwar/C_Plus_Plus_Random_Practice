int sumof_indivudual_number(int number){

  int sum, reminder;

  while(number != 0){

    reminder = number % 10;
    sum = sum + reminder;
    number = number / 10;

  }

  return sum;
}
