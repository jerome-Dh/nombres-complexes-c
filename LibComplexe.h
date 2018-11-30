/** \brief
 *  Prototypes des differentes opérations sur les nombres complexes
 *
 *  @author Jérome Dh
 *  @since Avril 2016
 *  @link
 *
 */
#ifndef LIB_COMPLEXE_H
#define LIB_COMPLEXE_H

    #include <stdio.h>
    #include <math.h>
    #include <stdlib.h>
    #define PI 3.14159265358979323846

    /** Definir la structure d'un nombre "Complexe" **/
    typedef struct Complexe{
        float re, im;
    } Complexe;

    /** Forme exponentielle **/
    typedef struct Expo{
        float mod, arg;
    } Expo;
    /** Racine n-ième **/


    /** Additionner **/
    Complexe addition(Complexe, Complexe);

    /** Soustraction **/
    Complexe soustraction(Complexe, Complexe);

    /** Multiplication **/
    Complexe multiplication(Complexe, Complexe);

    /** Division **/
    Complexe division(Complexe, Complexe);

    /** Calculer le module **/
    float module(Complexe c);

    /** Afficher un nombre Complexe **/
    void afficher(Complexe c);

    /** Le conjugue **/
    Complexe conjugue(Complexe);

    /** argument d'un nombre complexe **/
    double argument(Complexe);

    /** Exponentiel **/
    Expo exponentiel(Complexe);

    /** Racine n-ième **/
    void racineNIeme(Complexe, int);

    /** Inverse **/
    Complexe inverse(Complexe);

    /** Partie réel **/
    double partieReel(Complexe);

    /** Partie imaginaire **/
    double partieImg(Complexe);

    /** racine carrée **/
    void racineCarree(Complexe);

    /** Puissance n d'un Complexe **/
    Complexe puissance(Complexe, int);


#endif // LIB_COMPLEXE_H
