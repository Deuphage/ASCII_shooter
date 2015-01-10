// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/10 12:25:08 by kescalie          #+#    #+#             //
//   Updated: 2015/01/10 19:08:54 by kescalie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

#define LEFT 68
#define UP 65
#define RIGHT 67
#define DOWN 66
#define ECHAP 27

int main()
{
	int i = 1;
	int border = 0;
	int life = 3;
	int x = 0; // les coordonnees du vaisseau
	int y = 0;

	int Ox = 0;// les coordonnes du caillou
	int Oy = 0;
	int max_y = 0; // les max de la fenetre
	int max_x = 0;

	int next_x = 0; // pour le calcul de collision,
	int next_Ox = 0; // coordonnees d'apres

	int direction = 1; //A la fois sens et vitesse
	int Odirection = -1;// le caillou va donc vers le vaisseau

	int ch; //Variable qui stock les input
	srand(time(0)); // initialisation de l'aleatoire
	initscr(); //init la fenetre
	noecho(); //n'imprime pas les input
	curs_set(FALSE); // pas de curseur
	timeout(5); /* timeout sur l'input, il attend pas forcement une touche
				** il chope un input toutes les 5 microsecondes soit
				** soit beaucoup de fois par seconde.
				*/
	getmaxyx(stdscr, max_y, max_x); // initialise aux dimensions de la fenetre courante
	Ox = max_x; //le caillou commence au bord de la map
	Oy = rand() % 4; // sur une ligne aleatoire
	while (i)
	{
		getmaxyx(stdscr, max_y, max_x); //redimensionnement
		clear(); // devine
		ch = getch(); // acquisition de l'input

		if (ch != ERR) // si le timeout est depasse, renvoie ERR
		{
			if (ch == 'd' || ch == RIGHT)
			{
				next_x = x + direction; // on check que le deplacement est possible
				if (next_x < max_x) // et on bouge que si possible
					x += direction;
			}
			if (ch == 'w' || ch == UP)
			{
				if (y > 0)
					y--;
			}
			if (ch == 's' || ch == DOWN)
			{
				if (y < 4) //cette valeur est arbitraire. Dans l'ideal ce sera plus grand
					y++;
			}
			if (ch == 'a' || ch == LEFT)
			{
				next_x = x - direction;
				if (next_x > 0)
					x -= direction;
			}
		}
		next_Ox = Ox + Odirection;
		if (next_Ox > 0)
			Ox += Odirection;
		else
		{
			Ox = max_x;
			Oy = rand() % 4;
		}
		if (Ox == x && Oy == y)// Collision caillou/vaisseau = DEATH
		{
			life -= 1;
			Ox = max_x;
			Oy = rand() % 4;
			if (life == 0)
			{
				i = 0;
				mvprintw(max_y / 2, max_x / 2, "GAME OVER !!!");
				refresh();
				sleep(3);
			}
		}
		mvprintw(y, x , ">");
		mvprintw(Oy, Ox, "O");
		border = 0;
		while (border < max_x) // Creation de la bordure
		{
			mvprintw(5, border, "#");
			border++;
		}
		mvprintw(7, 0,"Life(s): %d", life);
		refresh();
		usleep(30000);
	}

	endwin();
}
