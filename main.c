#include <unistd.h>
#include <stdlib.h>
#include "password_audit.h"

static void affichage (const char *pwd) {
    write(1, pwd, ft_strlen(pwd));
}
static int affichage_erreur (const char *pwd) {
    write(2, pwd, ft_strlen(pwd));
    return(1);
}
static void yes_no (int i) {
    if (i == 1) {
        affichage("Oui\n");
    }
    else
        affichage("Non\n");
}
int main(int argc, char **argv)
{
    const char *pwd;
    char score;

    if (argc != 2)
        return (affichage_erreur("Erreur : Format ./password_audit \"Azerty1234\"\n"));
    pwd = argv [1];
    affichage("Longueur suffisante (>=8): ");
    if (ft_strlen(pwd) >= 8)
        yes_no(1);
    else
        yes_no(0);
    affichage("Majuscule presente: ");
    if (ft_has_upper(pwd))
        yes_no(1);
    else
        yes_no(0);
    affichage("Minuscule presente: ");
    if (ft_has_lower(pwd))
        yes_no(1);
    else
        yes_no(0);
    affichage("Chiffre present: ");
    if (ft_has_digit(pwd))
        yes_no(1);
    else
        yes_no(0);
    affichage("Caractere special present: ");
    if (ft_has_special(pwd))
        yes_no(1);
    else
        yes_no(0);
    affichage("Sequence detectee: ");
    if (ft_has_sequence(pwd))
        yes_no(1);
    else
        yes_no(0);

    score = '0' + ft_password_score(pwd);
    affichage("Score: ");
    write(1, &score, 1);
    affichage("/5\n");
    return (0);
}
