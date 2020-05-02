int length(char* str){

  int count = 0;

  while(1){
    if(str[count] == '\0') break;
    count++;
  }

  return count;
}

char * concat( char* target, char* source){

    int target_len = length(target), source_len = length(source) , start, end;

    end = target_len + source_len;
    start = end - target_len;

    for(int i = start; i < end; i++){
      target[i] = source[i];
    }

    return target;

    
}
