#include "password_audit.h"

int ft_is_special(char c){
    if(c < 33 || c > 126)
        return(0);
    if(!ft_is_digit(c) && !ft_is_lower(c) && !ft_is_upper(c))
        return(1);
    return(0);
}


