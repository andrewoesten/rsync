#include <stdlib.h>
#include <stdio.h>

void
__eprintf (format, file, line, expression)
     const char *format;
     const char *file;
     unsigned int line;
     const char *expression;
{
  (void) printf (stderr, format, file, line, expression);
  abort ();
  /*NOTREACHED*/
}
