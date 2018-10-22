/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   map.hpp                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 14:56:39 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 14:15:29 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef __MAP_HPP__
# define __MAP_HPP__

# include "vector2d.hpp"
# include "macro.hpp"
# include "image.hpp"
# include <Gamebuino-Meta.h>


class Map
{
	private:
		int			_starter;
		int const	_len;
		Vector2d	_size;
		Vector2d	_pos;
		int const *	_map;
		int const *	_bad;

	public:
		Map(void);
		~Map(void);

		void	print(void);
		int&	getStarterMap(void);
		int		getEarth(int character_pos);
		bool	checkBadExist(int character_pos);
};

#endif