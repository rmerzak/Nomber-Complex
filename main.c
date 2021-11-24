#include <stdio.h>
#include "NbrComplex.h"
#include <math.h>


main() {
	int choix,r,m,n,pow,j=1;             //n nv et nn sont les indices des complexes
	double mo,arg,a,b;                   // parametre au fonctions
	complex z[10];                       
	do
{
	printf("-----------------------Les operation sur Nombre complex-------------------------------------- \n");
	printf("--------------------------------------------------------------------------------------------- \n");

printf(" 1 - cree un nombre complexe %d a partir de 2 reels \n",j);
printf(" 2 - cree un nombre complexe %d a partir de son module,et de son argument \n",j);
printf(" 3 - delivre de la partie reelle \n");
printf(" 4 - delivre de la partie imaginaire \n");
printf(" 5 - afficher le module \n");
printf(" 6 - afficher l\'argument \n");
printf(" 7 - affichage sous la forme algebrique ---> 7\n");
printf(" 8 - affichage sous la forme geometrique ---> 8\n");
printf(" 9 - afficher l\'oppose d\'un nbre complex enregistree \n");
printf(" 10 - afficher le conjugue d\'un nbre complex enregistree \n");
printf(" 11 - afficher l\'inverse d\'un nbre complex enregistree \n");
printf(" 12 - trouver la puissance entière d\'un nbre complex enregistree\n");
printf(" 13 - addition de deux complexes deja enregistree \n");
printf(" 14 - soustraction de deux complexes deja enregistree \n");
printf(" 15 - multiplication de deux complexes deja enregistree \n");
printf(" 16 - division de deux complexes deja enregistree \n");
printf(" pour SORTIE tapper 0\n\n");
printf("entrer VOTRE CHOIX: ");
scanf("%d",&choix);
switch(choix)
{
case 1:
		printf("enter la partie reel a=");
		scanf("%lf",&a);
		printf("entrer la partie imaginaire b=");
		scanf("%lf",&b);
		z[j]=create_alg(a,b);
		j++;
		break;
	case 2:
		printf("entrer le module mo= \n");
		scanf("%lf",&mo);
		printf("entrer l\'argument arg= \n");
		scanf("%lf",&arg);
		z[j]=create_geom(mo,arg);
		j++;
		break;
	
	case 3:
	printf("entrez l\'indice du nbr complexe: \n");
	scanf("%d",&r);
	printf("la partie réelle est: %6f \n",real(z[r]));
	break;
case 4:
	printf("entrez l\'indice du nbr complexe: \n");
	scanf("%d",&r);
	printf("la partie imaginaire est: %6f\n",imag(z[r]));
	break;
case 5:
	printf("entrez l\'indice du nbr complexe: \n");
	scanf("%d",&r);
	printf("le module est: %6f\n",modulus(z[n]));
	break;
case 6:	
	printf("entrez l\'indice du nbr complexe \n");
	scanf("%d",&r);
	printf("l\'argument est: %.20f*PI\n",argument(z[r])/M_PI);
	break;
case 7:
	printf("entrez l\'indice du nbr complexe: \n");
	scanf("%d",&r);
	display_alg(z[r]);
	break;
case 8:
	printf("entrez l\'indice du nbr complexe: \n");
	scanf("%d",&r);
	display_geom(z[r]);
	break;
case 9:
	printf("quel est l\'indice du nbr complexe au quel vous pouvez faire l\'operation: \n");
	scanf("%d",&r);
	printf("donnez l\'indice que vous pouvez donner au nbr complexe du resultat: \n");
	scanf("%d",&m);
	z[m]=oppos(z[r]);
	break;
case 10:
	printf("quel est l\'indice du nbr complexe au quel vous pouvez faire l\'operation: \n");
	scanf("%d",&r);
	printf("donnez l\'indice que vous pouvez donner au nbr complexe du resultat: \n");
	scanf("%d",&m);
	z[m]=conjug(z[r]);
	break;
case 11:
	printf("quel est l\'indice du nbr complexe au quel vous pouvez faire l\'operation: \n");
	scanf("%d",&r);
	printf("donnez l\'indice que vous pouvez donner au nbr complexe du resultat: \n");
	scanf("%d",&m);
	z[m]=inverse(z[r]);
	break;
case 12:
	printf("quel est l\'indice du nbr complexe au quel vous pouvez faire l\'operation: \n");
	scanf("%d",&r);
	printf("donnez l\'indice que vous pouvez donner au nbr complexe du resultat: \n");
	scanf("%d",&m);
	printf("donner l\'entier de la puissance: \n");
	scanf("%d",&pow);
	z[m]=power(z[r],pow);
	break;
case 13:
	printf("calcule du somme de deux nomber Z1 et Z2 :\n");
	printf("l\'indice du 1er nbr complexe: \n");
	scanf("%d",&r);
	printf("l\'indice du 2eme nbr complexe: \n");
	scanf("%d",&n);
	printf("donnez l\'indice que vous pouvez donner au complexe du resultat: \n");
	scanf("%d",&m);
	z[m]=add(z[r],z[n]);
	break;
case 14:
	printf("l\'indice du 1er nbr complexe: \n");
	scanf("%d",&r);
	printf("l\'indice du 2eme nbr complexe: \n");
	scanf("%d",&n);
	printf("donnez l\'indice que vous povez donner au complexe resultant: \n");
	scanf("%d",&m);
	z[m]=sub(z[r],z[n]);
	break;
case 15:
	printf("l\'indice du 1er nbr complexe: \n");
	scanf("%d",&r);
	printf("l\'indice du 2eme nbr complexe: \n");
	scanf("%d",&n);
	printf("donnez l\'indice que vous pouvez donner au complexe du resultat: \n");
	scanf("%d",&m);
	z[m]=mul(z[r],z[n]);
	break;
case 16:
	printf("l\'indice du 1er nbr complexe: \n");
	scanf("%d",&r);
	printf("l\'indice du 2eme nbr complexe: \n");
	scanf("%d",&n);
	printf("donnez l\'indice que vous pouvez donner au complexe du resultat: \n");
	scanf("%d",&m);

	break;
default:
	break;	
}
}
while ((choix!=0));
		
	
	return 0;
}
