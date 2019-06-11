#include <stdio.h> 
#include<string.h>

void LetterChanges(char  str[]) { 
    
    int i,l=strlen(str);
    char res[50];
    memset(res,00,50);
    
    for(i=0;i<l;i++){
        if(97<=str[i] && str[i]<=122)
            res[i]=str[i]+1;
        else
            res[i]=str[i];
            
        if(res[i]==97 || res[i]==101 || res[i]==105 || res[i]==111 || res[i]==117){
            res[i]=res[i]-32;
        }
    }
  printf("%s", res); 
            
}

int main(void) { 
  
  // keep this function call here
  LetterChanges(gets(stdin));
  return 0;
    
}
