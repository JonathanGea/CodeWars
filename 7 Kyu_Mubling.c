#include <string.h>
char *accum(const char *source){
  int len = strlen(source);
  int tlen = len * (len + 1) / 2 + len;
  char *s = malloc(tlen);
  if (s == NULL) return NULL;
  s[tlen - 1] = '\0';

  for (int i = 0; i < len; i++) {
    int start = i * (i + 1) / 2 + i;
    s[start] = toupper(source[i]);
    for (int j = 1; j <= i; j++) {
      s[start + j] = tolower(source[i]);
    }
    if (i < len - 1) {
      s[start + i + 1] = '-';
    }
  }
  return s;
}


/*
Examples:

accum("abcd") -> "A-Bb-Ccc-Dddd"
accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
accum("cwAt") -> "C-Ww-Aaa-Tttt"


#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "ZpglnRxqenU";
    int panjang =  strlen (source)-1;

    for (int i = 0; i <= panjang; i++){
    for (int t = 0; t <= i; t++){
        if (t== 0){
            char x = toupper(source[i]);
           printf ("%c", x);
    }else{
        char x = tolower(source[i]);
        printf ("%c", x);
        
    }
    }
    printf ("-");
    }

}


*/
