#include <ncurses.h>
#define TAILLE 100


void ecrire_chat(WINDOW *chatwin/*, int *ligne*/,char phrase[TAILLE]){

  int ligne = 1;
  int lignemax;
  int colonemax;

  int heightT = (int) LINES * 0.85;
  int widthT = (int) COLS * 0.2;

  int startyT = 2 ;	/* Dimensions et Position de la 3ème fenêtre */
  int startxT = (int) COLS * 0.697 ;

  getmaxyx(chatwin,lignemax,colonemax);

  mvwprintw(chatwin,ligne,1,"c");

  while(getch() != 'q'){
    if(ligne >= lignemax-1){

      wclear(chatwin);
      chatwin=create_newwin(heightT,widthT,startyT,startxT,"Chat");
      ligne = 1;
      mvwprintw(chatwin,ligne,1,"%s",phrase);

    }else {
      mvwprintw(chatwin,ligne,1,"%s",phrase);
      ligne = ligne + 1;
    }
    wrefresh(chatwin);
  }
}