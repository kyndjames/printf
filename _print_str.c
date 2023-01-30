#include "main.h"

int _print_str(char *st)
{
  for (int k = 0; st[k] != '\0'; k++)
  {
    if (st[k + 1] == 's')
      _putchar(st[k]);
    else if (st[k] != '%')
    {
      _putchar(st[k]);
    }
  }
}
