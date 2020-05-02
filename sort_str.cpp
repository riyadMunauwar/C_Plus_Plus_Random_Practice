
int len(char* string){
  int count = 0;

  while(1){
    if( string[count] == 0 ){
      break;
    }

    count++;
  }

  return count;
}

char* sort_str(char target_array[]){
  int min_index, temp, size = len(target_array);

  for(int i = 0; i < size; i++){
    
    min_index = i;

    for(int j = i + 1; j < size; j++){
      if(target_array[j] < target_array[min_index]) min_index = j;
    }

    if( min_index != i ){

      temp =  target_array[i];
      target_array[i] =  target_array[min_index];
      target_array[min_index] =  temp;

    }
  }
  
  return target_array;

}

