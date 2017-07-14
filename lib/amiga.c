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
  /* NOTREACHED */
}

mode_t
umask(mode_t mode)
{
    // @todo Not supported without multiuser.library or usergroup.library - just return default mask
    return 022;
}
