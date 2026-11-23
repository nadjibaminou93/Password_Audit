#include "password_audit.h"

int ft_password_score (const char *pwd) {
    int score = 0;
    if (ft_strlen(pwd) >= 8)
        score++;
    if (ft_has_upper(pwd))
        score++;
    if (ft_has_lower(pwd))
        score++;
    if (ft_has_digit(pwd))
        score++;
    if (ft_has_special(pwd) && !ft_has_sequence(pwd))
        score++;
    return (score);
}
