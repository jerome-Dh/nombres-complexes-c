
/** \brief
 *  Fonction principale, elle présente le menu et choix pour l'opération à effectuer
 *
 *  @author Jérome Dh
 *
 *  @since Avril 2016
 *
 *  @link
 *
 */
#include "Calculs.h"

int main()
{

    char choix, continuer;
    int condition;

    //Faire plusieurs opérations jusqu'à la demande d'arrêt
    do
	{

        clear;
        printf("\t--------------------------------------------\n");
        printf("\n\t\tLES NOMBRES COMPLEXES - MENU\n");

        tracerLigne;
        printf("\tA => Additionner deux complexes\n");
        printf("\tB => Soustraction de 02 complexes\n");
        printf("\tC => Multiplication de 02 complexes\n");
        printf("\tD => Division de 02 complexe\n");
        printf("\tE => Module d'un complexe\n");
        printf("\tF => Conjugue d'un complexe\n");
        printf("\tG => Argument d'un complexe\n");
        printf("\tH => Exponentiel d'un complexe\n");
        printf("\tI => Racine N-ieme d'un complexe\n");
        printf("\tJ => Inverse d'un complexe\n");
        printf("\tK => Partie reel d'un complexe\n");
        printf("\tL => Partie imaginaire d'un complexe\n");
        printf("\tM => Racine carree d'un complexe\n");
        printf("\tN => Puissance n d'un complexe\n");
        tracerLigne;
        printf("\tQ => Quitter l'application\n");
        tracerLigne;
        printf("\tChoisissez: ");

        do
		{

            scanf("%c", &choix);
            choix = tolower(choix);
            condition = isalpha(choix);
            if(!condition)
                printf("\tChoisissez [A] .. [Z]: ");

            viderBuffer(); //Vider le buffer

        }
		while( ! condition);


        //Les choix possibles
        clear;
        tracerLigne;
        if(choix == 'a')
		{

            printf("\t\t ADDITION DE DEUX COMPLEXES\n");
            operation(1);

        }
		else if(choix == 'b')
		{

            printf("\t\t SOUSTRACTION DE DEUX COMPLEXES\n");
            operation(2);

        }
		else if(choix == 'c')
		{

            printf("\t\t MULTIPLICATION DE DEUX COMPLEXES\n");
            operation(3);

        }
		else if(choix == 'd')
		{

            printf("\t\t DIVISION DE DEUX COMPLEXES\n");
            operation(4);

        }
		else if(choix == 'e')
		{

            printf("\t\t MODULE D'UN COMPLEXE\n");
            operation(5);

        }
		else if(choix == 'f')
		{

            printf("\t\t CONJUGUE D'UN COMPLEXE\n");
            operation(6);

        }
		else if(choix == 'g')
		{

            printf("\t\t ARGUMENT D'UN COMPLEXES\n");
            operation(7);

        }
		else if(choix == 'h'){

            printf("\t\t FORME EXPONENTIELLE D'UN COMPLEXE\n");
            operation(8);

        }
		else if(choix == 'i'){

            printf("\t\t RACINE N'IEME D'UN COMPLEXE\n");
            operation(9);

        }else if(choix == 'j'){

            printf("\t\t INVERSE D'UN COMPLEXE\n");
            operation(10);

        }
		else if(choix == 'k'){

            printf("\t\t PARTIE REEL D'UN COMPLEXE\n");
            operation(11);

        }else if(choix == 'l'){

            printf("\t\t PARTIE IMAGINAIRE D'UN COMPLEXE\n");
            operation(12);

        }
		else if(choix == 'm'){

            printf("\t\t RACINE CARREE D'UN COMPLEXE\n");
            operation(13);

        }
		else if(choix == 'n')
		{

            printf("\t\t PUISSANCE N D'UN COMPLEXE\n");
            operation(14);

        }
		else if(choix == 'q')
		{

            //Quitter la partie
            continuer = 'n';

        }else
            printf("\tChoisissez [A] .. [M], [Q]: \n");
        tracerLigne;


        //Réfaire un nouveau calcul
        if(choix != 'q')
		{

           printf("\n\tVoulez-vous faire une autre operation ? [O]ui ou [N]on:\t");
           do
		   {

                scanf("%c", &continuer);
                continuer = tolower(continuer);
                if(continuer != 'o' && continuer != 'n')
                    printf("\tChoisissez [O]ui ou [N]on: ");

                viderBuffer(); //Vider le Buffer

            }
			while(continuer != 'o' && continuer != 'n');

        }

    }
	while(continuer != 'n');

    return 0;

}
