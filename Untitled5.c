#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char rue [50];
    char ville[50];
    int codepostal;
} adresse;

typedef struct

{
    char nom [50];
    int age ;
    adresse adr;

} person;



 person s1[2];


    int main ()
    {
        int check,in;
        while(1){

        printf("------------Menu------------- \n");
        printf("1- Ajouter un personn \n ");
        printf("2- Afficher les informtions \n ");
        printf("3- modifier les informtion \n ");
        printf("4- suprimmer personne \n ");

        printf("------------espace-------------\n");


        printf("Donnez votre choix : \n");


        scanf("%d", &check);


            switch (check)
            {
            case 1 :
                 for (int i=0 ; i<2 ; i++)
        {

            printf("--------- Personne %d---------- \n",i+1);

            printf("Votre nom : " );
            scanf("%s", &s1[i].nom);

            printf("Votre age : ");
            scanf("%d", &s1[i].age);

            printf("Votre Adresse (Rue) : ");
            scanf ("%s", &s1[i].adr.rue);

            printf("Votre Adresse( Ville) : ");
            scanf ("%s", &s1[i].adr.ville);

            printf("Votre Adresse (codepostal) : ");
            scanf ("%d", &s1[i].adr.codepostal);


        };

                break;
            case 2:
                for (int i=0 ; i<2 ; i++)
        {

            printf(" %s\n ",s1[i].nom);
            printf(" %d\n ",s1[i].age);
            printf(" %s\n ",s1[i].adr.rue);
            printf(" %s\n ",s1[i].adr.ville);
            printf(" %d\n ",s1[i].adr.codepostal);
            printf("----------------\n");
        }

                break;
            case 3:

                  printf("Entrez l'indice de personne qui modifier ses informtions \n ");
                  scanf("%d",&in);
                   printf("---------Modification de Personne %d- \n",in);

            printf("Votre nom : " );
            scanf("%s", &s1[in].nom);

            printf("Votre age : ");
            scanf("%d", &s1[in].age);

            printf("Votre Adresse (Rue) : ");
            scanf ("%s", &s1[in].adr.rue);

            printf("Votre Adresse( Ville) : ");
            scanf ("%s", &s1[in].adr.ville);

            printf("Votre Adresse (codepostal) : ");
            scanf ("%d", &s1[in].adr.codepostal);

            printf("---------Bien Modifi'é'---------------\n");





                break;
            default :
                break;

            }


        }

    return 0;
}
