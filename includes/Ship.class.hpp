/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marene <marene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 14:54:41 by marene            #+#    #+#             */
/*   Updated: 2015/01/11 17:25:17 by marene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHIP_CLASS_HPP
# define SHIP_CLASS_HPP

# include <string>
# include <Projectile.class.hpp>
# include <Weapon.class.hpp>

class	Ship: public Projectile
{
	protected:
		Weapon			_weapon;
	public:
		Ship();
		Ship(int x, int y, char symbol);
		Ship(Ship const& src);
		virtual ~Ship();
		Ship&			operator=(Ship const& rh);
		Weapon			getWeapon() const;
		void			setWeapon(Weapon const& weapon);
};

#endif /* !SHIP_CLASS_HPP */
