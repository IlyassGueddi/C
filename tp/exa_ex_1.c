#include <stdio.h>
#include <stdbool.h>

int main(){
    int nbr;
    while(true){
        printf("donne moi un nombre de 3 chiffres: ");
        scanf("%d", &nbr);
        if ((99 < nbr) && (nbr < 1000)){
            break;
        }else{
            printf("invalid value entre une nmbre de 3 chiffres\n");
        }
    }
    
    int is_pair =  nbr % 2;
    if (is_pair == 0){
        printf("le nbr est pair.");
    }else{
        printf("le nbr est impair.");
    }

    int somme = 0;       
    int modulo ;                                           
    for (int i = 1; i < nbr ; i++){
        modulo =  nbr % i ;
        if (modulo == 0){
            somme = somme + i;
        }
    }
    if (somme == nbr){
        printf("le nbr est parfait.");
    }

    // somme de chiffres :
    int first_chiffre, second_chiffre, thirth_chiffre;
    
    first_chiffre = nbr / 100;
    second_chiffre = ( nbr / 10 ) - (first_chiffre * 10);
    thirth_chiffre = nbr - ((nbr / 10) * 10);

    int somme_chiffres = first_chiffre + second_chiffre + thirth_chiffre;

    return 0;
}