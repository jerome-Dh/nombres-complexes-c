
/** \brief
 *  Définitions des fonctions pour les differents calculs sur les nombres complexes
 *
 *  @author Jérome Dh
 *  @since Avril 2016
 *  @link
 *
 */


#include "Calculs.h"

//Lire un nombre complexe, partie réelle et partie imaginaire
Complexe getComplexe(short n){

    Complexe c;
    printf("\n\tNombre complexe z%d: \n", n);
    printf("\t ==>partie reelle: ");
    c.re = lireDouble();
    printf("\n\t ==>partie imaginaire: ");
    c.im = lireDouble();
    printf("\n\tz%d = ", n);
    afficher(c);
    printf("\n");

    return c;

}
void operation(short o){

    Complexe c1, c2;

    if(o == 1){

        //Réaliser une Addition
        c1 = getComplexe(1);
        c2 = getComplexe(2);

        printf("\n\tResultat: (");
        afficher(c1);
        printf(") + (");
        afficher(c2);
        printf(") = ");
        afficher(addition(c1, c2));
        printf("\n");

    }else if(o == 2){

        //Réaliser une Soustraction

        c1 = getComplexe(1);
        c2 = getComplexe(2);

        printf("\n\tResultat: (");
        afficher(c1);
        printf(") - (");
        afficher(c2);
        printf(") = ");
        afficher(soustraction(c1, c2));
        printf("\n");

    }else if(o == 3){

        //Réaliser une Soustraction

        c1 = getComplexe(1);
        c2 = getComplexe(2);

        printf("\n\tResultat: (");
        afficher(c1);
        printf(") * (");
        afficher(c2);
        printf(") = ");
        afficher(multiplication(c1, c2));
        printf("\n");

    }else if(o == 4){

        //Réaliser une Soustraction

        c1 = getComplexe(1);
        c2 = getComplexe(2);

        printf("\n\tResultat: (");
        afficher(c1);
        printf(") / (");
        afficher(c2);
        printf(") = ");
        afficher(division(c1, c2));
        printf("\n");

    }else if(o == 5){

        //Réaliser un Modulo
        c1 = getComplexe(1);
        float r = module(c1);
        printf("\n\tResultat: %.1f", r);
        printf("\n\t");
        printf("\n");

    }else if(o == 6){

        //calcul du Conjugué
        c1 = getComplexe(1);
        c2 = conjugue(c1);
        printf("\n\tResultat: ");
        afficher(c2);
        printf("\n");

    }
	else if(o == 7)
	{

        //calcul de l'argument
        c1 = getComplexe(1);
        double r = argument(c1);
        printf("\n\tResultat: ");
        afficher(c1);
        printf("\tArgument = %.3f (radians)\n", r);

    }
	else if(o == 8)
	{

        //forme exponentielle
        c1 = getComplexe(1);
        Expo e = exponentiel(c1);
        printf("\n\tResultat: ");
        afficher(c1);
        printf("\t Forme Expo: %.3fexp(i%.3f) (radians)\n", e.mod, e.arg);

    }else if(o == 9){

        //racine n-ième
        c1 = getComplexe(1);
        int n = 0;
        printf("\n\tLa valeur de la racine: ");
        scanf("%d", &n);
        printf("\n");
        racineNIeme(c1, n);
        printf("\n");

    }else if(o == 10){

        //Inverser un complexe
        c1 = getComplexe(1);
        c2 = inverse(c1);
        printf("\n\tResultat: ");
        afficher(c2);
        printf("\n");

    }else if(o == 11){

        //partie réel
        c1 = getComplexe(1);
        double r = partieReel(c1);
        printf("\n\tResultat: %.3f ", r);
        printf("\n");

    }else if(o == 12){

        //partie imaginaire
        c1 = getComplexe(1);
        double r = partieImg(c1);
        printf("\n\tResultat: %.3f ", r);
        printf("\n");

    }else if(o == 13){

        //racine carrée
        c1 = getComplexe(1);
        printf("\n\tResultat: \n\n");
        racineCarree(c1);
        printf("\n");

    }else if(o == 14){

        //Puissance n
        c1 = getComplexe(1);
        int n = 0;
        printf("\n\tLa valeur de la puissance: ");
        scanf("%d", &n);
        c2 = puissance(c1, n);
        printf("\n\tResultat: ");
        afficher(c2);
        printf("\n");

    }

}
void viderBuffer(){

    //Vider le buffer (la memoire tempon)
    int c = 0;
    while(c != '\n' && c != EOF){
        c = getchar();
    }

}

//Saisie sécurisée de texte
double lireDouble(){

    char nombreTexte[TAILLE] = {0};
    char *posEntree = NULL;
    int ok = 0;

    //Lire une chaine au clavier
    if(fgets(nombreTexte, TAILLE, stdin) != NULL){

        posEntree = strchr(nombreTexte, '\n');
        if(posEntree != NULL){
            *posEntree = '\0';
        }else{
            viderBuffer();
        }

        //Convertir la virgule en point
        posEntree = strchr(nombreTexte, ',');
        if(posEntree != NULL)
            *posEntree = '.';

        if(isdigit(nombreTexte[0]) || nombreTexte[0] == '.' || nombreTexte[0] == ',' || nombreTexte[0] == '-'){
            ok = 1;
        }

    }else{
        viderBuffer();
    }

    //Convertir la chaine en double et la renvoyer, si echec rédemander à nouveau
    if(ok){

        return strtod(nombreTexte, NULL);

    }else{

        printf("\n\t!Erreur, Entrez un reel: ");
        return lireDouble();

    }

}
