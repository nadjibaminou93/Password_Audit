#include "password_audit.h"
#include <stddef.h>

int ft_has_digit(const char *pwd){

size_t i;
i=0;
while(pwd[i]){

    if(ft_is_digit(pwd[i])){
        return (1);
    }
i++;
}
return (0);
}
