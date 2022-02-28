#include <stdio.h>
#include <string.h>

char *my_strcat(char *dest, const char *source);
char *my_strcat2(char *dest, const char *source);

int main()
{
    char *a = "He";
    const char *b = "llo ";
    const char *c = "World";

    printf("'%s' + '%s' + '%s' = ", a, b, c);

    my_strcat(a, b);
    my_strcat2(a, c);

    puts(a);

    return 0;
}

char *my_strcat(char *dest, const char *source)
{

    char *d = dest;
  
    for (; *d; ++d)
    {
    }

    for (char *s = (char *)source; *s != '\0'; ++s, ++d)
    {
        *d = *s;
    }

    *d = '\0';

    return dest;
}

char *my_strcat2(char *dest, const char *source)
{
    const size_t len = strlen(dest);
    size_t i = 0;

    for (; source[i] != '\0'; ++i)
        dest[len + i] = source[i];

    dest[len + i] = '\0';

    return dest;
}
