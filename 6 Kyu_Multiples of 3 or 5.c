#include <stdio.h>

int main() {

  int result = 0;
  int number = 10;
    
  for(int i = 1; i < number; i++){
    if (i % 3 == 0 || i % 5 == 0 )
      {
          printf (" %d", i);
     result = result + i; 
    }
    
  }
		
    printf (" %d", result);
}

// menjumlahkan kelipatan 3 atau 5 dari 1 sampai number
