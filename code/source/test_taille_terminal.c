/**
 * \file test_taille_terminal.c
 * \brief Test pour savoir si le terminal est assez grand pour pouvoir jouer sinon redimansionner quitter et relancer
 * \author LARDY Anthony
 * \author TROTTIER Arthur
 * \author SEBILLE Florian
 * \version 1.0.1
 */

#include "total.h"

int taille_terminal(){

  if(LINES < 36 || COLS < 179){
    endwin();
    printf("\n\n");
    printf("Votre terminal est trop petit.\n");
    printf("Il fait %i colonnes et %i lignes.\n",COLS,LINES);
    printf("Veuillez le redimensionner pour avoir au moins.\n");
    printf("180 colonnes et 37 lignnes. Puis relancer.\n");
    printf("\n\n");
    return 0;
  }else{
    return 1;
  }
}
