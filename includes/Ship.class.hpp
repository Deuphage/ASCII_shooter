/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marene <marene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 14:54:41 by marene            #+#    #+#             */
/*   Updated: 2015/01/10 15:41:11 by marene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHIP_CLASS_HPP
# define SHIP_CLASS_HPP

# include <Element.class.hpp>
//# include <Weapon.class.hpp>

class	Ship: public Element
{
	protected:
		int				_nextX;
		int				_nextY;
		int				_speed;		//| speeds are the number of frames a ship
		int				_maxSpeed;	//| takes to move from one case
		//Weapon&			_weapon;
	public:
		Ship(void);
		Ship(int x, int y, char c);
		Ship(Ship const& src);
		virtual ~Ship(void);
		Ship&			operator=(Ship const& rh);
		int				getSpeed() const;
		int				getMaxSpeed() const;
		int				getNextX() const;
		int				getNextY() const;


		//Weapon&			getWeapon() const;
		void			setSpeed(int speed);
		void			setNextX(int next);
		void			setNextY(int next);
		//void			setWeapon(Weapon const& weapon);
};

#endif /* !SHIP_CLASS_HPP */
