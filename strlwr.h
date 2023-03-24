#include <ctype.h>

char *strupr(char s[])
{
  char	*p;

  for (p = s; *p; ++p)
    *p = toupper(*p);

  return(s);

}	/* END STRUPR */

/* -------------------------------------------------------------------- */
char *strlwr(char s[])
{
  char	*p;

  for (p = s; *p; ++p)
    *p = tolower(*p);

  return(s);

}