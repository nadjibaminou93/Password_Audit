#include "password_audit.h"
#include <stddef.h>

static int same_family (char a, char b) {
    return (ft_is_digit(a) && ft_is_digit(b)
         || ft_is_lower(a) && ft_is_lower(b)
         || ft_is_upper(a) && ft_is_upper(b)  );
}

int ft_has_sequence (const char *pwd) {
    int same = 1;
    int compteur = 1;

    if (pwd[0] == '\0') {
        return (0);
    }
    for (size_t i = 1; pwd[i] != '\0'; i++) {
        if (pwd[i] == pwd[i - 1])
            same++;
        else
            same = 1;

        if (same_family(pwd[i], pwd[i-1]) && pwd[i] == pwd[i-1] + 1)
            compteur++;
        else
            compteur = 1;
        if (same >= 4 || compteur >= 4)
            return (1);
    }
    return(0);
}
