/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marene <marene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 17:45:53 by marene            #+#    #+#             */
/*   Updated: 2015/01/10 17:55:15 by marene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.class.hpp"

Weapon::Weapon(): _name("Laser cannon"), _proj()
{
	return ;
}

Weapon::Weapon(std::string const& name, Projectile const& proj): _name(name),
	_proj(proj)
{
	return ;
}

Weapon::Weapon(Weapon const& src)
{
	this->_name = src.getName();
	this->_proj = src.getProj();
}

Weapon::~Weapon()
{
	return ;
}

Weapon&				Weapon::operator=(Weapon const& rh)
{
	this->_name = rh.getName();
	this->_proj = rh.getProj();
	return (*this);
}

std::string&		Weapon::getName() const
{
	return (this->_name);
}

Projectile&			Weapon::getProj() const
{
	return (this->_proj);
}

void				Weapon::setName(std::string const& name)
{
	this->_name = name;
}

void				Weapon::setProj(Projectile const& proj)
{
	this->_proj = proj;
}
