#include <stdio.h>
int my_strlen(char *s)
{
 char *p = s;
 while (*p)
 ++p;
 return (p - s);
}

void debug()
{
    printf("irmi\r\n");
}

void test()
{
    printf("Heading\r\n");
    printf("Text1\r\n");
    printf("Text2\r\n");
    printf("Text3\r\n");
    printf("Footer\r\n");
}
void print2lines()
{
    printf("\r\nline_a");
    printf("\r\nline_a");
    printf("\r\nline_a");
    printf("\r\nline_b\r\n");
}

int main(void)
{
 int i;
 char *s[] = {
 "Git tutorials",
 "Tutorials Point"
 };
 for (i = 0; i < 2; ++i)
 printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));
 return 0;
}