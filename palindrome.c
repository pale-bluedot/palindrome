/**********************************************************************************
File name: palindrome.c
Author: Johan Andrade
Date created: 02 / 23 / 2021
Date last modified  08 / 15 / 2021
Description: The function checks for palindrome words. 
Refer to README.md for full description.
**********************************************************************************/

#include <stdio.h>
#include <string.h>

char p[20];
void checkPalindrome();

int main()
{
  printf("Enter a string to check if it is a palindrome: ");
  scanf("%[^\n]s", p); // strings with spaces are allowed
  printf("The string entered is: %s. \n", p);

  checkPalindrome(p);

  return 0;
}

void checkPalindrome()
{
  char r[] = "";

  strcpy(r, p);
  strrev(r);

  if (strcmp(p, r) == 0)
  {
    printf("The string '%s' is a palindrome. \n", p);
  }
  else if (strcmp(p, r) != 0)
  {

    printf("The string '%s' is not a palindrome. \n", p);
  }
}