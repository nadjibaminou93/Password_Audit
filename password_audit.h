#ifndef PASSWORD_AUDIT.H
#define PASSWORD_AUDIT.H
#include <stddef.h>

int ft_is_upper (char c);
int ft_is_lower (char c);
int ft_is_digit(char c);
int ft_is_special(char c);
size_t ft_strlen(const char*s);
int ft_has_upper (const char *pwd);
int ft_has_lower (const char *pwd);
int ft_has_digit (const char *pwd);
int ft_has_special (const char *pwd);
int ft_has_sequence (const char *pwd);
int ft_password_score (const char *pwd);

#endif // PASSWORD_AUDIT
