/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   world.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpieri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 17:11:06 by cpieri            #+#    #+#             */
/*   Updated: 2018/09/16 17:29:54 by cpieri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__WORLD_HPP__
# define __WORLD_HPP__

class	World
{
	protected:
		int const	len;
		int*		map;
		int			difficulty;

	public:
		World(void);
		~World(void);

		void		generate_map(int const difficulty);
}

#endif
