/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Element.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marene <marene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:30:05 by marene            #+#    #+#             */
/*   Updated: 2015/01/10 15:35:36 by marene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Element.class.hpp>

Element::Element(): _X(0), _Y(0) ,_symbol('<')
{}

Element::Element(int X, int Y, char c): _X(X), _Y(Y), _symbol(c)
{}

Element::Element(Element const& src)
{
	this->_X = src.getX();
	this->_Y = src.getY();
	this->_symbol = src.getSymbol();
}

Element::~Element()
{
	return ;
}

Element&			Element::operator=(Element const& rh)
{
	this->_X = rh.getX();
	this->_Y = rh.getY();
	return (*this);
}

int					Element::getX() const
{
	return (this->_X);
}

int					Element::getY() const
{
	return (this->_Y);
}

char				Element::getSymbol() const
{
	return (this->_symbol);
}

void				Element::setX(int X)
{
	this->_X = X;
}

void				Element::setSymbol(char c)
{
	this->_symbol = c;
}

void				Element::setY(int Y)
{
	this->_Y = Y;
}
