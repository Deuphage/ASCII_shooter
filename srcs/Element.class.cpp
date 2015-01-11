/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Element.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marene <marene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:30:05 by marene            #+#    #+#             */
/*   Updated: 2015/01/11 16:43:14 by marene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Element.class.hpp>

Element::Element(): _X(0), _Y(0), _visual('<')
{}

Element::Element(int X, int Y, char visual): _X(X), _Y(Y),
	_visual(visual)
{}

Element::Element(Element const& src)
{
	this->_X = src.getX();
	this->_Y = src.getY();
	this->_visual = src.getVisual();
}

Element::~Element()
{
	return ;
}

Element&			Element::operator=(Element const& rh)
{
	this->_X = rh.getX();
	this->_Y = rh.getY();
	this->_visual = rh.getVisual();
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

char			Element::getVisual() const
{
	return (this->_visual);
}

void				Element::setX(int X)
{
	this->_X = X;
}

void				Element::setY(int Y)
{
	this->_Y = Y;
}

void				Element::setVisual(char visual)
{
	this->_visual = visual;
}
