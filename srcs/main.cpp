// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kescalie <kescalie@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/11 11:32:52 by kescalie          #+#    #+#             //
//   Updated: 2015/01/11 11:38:43 by kescalie         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <iostream>
#include "Element.class.hpp"
#include "Ship.class.hpp"

#define LEFT 68
#define UP 65
#define RIGHT 67
#define DOWN 66
#define ECHAP 27

int main ()
{
	Ship	hero(0, 0, '>');
	Ship *enemy= new Ship[10];
	int max_x = 0;
	int max_y = 0;
	int i = 0;
	int collision = 0;
	int game = 1;
	int ch;

	max_y = max_y;
	srand(time(0));
	initscr();
	noecho();
	curs_set(FALSE);
	timeout(5);

	getmaxyx(stdscr, max_y, max_x);

	while (i < 10)
	{
		enemy[i].setX(rand() % (max_x - 5) + max_x);
		enemy[i].setY(rand() % 10);
		i++;
	}
	while (game)
	{
		getmaxyx(stdscr, max_y, max_x);
		clear();
		ch = getch();
		if (ch != ERR) // si le timeout est depasse, renvoie ERR
		{
			if (ch == 'd' || ch == RIGHT)
			{
				hero.setNextX(hero.getNextX() + hero.getSpeed()); // on check que le deplacement est possible
				if (hero.getNextX() < max_x) // et on bouge que si possible
					hero.setX(hero.getX() + hero.getSpeed());
			}
			if (ch == 'w' || ch == UP)
			{
				if (hero.getY() > 0)
					hero.setY(hero.getY() - 1);
			}
			if (ch == 's' || ch == DOWN)
			{
				if (hero.getY() < 10) //cette valeur est arbitraire. Dans l'ideal ce sera plus grand
					hero.setY(hero.getY() + 1);
			}
			if (ch == 'a' || ch == LEFT)
			{
				hero.setNextX(hero.getNextX() - hero.getSpeed()); // on check que le deplacement est possible
				if (hero.getNextX() > 0) // et on bouge que si possible
					hero.setX(hero.getX() - hero.getSpeed());
			}
		}
		i = 0;
		while (i < 10)
		{
			enemy[i].setNextX(enemy[i].getX() - enemy[i].getSpeed());
			if (enemy[i].getNextX() > 0)
			{
				enemy[i].setX(enemy[i].getX() - enemy[i].getSpeed());
			}
			else
			{
				enemy[i].setX(rand() % max_x);
				enemy[i].setY(rand() % 10);
			}
			if (enemy[i].getX() == hero.getX() && enemy[i].getY() == hero.getY())
			{
				collision++;
			}
			mvprintw(enemy[i].getY(), enemy[i].getX(), "%c", enemy[i].getSymbol());
			i++;
		}
		i = 0;
		while (i < max_x) // Creation de la bordure
		{
			mvprintw(11, i, "#");
			i++;
		}
		mvprintw(hero.getY(), hero.getX() , "%c", hero.getSymbol());
		mvprintw(11, 0 , "DEAD: %d", collision);
		refresh();
		usleep(30000);
	}

	delete [] enemy;
	endwin();
	return (0);
}
