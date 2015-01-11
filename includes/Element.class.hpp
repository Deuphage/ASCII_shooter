/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Element.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marene <marene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:25:12 by marene            #+#    #+#             */
/*   Updated: 2015/01/11 16:41:31 by marene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ELEMENT_CLASS_HPP
# define ELEMENT_CLASS_HPP

# include <string>

class	Element
{
	protected:
		int					_X;
		int					_Y;
		char			_visual;
	public:
		Element();
		Element(int X, int Y, char visual);
		Element(Element const& src);
		virtual ~Element();
		Element&			operator=(Element const& rh);
		int					getX() const;
		int					getY() const;
		char			getVisual() const;
		void				setX(int X);
		void				setY(int Y);
		void				setVisual(char visual);
};

#endif /* !ELEMENT_CLASS_HPP */
