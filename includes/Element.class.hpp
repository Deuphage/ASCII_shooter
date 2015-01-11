/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Element.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marene <marene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:25:12 by marene            #+#    #+#             */
/*   Updated: 2015/01/10 15:31:10 by marene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ELEMENT_CLASS_HPP
# define ELEMENT_CLASS_HPP

class	Element
{
	protected:
		int					_X;
		int					_Y;
		char				_symbol;
	public:
		Element();
		Element(int X, int Y, char c);
		Element(Element const& src);
		virtual ~Element();
		Element&			operator=(Element const& rh);
		int					getX() const;
		int					getY() const;
		char				getSymbol() const;
		void				setX(int X);
		void				setY(int Y);
		void				setSymbol(char _symbol);
};

#endif /* !ELEMENT_CLASS_HPP */
