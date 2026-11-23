#include "password_audit.h"

int ft_has_special(const char *pwd){

size_t i;
i=0;
while(pwd[i]) {

    if(ft_is_special(pwd[i])){
        return (1);
    }
   i++;
}
return (0);
}
