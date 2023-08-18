#include <stdio.h>
#include <string.h>
int isAnagram(char str1[], char str2[]) {
      char str[256] = { 0 };

      for (int i = 0; i < strlen(str1); i++ ) {
  
           str[str1[i]]++;
      }

      for (int j = 0; j < strlen(str2); j++ ) {
  
           str[str2[j]]--;
  
      }
      for (int k = 0; k < 256; k++ ) {

           if (str[k] != 0) {
    
               return 0;
           }
  
       }
 
      return 1;
}
int main(void) {

   char str1[100], str2[100];
 
   printf("\n Enter first string");
   gets(str1);
 
   printf("\n Enter second string");
   gets(str2);
 
   if (isAnagram(str1, str2)) {
  
      printf ("\n Enter strings are anagrams");
  
   } else {
  
     printf ("\n Enter strings are not anagrams");
   }
 
   return 0;
}
