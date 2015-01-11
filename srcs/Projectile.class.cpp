/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marene <marene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 13:53:55 by marene            #+#    #+#             */
/*   Updated: 2015/01/11 17:15:40 by marene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Projectile.class.hpp>

Projectile::Projectile(): Element(), _speed(1), _maxSpeed(5)
{
	return ;
}

Projectile::Projectile(int x, int y, char symbol): Element(x, y, symbol),
 _speed(1), _maxSpeed(5)
{
	return ;
}

Projectile::Projectile(Projectile const& src): Element(src),
	_maxSpeed(src.getMaxSpeed())
{
	this->_speed = src.getSpeed();
}

Projectile::~Projectile()
{
	return ;
}

Projectile&		Projectile::operator=(Projectile const& rh)
{
	this->_speed = rh.getSpeed();
	if (this->_speed > this->_maxSpeed)
		this->_speed = this->_maxSpeed;
	return (*this);
}

int				Projectile::getNextX() const
{
	return (this->_nextX);
}

int				Projectile::getNextY() const
{
	return (this->_nextY);
}

int				Projectile::getSpeed() const
{
	return (this->_speed);
}

int				Projectile::getMaxSpeed() const
{
	return (this->_maxSpeed);
}

void			Projectile::setSpeed(int speed)
{
	if (speed > this->_maxSpeed)
		this->_speed = this->_maxSpeed;
	else
		this->_speed = speed;
}

void			Projectile::setNextX(int next)
{
	this->_nextX = next;
}

void			Projectile::setNextY(int next)
{
	this->_nextX = next;
}