#pragma once

#include "gameobject.h"

class Targets : public GameObject
{
	float posx_target, posy_target;
public:
	Targets(const class Game& mygame);
	void update() override;
	void draw() override;
	void init() override;
};