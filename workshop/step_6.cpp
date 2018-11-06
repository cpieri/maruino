/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   step_6.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: delay <clement@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/09/21 11:27:16 by delay        #+#   ##    ##    #+#       */
/*   Updated: 2018/10/25 16:17:49 by delay       ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./includes/game.hpp"

Map*		maps = new Map();
Character*	licorne = new Unicorn();
World*		earth = new World(licorne, maps);

void setup() {
	gb.begin();
	earth->start_game();
}

void loop() {
	while (!gb.update());
	gb.display.clear();

	if (gb.buttons.repeat(BUTTON_RIGHT, 1))
		licorne->run(maps->getStarterMap());
	if (gb.buttons.repeat(BUTTON_LEFT, 1))
		licorne->moveBack(maps->getStarterMap());
	if (gb.buttons.pressed(BUTTON_A))
		licorne->jump();
	if (gb.buttons.pressed(BUTTON_MENU))
		earth->restart_game();
	earth->print_sky();
	maps->print();
	licorne->print();
	earth->add_physical();
	earth->check_end();
}