/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marene <marene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 13:33:33 by marene            #+#    #+#             */
/*   Updated: 2015/01/11 16:46:35 by marene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROJECTILE_CLASS_HPP
# define PROJECTILE_CLASS_HPP

#include "Element.class.hpp"

class	Projectile: public Element
{
	protected:
		int					_nextX;
		int					_nextY;
		int					_speed;		//speed is the number of frame a projectile
		int const			_maxSpeed;	//to move one square
	public:
		Projectile();
		Projectile(int x, int y, char symbol);
		Projectile(Projectile const& src);
		virtual ~Projectile();
		Projectile&			operator=(Projectile const& rh);
		int					getNextX() const;
		int					getNextY() const;
		int					getSpeed() const;
		int					getMaxSpeed() const;

		void				setNextX(int next);
		void				setNextY(int next);
		void				setSpeed(int speed);
		void				setMaxSpeed(int maxSpeed);
};

#endif /* !PROJECTILE_CLASS_HPP */
