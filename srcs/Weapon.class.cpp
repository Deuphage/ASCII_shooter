/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marene <marene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 17:45:53 by marene            #+#    #+#             */
/*   Updated: 2015/01/11 17:31:56 by marene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.class.hpp"

Weapon::Weapon(): _name("Laser cannon"), _proj(), _dmg(0)
{
	return ;
}

Weapon::Weapon(std::string const& name, Projectile const& proj, int dmg):
	_name(name), _proj(proj), _dmg(dmg)
{
	return ;
}

Weapon::Weapon(Weapon const& src)
{
	this->_name = src.getName();
	this->_proj = src.getProj();
	this->_dmg = src.getDamage();
}

Weapon::~Weapon()
{
	return ;
}

Weapon&				Weapon::operator=(Weapon const& rh)
{
	this->_name = rh.getName();
	this->_proj = rh.getProj();
	this->_dmg = rh.getDamage();
	return (*this);
}

std::string			Weapon::getName() const
{
	return (this->_name);
}

Projectile			Weapon::getProj() const
{
	return (this->_proj);
}

int					Weapon::getDamage() const
{
	return (this->_dmg);
}

void				Weapon::setName(std::string const& name)
{
	this->_name = name;
}

void				Weapon::setProj(Projectile const& proj)
{
	this->_proj = proj;
}

void				Weapon::setDamage(int dmg)
{
	this->_dmg = dmg;
}
