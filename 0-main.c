#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  /* maximun length of string is 100 */
  char str[100];

  /* read a string from the user */
  printf("Enter a string: ");
  scanf("%s", str);

  /* check if the string is a palindrome */
  if(is_palindrome(str))
    printf("%s is a palindrome\n", str);
  else
    printf("%s is not a palindrome\n", str);

  return (0);
}
