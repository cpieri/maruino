/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   world.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/29 14:10:16 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/25 09:14:29 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

# include "./includes/world.hpp"
# include "./includes/level.hpp"

Image skyImage = Image(skyData);
Image le101 = Image(schoolData);

World::World(Character* character, Map* maps) : _character(character), _maps(maps), _gravity(1)
{
	return ;
}

World::~World(void)
{
	return ;
}

void	World::_set_gravity(void)
{
	this->_character->get_posY() += this->_gravity;
	return ;
}

void	World::_check_colision(void)
{
	int		character_foot;
	int		earth;
	int		next_earth;
	int		last_earth;

	character_foot = this->_character->getFoot();
	earth = this->_maps->getEarth(this->_character->getWorldPosX());
	next_earth = this->_maps->getEarth(this->_character->getWorldPosX() + 1);
	last_earth = this->_maps->getEarth(this->_character->getWorldPosX() - 1);
	if (character_foot < earth)
	{
		this->_set_gravity();
		this->_character->getIsFall() = false;
	}
	if (character_foot == earth)
		this->_character->getIsFall() = true;
	if (character_foot > next_earth)
		this->_character->getIsRun() = false;
	if (character_foot <= next_earth)
		this->_character->getIsRun() = true;
	if (character_foot > last_earth && this->_character->getWorldPosX() > 0)
		this->_character->getIsMoveBack() = false;
	if (character_foot <= last_earth && this->_character->getWorldPosX() > 0)
		this->_character->getIsMoveBack() = true;
	return ;
}

void	World::add_physical(void)
{
	this->_check_colision();
	return ;
}

void	World::print_sky(void) const
{
	gb.display.drawImage(0, 0, skyImage, WIDTH, HEIGHT);
}

void	World::restart_game(void)
{
	this->_maps->getStarterMap() = 0;
	this->_character->get_posX() = 0;
	this->_character->get_posY() = 0;
	this->_character->setWorldPosX(0);
	this->_character->getIsFall() = true;
	this->_character->getIsRun() = true;
	this->_character->getIsMoveBack() = true;
}

void	World::_happy_end(void)
{
	char 	text[] = "Winner";
	size_t length = sizeof(text) / sizeof(*text);
	uint8_t	w;
	uint8_t h;
	bool	iloop;

	iloop = true;
	gb.display.setFontSize(1);
	w = gb.display.getFontWidth();
	h = gb.display.getFontHeight();
	gb.display.clear();
	gb.display.setCursor(.5 * (WIDTH - (w * length)), .5 * (HEIGHT - h));
	gb.display.print(text);
	while (iloop)
	{
		while (!gb.update()){
			if (gb.buttons.pressed(BUTTON_A))
				iloop = false;
		}
	}
	this->_character->getLife() = 3;
	this->restart_game();
}

void	World::check_end(void)
{
	int		character_foot;
	int		the_bad;
	bool	bad;
	bool	flag;

	character_foot = this->_character->getFoot();
	bad = this->_maps->checkBadExist(this->_character->getWorldPosX());
	flag = this->_maps->checkFlagExist(this->_character->getWorldPosX());
	the_bad = this->_maps->getEarth(this->_character->getWorldPosX()) - S_BAD;
	if (character_foot >= HEIGHT || (bad && character_foot >= the_bad))
	{
		if (this->_character->getLife() > 0)
		{
			this->_character->getLife() -= 1;
			this->restart_game();
		}
		else if (this->_character->getLife() == 0)
			this->_game_over();
	}
	if (flag)
		this->_happy_end();
}

void	World::_game_over(void)
{
	char 	text[] = "GAME-OVER !!! ";
	size_t length = sizeof(text) / sizeof(*text);
	uint8_t	w;
	uint8_t h;
	bool	iloop;

	iloop = true;
	gb.display.setFontSize(1);
	w = gb.display.getFontWidth();
	h = gb.display.getFontHeight();
	gb.display.clear();
	gb.display.setCursor(.5 * (WIDTH - (w * length)), .5 * (HEIGHT - h));
	gb.display.print(text);
	while (iloop)
	{
		while (!gb.update()){
			if (gb.buttons.pressed(BUTTON_A))
				iloop = false;
		}
	}
	this->_character->getLife() = 3;
	this->restart_game();
}

void	World::start_game(void)
{
	int		centerX;
	int		centerY;
	bool	iloop;

	iloop = true;
	centerX = (WIDTH / 2) - (S_LE101 / 2);
	centerY = (HEIGHT / 2) - (S_LE101 / 2);
	gb.display.clear(WHITE);
	gb.display.drawImage(centerX, centerY, le101, S_LE101, S_LE101);
	while (iloop)
	{
		while (!gb.update()){
			if (gb.buttons.pressed(BUTTON_A))
				iloop = false;
		}
	}
}