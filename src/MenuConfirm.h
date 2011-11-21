/*
Copyright 2011 Clint Bellanger

This file is part of FLARE.

FLARE is free software: you can redistribute it and/or modify it under the terms
of the GNU General Public License as published by the Free Software Foundation,
either version 3 of the License, or (at your option) any later version.

FLARE is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
FLARE.  If not, see http://www.gnu.org/licenses/
*/

#ifndef MENU_CONFIRM_H
#define MENU_CONFIRM_H

#include "Menu.h"
#include "WidgetButton.h"
#include <SDL_image.h>


class MenuConfirm : public Menu {
protected:
	void loadGraphics();

	WidgetButton *buttonConfirm;
	WidgetButton *buttonClose;

	string boxMsg;
public:
	MenuConfirm(string, string);
	~MenuConfirm();

	void logic();
	virtual void render();

	bool confirmClicked;
};

#endif
