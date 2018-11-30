
/** \brief
 *  Bibliothèque des complexes
 *  Définition des fonctions opérants sur les nombres complexes
 *
 *  @author Jerome Dh
 *  @since Avril 2016
 *  @link
 *
 */

    #include "LibComplexe.h"

    /** Additionner deux nombres Complexes **/
    Complexe addition(Complexe c1, Complexe c2){

        Complexe r = {(c1.re + c2.re), (c1.im + c2.im)};
        return r;

    }

    /** Soustraction entre Deux Nombres Complexes **/
    Complexe soustraction(Complexe c1, Complexe c2){

        Complexe r = {(c1.re - c2.re), (c1.im - c2.im)};
        return r;

    }
    /** Multiplication **/
    Complexe multiplication(Complexe c1, Complexe c2)
    {
        Complexe r = {((c1.re*c2.re)-(c1.im*c2.im)), (c1.re * c2.im + c2.re * c1.im)};
        return r;
    }

    /** Division **/
    Complexe division(Complexe c1, Complexe c2)
    {
        Complexe r;
        r.re = (c1.re*c2.re + c1.im*c2.im) / (pow(c2.re, 2) + pow(c2.im, 2));
        r.im = (c2.re*c1.im - c1.re*c2.im) / (pow(c2.re, 2) + pow(c2.im, 2));
        return r;

    }

    /** Calculer le module **/
    float module(Complexe c){

        return sqrt(pow(c.re, 2) + pow(c.im, 2));

    }

    /** Afficher un nombre Complexe **/
    void afficher(Complexe c){

        if(!c.re && !c.im)
            printf("0");
        if(c.re != 0)
            printf("%.1f ", c.re);
        if(c.im != 0){

            if(c.im < 0){
                printf("%.1f", c.im);
            }else{
                printf("+ %.1f",c.im);
            }
            printf("i");
        }

    }

    /** le conjugue **/
    Complexe conjugue(Complexe c){

        Complexe r = {c.re, (-1) * c.im};
        return r;

    }

    /** argument d'un nombre complexe **/
    double argument(Complexe z){

        if(!z.re && !z.im)
            exit(EXIT_FAILURE);

        double module = sqrt(pow(z.re, 2) + pow(z.im, 2)),
            partieR = z.re / module,
            partieI = z.im / module,
            argCos = acos(partieR),
            argSin = asin(partieI),
            ret;

        if(cos(argCos) == cos(argSin)){
            ret = argSin;
        }else
            ret = argCos;

        return ret;
    }

    /** Exponentiel **/
    Expo exponentiel(Complexe c)
    {
        Expo exp = {module(c), argument(c)};
        return exp;
    }

    /** Racine n-ième **/
    void racineNIeme(Complexe c, int n)
    {
        int k = 0;
        double r = pow(module(c), 1/n);
        double alpha = 0.0;
        for (k = 0; k < n; ++k){
            alpha = (argument(c) + 2 * k * PI) / n;
            printf("\tZ%d = %.3f exp(i%.3f) (radians) \n", k, r, alpha);
        }
    }

    /** Inverse **/
    Complexe inverse(Complexe c)
    {
        Complexe r = {c.re / (pow(c.re, 2) + pow(c.im, 2)), -c.im / (pow(c.re, 2) + pow(c.im, 2))};
        return r;
    }

    /** Partie réel **/
    double partieReel(Complexe c)
    {
        return c.re;
    }

    /** Partie imaginaire **/
    double partieImg(Complexe c)
    {
        return c.im;
    }

    /** racine carrée **/
    void racineCarree(Complexe c)
    {
        racineNIeme(c, 2);
    }

     /** Puissance n d'un Complexe **/
    Complexe puissance(Complexe c, int n)
    {
        Complexe r = c;
        int i = 0;
        for(i = 1; i < n; ++i)
            r  = multiplication(r, c);

        return r;
    }
