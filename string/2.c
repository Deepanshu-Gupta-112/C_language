#include <stdio.h>
#include <string.h>
int areAnagrams(char *str1, char *str2) {
   int len1 = strlen(str1);
   int len2 = strlen(str2);
 
   if (len1 != len2)
       return 0;
   for (int i = 0; i < len1 - 1; i++) {
       for (int j = i + 1; j < len1; j++) {
           if (str1[i] > str1[j]) {
               char temp = str1[i];
               str1[i] = str1[j];
               str1[j] = temp;
           }
           if (str2[i] > str2[j]) {
               char temp = str2[i];
               str2[i] = str2[j];
               str2[j] = temp;
           }
       }
   }
  
   for (int i = 0; i < len1; i++) {
       if (str1[i] != str2[i])
           return 0;
   }
   return 1;
}
int main() {
   char str1[100], str2[100];
   printf("Enter the first string: ");
   scanf("%s", str1);
   printf("Enter the second string: ");
   scanf("%s", str2);
   if (areAnagrams(str1, str2))
       printf("'%s' and '%s' are anagrams.\n", str1, str2);
   else
       printf("'%s' and '%s' are not anagrams.\n", str1, str2);
   return 0;
}
