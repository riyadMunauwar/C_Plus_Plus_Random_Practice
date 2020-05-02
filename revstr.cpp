
int len(char* arr){
  
  int count = 0;

  while(1){
    if( arr[count] == 0 ) break;
    count++;
  }

  return count;
}

char * revstr(char* string){

  int length = len(string);
  char temp[length];

  
  for(int i = length - 1; i >= 0; i--){

    temp[length - (i + 1)] = string[i];
    
    if( i == 0 ){
      temp[length - 1] = 0;
    }
  }

  for(int i = length - 1; i >= 0; i--){

    string[i] = temp[length - (i + 1)];

    if( i == 0 ){
      string[length - 1] = 0;
    }
  }

  return string;
} 
