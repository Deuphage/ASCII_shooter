/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marene <marene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 17:39:37 by marene            #+#    #+#             */
/*   Updated: 2015/01/10 17:52:32 by marene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

# include <string>

class	Weapon
{
	private:
		std::string			_name;
		Projectile			_proj;
	public:
		Weapon();
		Weapon(std::string const& name, Projectile const& proj);
		Weapon(Weapon const& arc);
		~Weapon();
		Weapon&				operator=(Weapon const& rh);
		std::string			getName() const;
		Projectile&			getProj() const;
		void				setName(std::string const& name);
		void				setProj(Projectile const& proj);
};

#endif /* WEAPON_CLASS_HPP */
