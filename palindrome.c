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