/* strstr example */
#include <stdio.h>
#include <string.h>
# include <conio.h>
int main ()
{
  char str[] ="This is a simple string";
  char * pch;
  pch = strstr (str,"simple");
  strncpy (pch,"sample",6);
  puts (str);
  getch();
  return 0;
}