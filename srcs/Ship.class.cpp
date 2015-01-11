/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marene <marene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 14:54:00 by marene            #+#    #+#             */
/*   Updated: 2015/01/11 17:32:36 by marene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Ship.class.hpp>

Ship::Ship(): Projectile()
{
	Weapon	tmp = Weapon();
	this->_weapon = tmp;
}

Ship::Ship(int x, int y, char symbol): Projectile(x, y, symbol)
{
	Weapon	tmp = Weapon();
	this->_weapon = tmp;
}

Ship::Ship(Ship const& src): Projectile(src)
{
	this->_weapon = src.getWeapon();
}

Ship::~Ship()
{
	return ;
}

Ship&			Ship::operator=(Ship const& rh)
{
	this->_weapon = rh.getWeapon();
	return (*this);
}

Weapon			Ship::getWeapon() const
{
	return (this->_weapon);
}

void			Ship::setWeapon(Weapon const& weapon)
{
	this->_weapon = weapon;
}
