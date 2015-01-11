/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marene <marene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 14:54:00 by marene            #+#    #+#             */
/*   Updated: 2015/01/10 17:36:39 by marene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Ship.class.hpp>

Ship::Ship(void): Element::Element()
{
	this->_nextX = 0;
	this->_speed = 1;
	this->_maxSpeed = 3;
	// this->_weapon = Weapon();
}

Ship::Ship(int X, int Y, char symbol): Element::Element(X, Y, symbol)
{
	this->_nextX = 0;
	this->_speed = 1;
	this->_maxSpeed = 3;
	// this->_weapon = Weapon();
}

Ship::Ship(Ship const& src): Element(src)
{
	this->_speed = src.getSpeed();
	this->_maxSpeed = src.getMaxSpeed();
	// this->_weapon = src.getWeapon();
}

Ship&			Ship::operator=(Ship const& rh)
{
	this->_X = rh.getX();
	this->_Y = rh.getY();
	this->_symbol = rh.getSymbol();
	this->_speed = rh.getSpeed();
	this->_maxSpeed = rh.getMaxSpeed();
	// this->_weapon = rh.getWeapon();

	return (*this);
}

Ship::~Ship()
{

}

int				Ship::getNextX() const
{
	return (this->_nextX);
}

int				Ship::getNextY() const
{
	return (this->_nextY);
}

int				Ship::getSpeed() const
{
	return (this->_speed);
}

int				Ship::getMaxSpeed() const
{
	return (this->_maxSpeed);
}

// Weapon&			Ship::getWeapon() const
// {
// 	return (this->_weapon);
// }

void			Ship::setSpeed(int speed)
{
	this->_speed = speed;
}

void			Ship::setNextX(int next)
{
	this->_nextX = next;
}

void			Ship::setNextY(int next)
{
	this->_nextY = next;
}

// void			Ship::setWeapon(Weapon const& weapon)
// {
// 	this->_weapon = weapon;
// }
