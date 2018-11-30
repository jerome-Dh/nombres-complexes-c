/** \brief
 *  Entetes des fonctions pour les differents calculs sur les nombres complexes
 *
 *  @author J�rome Dh
 *  @since Avril 2016
 *  @link
 *
 */

#ifndef CALCUL_H
#define CALCUL_H

    /** Effectuer divers op�rations sur des nombres complexes **/
    #include "LibComplexe.h"
    #include <string.h>
    #include <ctype.h>

    #define tracerLigne printf("\t--------------------------------------------\n\n")
    #define clear system("cls")
    #define TAILLE 100


    //Calcul divers
    void operation(short);

    //Saisir d'un nombre complexe
    Complexe getComplexe(short);

    //Vider la memoire tampon
    void viderBuffer();

    //Saisie s�curis�e de texte
    double lireDouble();

#endif // CALCUL_H

