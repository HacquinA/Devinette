#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



int main(){

int choix = 0;
int joker = 2;
int point = 0;
int vie = 3;

//Tutos 
printf("---------------Tutoriel---------------\n\n");
printf("Hey bro ! Bienvenue dans un jeu de devinette ! Eh ouais ici tu vas devoir repondre a plusieurs devinette si tu veux devenir le ou la king !\n");
printf(" Jte fait le topo. T'a trois chance ! Pas une de plus je te previens , tu ne pourras pas m'acheter !\n");
printf(" Si jamais t es vraiment dans la galere tu auras le droit a deux jokers dans la parti, grace a lui tu auras deux choix de reponses au lieu de 4\n");


// Start

printf("---------------C est parti---------------\n\n");

while( vie >= 0){


// Devinette 1

		printf("---------------Devinette n°1---------------\n\n");
		printf("Vous avancez dans un couloir et il ne vous est pas possible de revenir en arriere. Soudain vous vous retrouvez en face de trois portes.\n\n- Derriere la premiere il y a un assassin sanguinaire arme de couteaux de boucherie.\n- Derriere la deuxieme il y a un lion qui n'a pas mange depuis 6 mois.\n- Derriere la troisieme il y a un trou de 100 metres de haut et infranchissable.\nQuel choix allez-vous faire pour pouvoir survivre a cette aventure?\n\n");
		printf("!!reponse!!\n\n");
		printf("(1) Porte avec l'assassin, (2) Porte avec le Lion, (3) Porte vec le trou, (4) joker\n");

		scanf("%d",&choix);
			if (choix == 1){
				printf("raté ! T'es suicidaire mon pote ! Pas de point pour toi désolé.\n");
				printf("Point: %d\n\n",point);
				vie -= 1;
				printf("Vie: %d\n\n",vie);
			}
			if (choix == 2){
				printf("Bien vus mon pote! Si il n'a pas mangé depuis 6 mois ce serait etonnant qu'il soit vivant le gaillard ! Tu gagnes 5 points !\n");
				point += 5;
				printf("Point: %d\n\n",point);
			}
			if (choix == 3){
				printf("raté ! Il n'a pas mangé depuis 6 mois ce serait etonnant qu'il soit vivant le gaillard ! Pas de point pour toi désolé.\n");
				printf("Point: %d\n\n",point);
				vie -= 1;
				printf("Vie: %d\n\n",vie);
			}
			if (choix == 4){
				printf("Bien tu choisis d'utiliser un des tes joker. Voici deux réponses: (2) Porte avec le Lion, (3) Porte vec le trou \n");
				scanf("%d",&choix);
					if (choix == 2){
						printf("Bien vus mon pote! Si il n'a pas mangé depuis 6 mois ce serait etonnant qu'il soit vivant le gaillard ! Tu gagnes 5 points !\n");
						point += 5;
						printf("Point: %d\n",point);
					}
					if (choix == 3){
						printf("raté ! Il n'a pas mangé depuis 6 mois ce serait etonnant qu'il soit vivant le gaillard ! Pas de point pour toi désolé.\n");
						printf("Point: %d\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					joker-= 1;
						if (joker == 1){
							printf("Il te reste %d joker \n\n",joker);
						}
				}



	// Devinette 2

		printf("---------------Devinette n°2---------------\n\n");
		printf("Quand on est loin de moi, on ne pense pas à moi.\nPlus on s'approche de moi, plus on pense à moi.\nQuand je suis là, on ne pense plus à moi.\nQui suis-je ?\n\n");
		printf("!!reponse!!\n\n");
		printf("(1) L'amour (2) La vie (3) La mort ,(4) Joker \n\n");
		scanf("%d",&choix);
			if (choix == 1){
				printf("raté ! Quand on est loin le manque se fait ressentir !\n");
				printf("Point: %d\n\n",point);
				vie -= 1;
				printf("Vie: %d\n\n",vie);
			}
			if (choix == 2){
				printf("Raté ! La vie ne fait pas de vas et viens !\n");
				printf("Point: %d\n\n",point);
				vie -= 1;
				printf("Vie: %d\n\n",vie);			
			}
			if (choix == 3){
				printf("Bien joué ! Et oui quand tu es mort tu ne peux plus y penser ! Tu gagnes 5 points !\n");
				point += 5;
				printf("Point: %d\n\n",point);
			}
			if (choix == 4){
				printf("Bien tu choisis d'utiliser un des tes joker. Voici deux réponses: (1) L'amour, (3) La mort.\n");
				scanf("%d",&choix);
					if (choix == 3){
						printf("Bien vus mon pote! Et oui quand tu es mort tu ne peux plus y penser ! Tu gagnes 5 points !\n");
						point += 5;
						printf("Point: %d\n",point);
					}
					if (choix == 1){
						printf("raté ! Quand on est loin le manque se fait ressentir ! \n");
						printf("Point: %d\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					joker-= 1;
						if (joker == 1){
							printf("Il te reste %d joker \n\n",joker);
						}
						if (joker == 0){
							printf("Tu n'as plus de Joker \n\n");
						}

				}



// Devinette 3


		printf("---------------Devinette n°3---------------\n\n");	
		printf("Toujours le premier, jamais le dernier,Rien sans lui n’est jamais fini,Car rien ne peut commencer sans lui.\nQui est-il ?\n\n");
		printf("!!reponse!!\n\n");
		printf("(1) Le début (2) Le temps (3) La vie (4) Joker  \n\n");
			scanf("%d",&choix);
				if (choix == 1){
					printf("Bien joué ! Bah ouais il faut un commencement à tout ! Tu gagnes 5 points !\n");
					point += 5;
					printf("Point: %d\n\n",point);
				}
				if (choix == 2){
					printf("Raté ! Le temps n'a pas de place\n");
					printf("Point: %d\n\n",point);
					vie -= 1;
					printf("Vie: %d\n\n",vie);
				}
				if (choix == 3){
					printf("Raté ! C'etait le début !\n");
					printf("Point: %d\n\n",point);
					vie -= 1;
					printf("Vie: %d\n\n",vie);
				}
				if (choix == 4){
					printf("Bien tu choisis d'utiliser un des tes joker. Voici deux réponses: (1) Le début, (3) La vie.\n");
					scanf("%d",&choix);
					if (choix == 1){
						printf("Bien vus mon pote! Bah ouais il faut un commencement à tout ! Tu gagnes 5 points ! \n");
						point += 5;
						printf("Point: %d\n",point);
					}
					if (choix == 3){
						printf("raté ! Ca aurait pus mais non ! \n");
						printf("Point: %d\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					joker-= 1;
						if (joker == 1){
							printf("Il te reste %d joker \n\n",joker);
						}
						if (joker == 0){
							printf("Tu n'as plus de Joker \n\n");
						}
				}
			if (vie == 0){
				printf("TU AS PERDU	\n\n");
				printf(" Tu as accumulé un total de %d points ! Pas mal ! Défie tes potes de faire mieux ! \n\n",point);
				return 1;
			}	

// Devinette 4

			printf("---------------Devinette n°4---------------\n\n");	

			printf("Je suis aussi grand qu'une tour.Aussi léger que l'air et cents hommes venant à moi ne m'ébranle pas \nQui suis-je?\n\n");
			printf("!!reponse!!\n\n");
			printf("(1) Un nuage (2) Le vent (3) L'ombre d'une tour (4) Joker  \n\n");
			scanf("%d",&choix);
				if (choix == 1){
					printf("Raté ! C'etait l'ombre de la tour ! \n");
					printf("Point: %d\n\n",point);
					vie -= 1;
					printf("Vie: %d\n\n",vie);
				}
				if (choix == 2){
					printf("Raté ! C'etait l'ombre de la tour !\n");
					printf("Point: %d\n\n",point);
					vie -= 1;
					printf("Vie: %d\n\n",vie);
				}
				if (choix == 3){
					printf("Bien vus mon pote! Tu gagnes 5 points ! \n");
					point += 5;
					printf("Point: %d\n",point);
				}
				if (choix == 4){
					printf("Bien tu choisis d'utiliser un des tes joker. Voici deux réponses: (1) Un nuage, (3) L'ombre d'une tour.\n");
					scanf("%d",&choix);
					if (choix == 1){
						printf("Raté ! C'etait l'ombre de la tour ! \n");
						printf("Point: %d\n\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					if (choix == 3){
						printf("Bien vus mon pote! Tu gagnes 5 points ! \n");
						point += 5;
						printf("Point: %d\n",point);
					}
					joker-= 1;
						if (joker == 1){
							printf("Il te reste %d joker \n\n",joker);
						}
						if (joker == 0){
							printf("Tu n'as plus de Joker \n\n");
						}
				}
			if (vie == 0){
				printf("TU AS PERDU	\n\n");
				printf(" Tu as accumulé un total de %d points ! Pas mal ! Défie tes potes de faire mieux ! \n\n",point);
				return 1;
			}	

// Devinette 5

			printf("---------------Devinette n°5---------------\n\n");	

			printf("J'ai 6 pieds, 2 jambes, 8 bras, 2 tetes et un oeil.  \nQui suis-je?\n\n");
			printf("!!reponse!!\n\n");
			printf("(1) Une ombre chinoise  (2) Une menteuse (3) Un mutant (4) Joker  \n\n");
			scanf("%d",&choix);
				if (choix == 1){
					printf("Raté ! C'est la menteuse ! \n");
					printf("Point: %d\n\n",point);
					vie -= 1;
					printf("Vie: %d\n\n",vie);
				}
				if (choix == 2){
					printf("Bien vus mon pote! Elle a menti la devinette ! Tu gagnes 5 points ! \n");
					point += 5;
					printf("Point: %d\n",point);
				}
				if (choix == 3){
					printf("Raté ! C'est la menteuse !\n");
					printf("Point: %d\n\n",point);
					vie -= 1;
					printf("Vie: %d\n\n",vie);
				}
				if (choix == 4){
					printf("Bien tu choisis d'utiliser un des tes joker. Voici deux réponses: (1) Une ombre chinoise (2) Une menteuse.\n");
					scanf("%d",&choix);
					if (choix == 1){
						printf("Raté ! C'est la menteuse !\n");
						printf("Point: %d\n\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					if (choix == 3){
						printf("Bien vus mon pote! Elle a menti la devinette ! Tu gagnes 5 points ! \n");
						point += 5;
						printf("Point: %d\n",point);
					}
					joker-= 1;
						if (joker == 1){
							printf("Il te reste %d joker \n\n",joker);
						}
						if (joker == 0){
							printf("Tu n'as plus de Joker \n\n");
						}
				}
			if (vie == 0){
				printf("TU AS PERDU	\n\n");
				printf(" Tu as accumulé un total de %d points ! Pas mal ! Défie tes potes de faire mieux ! \n\n",point);
				return 1;
			}

// Devinette 6

					printf("---------------Devinette n°6---------------\n\n");	

					printf("3 Poissons sont dans un sceau, l'un meurt.\nCombien en reste-t-il ?\n\n");
					printf("!!reponse!!\n\n");
					printf("(1) 3  (2) 2 (3) aucune (4) Joker  \n\n");
					scanf("%d",&choix);
						if (choix == 1){
							printf("Bien vus mon pote! Il est mort mais toujours dans le sceau ! Tu gagnes 5 points ! \n");
							point += 5;
							printf("Point: %d\n",point);
						}
						if (choix == 2){
							printf("Bah non ! Il est mort mais toujours dans le sceau !\n");
							printf("Point: %d\n\n",point);
							vie -= 1;
							printf("Vie: %d\n\n",vie);
						}
						if (choix == 3){
							printf("Raté ! Il est mort mais toujours dans le sceau !\n");
							printf("Point: %d\n\n",point);
							vie -= 1;
							printf("Vie: %d\n\n",vie);
						}
						if (choix == 4){
							printf("Bien tu choisis d'utiliser un des tes joker. Voici deux réponses: (1) 3 (2) 2\n");
							scanf("%d",&choix);
							if (choix == 1){
								printf("Bien vus mon pote! Il est mort mais toujours dans le sceau ! Tu gagnes 5 points ! \n");
								point += 5;
								printf("Point: %d\n",point);
							}
							if (choix == 2){
								printf("Bah non ! Il est mort mais toujours dans le sceau !\n");
								printf("Point: %d\n\n",point);
								vie -= 1;
								printf("Vie: %d\n\n",vie);
							}
							joker-= 1;
								if (joker == 1){
									printf("Il te reste %d joker \n\n",joker);
								}
								if (joker == 0){
									printf("Tu n'as plus de Joker \n\n");
								}
						}
					if (vie == 0){
						printf("TU AS PERDU	\n\n");
						printf(" Tu as accumulé un total de %d points ! Pas mal ! Défie tes potes de faire mieux ! \n\n",point);
						return 1;
					}

// Devinette 7

			printf("---------------Devinette n°7---------------\n\n");	

			printf("Je suis souvent present sur l'eau, mais je peux egalement l'etre dans les bois je peux etre bue,ou encore mangée. \n Que suis-je ?\n\n");
			printf("!!reponse!!\n\n");
			printf("(1) Un oeuf   (2) Un champignon (3) De la mousse (4) Joker  \n\n");
			scanf("%d",&choix);
				if (choix == 1){
					printf("Non c'est raté ! C'etait la mousse !\n");
					printf("Point: %d\n\n",point);
					vie -= 1;
					printf("Vie: %d\n\n",vie);
				}
				if (choix == 2){
					printf("Non c'est raté ! C'etait la mousse !\n");
					printf("Point: %d\n\n",point);
					vie -= 1;
					printf("Vie: %d\n\n",vie);
				}
				if (choix == 3){
					printf("Bien vus mon pote!  Tu gagnes 5 points ! \n");
					point += 5;
					printf("Point: %d\n",point);
				}
				if (choix == 4){
					printf("Bien tu choisis d'utiliser un des tes joker. Voici deux réponses: (2) Un champignon (3) La mousse\n");
					scanf("%d",&choix);
					if (choix == 2){
						printf("Bah non ! C'etait la mousse !\n");
						printf("Point: %d\n\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					if (choix == 3){
						printf("Bien vus mon pote!  Tu gagnes 5 points ! \n");
						point += 5;
						printf("Point: %d\n",point);
					}
					joker-= 1;
						if (joker == 1){
							printf("Il te reste %d joker \n\n",joker);
						}
						if (joker == 0){
							printf("Tu n'as plus de Joker \n\n");
						}
				}
			if (vie == 0){
				printf("TU AS PERDU	\n\n");
				printf(" Tu as accumulé un total de %d points ! Pas mal ! Défie tes potes de faire mieux ! \n\n",point);
				return 1;
			}


// Devinette 8

			printf("---------------Devinette n°8---------------\n\n");	

			printf("Marc a 10 ans, son petit frère Jean a la moitié de son âge. \nQuand Marc sera 10 fois plus âgé, quel âge aura Franck ?\n\n");
			printf("!!reponse!!\n\n");
			printf("(1) 95 ans  (2) 80 ans (3) 50 ans (4) Joker  \n\n");
				scanf("%d",&choix);
					if (choix == 1){
						printf("Bien vus mon pote!  Tu gagnes 5 points ! \n");
						point += 5;
						printf("Point: %d\n",point);
					}
					if (choix == 2){
						printf("Non c'est raté ! Il aura 95 ans !\n");
						printf("Point: %d\n\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					if (choix == 3){
						printf("Non c'est raté ! Il aura 95 ans !\n");
						printf("Point: %d\n\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					if (choix == 4){
						printf("Bien tu choisis d'utiliser un des tes joker. Voici deux réponses: (1) 95 (3) 50\n");
						scanf("%d",&choix);
							if (choix == 1){
								printf("Bien vus mon pote!  Tu gagnes 5 points ! \n");
								point += 5;
								printf("Point: %d\n",point);
							}
							if (choix == 3){
								printf("Non c'est raté ! Il aura 95 ans !\n");
								printf("Point: %d\n\n",point);
								vie -= 1;
								printf("Vie: %d\n\n",vie);
							}
							joker-= 1;
								if (joker == 1){
									printf("Il te reste %d joker \n\n",joker);
								}
								if (joker == 0){
									printf("Tu n'as plus de Joker \n\n");
								}
					}
					if (vie == 0){
						printf("TU AS PERDU	\n\n");
						printf(" Tu as accumulé un total de %d points ! Pas mal ! Défie tes potes de faire mieux ! \n\n",point);
						return 1;
					}

// Devinette 9

			printf("---------------Devinette n°9---------------\n\n");	

			printf("Arthur est un mignon bébé, qui vient de naître. Ses parents admirent ses jolies petites mains, ses yeux éveillés, sa belle peau noire... \n Quelle est la couleur de ses dents ?  \n\n");
			printf("!!reponse!!\n\n");
			printf("(1) Jaune   (2) Blanc (3) Aucune (4) Joker  \n\n");
				scanf("%d",&choix);
					if (choix == 1){
						printf("Non c'est rate ! Un bebe n'a pas de dents quand il nee !\n");
						printf("Point: %d\n\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					if (choix == 2){
						printf("Non c'est raté ! Un bebe n'a pas de dents quand il nee ! \n");
						printf("Point: %d\n\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					if (choix == 3){
						printf("Bien vus mon pote! ben oue Un bebe n'a pas de dents quand il nee ! Tu gagnes 5 points ! \n");
						point += 5;
						printf("Point: %d\n",point);
					}
					if (choix == 4){
						printf("Bien tu choisis d'utiliser un des tes joker. Voici deux réponses: (2) Blanc (3) Aucune \n");
						scanf("%d",&choix);
							if (choix == 2){
								printf("Non c'est raté ! Un bebe n'a pas de dents quand il nee ! \n");
								printf("Point: %d\n\n",point);
								vie -= 1;
								printf("Vie: %d\n\n",vie);
							}
							if (choix == 3){
								printf("Bien vus mon pote! ben oue Un bebe n'a pas de dents quand il nee ! Tu gagnes 5 points ! \n");
								point += 5;
								printf("Point: %d\n",point);
							}
							joker-= 1;
								if (joker == 1){
									printf("Il te reste %d joker \n\n",joker);
								}
								if (joker == 0){
									printf("Tu n'as plus de Joker \n\n");
								}
						}
					if (vie == 0){
						printf("TU AS PERDU	\n\n");
						printf(" Tu as accumulé un total de %d points ! Pas mal ! Défie tes potes de faire mieux ! \n\n",point);
						return 1;
					}


// Devinette 10

			printf("---------------Devinette n°10---------------\n\n");	

			printf("On me cherche la nuit \nQuand on me trouve \nOn ne s'en rend compte que quand je suis parti.\nQui suis-je ?  \n\n");
			printf("!!reponse!!\n\n");
			printf("(1) Le sommeil   (2) Notre ame (3) Mon ombre (4) Joker  \n\n");
				scanf("%d",&choix);
					if (choix == 1){
						printf("Bien vus mon pote! \n");
						point += 5;
						printf("Point: %d\n",point);
					}
					if (choix == 2){
						printf("Non c'est raté ! C'etait le sommeil, tu t'en rend pas compte quand on dort ! \n");
						printf("Point: %d\n\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					if (choix == 3){
						printf("Non c'est raté ! C'etait le sommeil, tu t'en rend pas compte quand on dort\n");
						printf("Point: %d\n\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					if (choix == 4){
						printf("Bien tu choisis d'utiliser un des tes joker. Voici deux réponses: (1) Le sommeil (2) Notre ame \n");
						scanf("%d",&choix);
							if (choix == 2){
								printf("Non c'est raté ! C'etait le sommeil, tu t'en rend pas compte quand on dort\n");
								printf("Point: %d\n\n",point);
								vie -= 1;
								printf("Vie: %d\n\n",vie);
							}
							if (choix == 1){
								printf("Bien vus mon pote!\n");
								point += 5;
								printf("Point: %d\n",point);
							}
							joker-= 1;
								if (joker == 1){
									printf("Il te reste %d joker \n\n",joker);
								}
								if (joker == 0){
									printf("Tu n'as plus de Joker \n\n");
								}
						}
					if (vie == 0){
						printf("TU AS PERDU	\n\n");
						printf(" Tu as accumulé un total de %d points ! Pas mal ! Défie tes potes de faire mieux ! \n\n",point);
						return 1;
					}


// Devinette 11

			printf("---------------Devinette n°11---------------\n\n");	

			printf("Si on me laisse je ravage et si on me donne à boire je meurs.\nQui suis-je ?  \n\n");
			printf("!!reponse!!\n\n");
			printf("(1) L'acide  (2) La solitude  (3) Le feu (4) Joker  \n\n");
				scanf("%d",&choix);
					if (choix == 1){
						printf("Non c'est raté ! C'etait le feu man !\n");
						printf("Point: %d\n\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					if (choix == 2){
						printf("Non c'est raté ! C'etait le feu man ! \n");
						printf("Point: %d\n\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					if (choix == 3){
						printf("Bien vus mon pote!\n");
						point += 5;
						printf("Point: %d\n",point);
					}
					if (choix == 4){
						printf("Bien tu choisis d'utiliser un des tes joker. Voici deux réponses: (1) L'acide (3) Le feu \n");
						scanf("%d",&choix);
							if (choix == 1){
								printf("Non c'est raté ! C'etait le feu man !\n");
								printf("Point: %d\n\n",point);
								vie -= 1;
								printf("Vie: %d\n\n",vie);
							}
							if (choix == 3){
								printf("Bien vus mon pote!\n");
								point += 5;
								printf("Point: %d\n",point);
							}
							joker-= 1;
								if (joker == 1){
									printf("Il te reste %d joker \n\n",joker);
								}
								if (joker == 0){
									printf("Tu n'as plus de Joker \n\n");
								}
						}
					if (vie == 0){
						printf("TU AS PERDU	\n\n");
						printf(" Tu as accumulé un total de %d points ! Pas mal ! Défie tes potes de faire mieux ! \n\n",point);
						return 1;
					}

// Devinette 12

			printf("---------------Devinette n°12---------------\n\n");	

			printf("Je ne suis pas humain. J'ai deux jambes, mais je ne marche pas.\nQui suis-je ?  \n\n");
			printf("!!reponse!!\n\n");
			printf("(1) Un singe  (2) Un pantalon  (3) Une ombre (4) Joker  \n\n");
				scanf("%d",&choix);
					if (choix == 1){
						printf("Non c'est raté ! C'etait un pantalon, bah oue il marche pas tout seul.\n");
						printf("Point: %d\n\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					if (choix == 2){
						printf("Bien vus mon pote!\n");
						point += 5;
						printf("Point: %d\n",point);
					}
					if (choix == 3){
						printf("Non c'est raté ! C'etait un pantalon, bah oue il marche pas tout seul. \n");
						printf("Point: %d\n\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					if (choix == 4){
						printf("Bien tu choisis d'utiliser un des tes joker. Voici deux réponses: (1) Un singe (2) Un pantalon \n");
						scanf("%d",&choix);
							if (choix == 1){
								printf("Non c'est raté ! C'etait un pantalon, bah oue il marche pas tout seul.\n");
								printf("Point: %d\n\n",point);
								vie -= 1;
								printf("Vie: %d\n\n",vie);
							}
							if (choix == 2){
								printf("Bien vus mon pote!\n");
								point += 5;
								printf("Point: %d\n",point);
							}
							joker-= 1;
								if (joker == 1){
									printf("Il te reste %d joker \n\n",joker);
								}
								if (joker == 0){
									printf("Tu n'as plus de Joker \n\n");
								}
						}
					if (vie == 0){
						printf("TU AS PERDU	\n\n");
						printf(" Tu as accumulé un total de %d points ! Pas mal ! Défie tes potes de faire mieux ! \n\n",point);
						return 1;
					}

// Devinette 13

			printf("---------------Devinette n°13---------------\n\n");	

			printf("Souvent associé au printemps,\nOn peut aussi plonger dedans.\nTrès utile pour la pâtisserie,\nIl peut servir à se plaindre.\n Qui suis-je ?  \n\n");
			printf("!!reponse!!\n\n");
			printf("(1) Une feuille   (2) Un rouleau  (3) Des cerises (4) Joker  \n\n");
				scanf("%d",&choix);
					if (choix == 1){
						printf("Non c'est raté ! C'etait un rouleau !\n");
						printf("Point: %d\n\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					if (choix == 2){
						printf("Bien vus mon pote!\n");
						point += 5;
						printf("Point: %d\n",point);
					}
					if (choix == 3){
						printf("Non c'est raté ! C'etait un rouleau !\n");
						printf("Point: %d\n\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					if (choix == 4){
						printf("Bien tu choisis d'utiliser un des tes joker. Voici deux réponses: (2) Un rouleau (3) Des cerises \n");
						scanf("%d",&choix);
							if (choix == 3){
								printf("Non c'est raté ! C'etait un rouleau !\n");
								printf("Point: %d\n\n",point);
								vie -= 1;
								printf("Vie: %d\n\n",vie);
							}
							if (choix == 2){
								printf("Bien vus mon pote!\n");
								point += 5;
								printf("Point: %d\n",point);
							}
							joker-= 1;
								if (joker == 1){
									printf("Il te reste %d joker \n\n",joker);
								}
								if (joker == 0){
									printf("Tu n'as plus de Joker \n\n");
								}
						}
					if (vie == 0){
						printf("TU AS PERDU	\n\n");
						printf(" Tu as accumulé un total de %d points ! Pas mal ! Défie tes potes de faire mieux ! \n\n",point);
						return 1;
					}

// Devinette 14

			printf("---------------Devinette n°14---------------\n\n");	

			printf("Elles nous entourent, elles sont partout,\nElles donnent de la vie à tout.\nSans elles le monde serait sombre\nEt ressemblerait à une ombre.\n Qui suis-je ?  \n\n");
			printf("!!reponse!!\n\n");
			printf("(1) Les couleurs  (2) Les meres  (3) Les lunettes  (4) Joker  \n\n");
				scanf("%d",&choix);
					if (choix == 1){
						printf("Bien vus mon pote!\n");
						point += 5;
						printf("Point: %d\n",point);
					}
					if (choix == 2){
						printf("Non c'est raté ! Et oui tout serait sombre sans couleurs !\n");
						printf("Point: %d\n\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					if (choix == 3){
						printf("Non c'est raté ! Et oui tout serait sombre sans couleurs !\n");
						printf("Point: %d\n\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					if (choix == 4){
						printf("Bien tu choisis d'utiliser un des tes joker. Voici deux réponses: (1) Les couleurs (2) Les meres \n");
						scanf("%d",&choix);
							if (choix == 2){
								printf("Non c'est raté ! Et oui tout serait sombre sans couleurs !\n");
								printf("Point: %d\n\n",point);
								vie -= 1;
								printf("Vie: %d\n\n",vie);
							}
							if (choix == 1){
								printf("Bien vus mon pote!\n");
								point += 5;
								printf("Point: %d\n",point);
							}
							joker-= 1;
								if (joker == 1){
									printf("Il te reste %d joker \n\n",joker);
								}
								if (joker == 0){
									printf("Tu n'as plus de Joker \n\n");
								}
						}
					if (vie == 0){
						printf("TU AS PERDU	\n\n");
						printf(" Tu as accumulé un total de %d points ! Pas mal ! Défie tes potes de faire mieux ! \n\n",point);
						return 1;
					}

// Devinette 15

			printf("---------------Devinette n°15---------------\n\n");	

			printf("Je suis très léger, mais pourtant ni la magie d'une fée, ni la force d'un géant ne peuvent me porter.\nQui suis-je ?  \n\n");
			printf("!!reponse!!\n\n");
			printf("(1) L'ombre  (2) Les nuages  (3) L'air  (4) Joker  \n\n");
				scanf("%d",&choix);
					if (choix == 1){
						printf("Non c'est raté ! C'était l'air ! \n");
						printf("Point: %d\n\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					if (choix == 2){
						printf("Non c'est raté ! C'était l'air !\n");
						printf("Point: %d\n\n",point);
						vie -= 1;
						printf("Vie: %d\n\n",vie);
					}
					if (choix == 3){
						printf("Bien vus mon pote!\n");
						point += 5;
						printf("Point: %d\n",point);
					}
					if (choix == 4){
						printf("Bien tu choisis d'utiliser un des tes joker. Voici deux réponses: (2) Les nuages (3) L'air \n");
						scanf("%d",&choix);
							if (choix == 2){
								printf("Non c'est raté !C'était l'air !\n");
								printf("Point: %d\n\n",point);
								vie -= 1;
								printf("Vie: %d\n\n",vie);
							}
							if (choix == 3){
								printf("Bien vus mon pote!\n");
								point += 5;
								printf("Point: %d\n",point);
							}
							joker-= 1;
								if (joker == 1){
									printf("Il te reste %d joker \n\n",joker);
								}
								if (joker == 0){
									printf("Tu n'as plus de Joker \n\n");
								}
						}
					if (vie == 0){
						printf("TU AS PERDU	\n\n");
						printf(" Tu as accumulé un total de %d points ! Pas mal ! Défie tes potes de faire mieux ! \n\n",point);
						return 1;
					}

printf("----------------------------Fin du jeu---------------------------- \n\n");
if (point == 15){
	printf(" Tu as accumulé un total de %d points ! TROP FORT ! T ES LE(LA) KING !!! Fait attention à ne pas te faire détrôner !!\n\n",point);
	printf("----------------------------BYE---------------------------- \n\n");
}
else {
	printf(" Tu as accumulé un total de %d points ! Pas mal ! Défie tes potes de faire mieux ! \n\n",point);
	printf("----------------------------BYE---------------------------- \n\n");
}
return 1;




		
	}		
return 0;
}























	
