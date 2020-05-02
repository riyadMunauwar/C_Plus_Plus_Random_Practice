void fibonacci (int limit){

  int first_number = 0, second_number = 1, fibonacci_number;

  for(int i = 1; i <= limit; i++){

    fibonacci_number = first_number + second_number;

    std::cout << fibonacci_number << "\t";

    second_number = first_number;
    first_number = fibonacci_number;

  }
}

int* fibonacci_number(int limit){

  int* fibonacci_list = new int[200];

  int first_number = 0, second_number = 1, fibonacci_number;

  for(int i = 0; i < limit; i++){

    fibonacci_number = first_number + second_number;

    fibonacci_list[i] = fibonacci_number;

    second_number = first_number;
    first_number = fibonacci_number;

  }

  return fibonacci_list;
}


int length(int* arr){
  int count = 0;
  while(true){
    if(arr[count] == 0){
      break;
    }
    count++;
  }
  
  return count;
}
