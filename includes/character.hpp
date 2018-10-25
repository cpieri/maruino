/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   character.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 11:28:54 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/25 09:55:34 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__

# include <Gamebuino-Meta.h>
# include "vector2d.hpp"
# include "macro.hpp"

class Character
{
	protected:
		Vector2d	_pos;
		Vector2d	_size;
		Vector2d 	_world_pos;
		int			_life;
		int const	_damages;
		int const	_speed;
		bool		_is_run;
		bool		_is_move_back;
		bool		_is_fall;

	public:
		Character(int sizeX, int sizeY);
		~Character(void);

		virtual void	attack(void);
		virtual void	run(int& map_starter);
		virtual void	moveBack(int& map_starter);
		virtual void	jump(void);
		virtual void	sayHello(void) const;
		virtual void	print(void);

		int				getFoot(void);
		int				getWorldPosX(void);
		int				getWorldPosY(void);
		int&			get_posX(void);
		int&			getLife(void);
		int&			get_posY(void);
		bool&			getIsFall(void);
		bool&			getIsRun(void);
		bool&			getIsMoveBack(void);

		void			setWorldPosX(int x);
};

#endif