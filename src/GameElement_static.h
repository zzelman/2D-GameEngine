#ifndef GAMEELEMENT_STATIC_H_
#define GAMEELEMENT_STATIC_H_

#include "Physics/CCollidable.h"

class GameElement_static: public engine::CCollidable
{
public:
	GameElement_static(CSprite* sprite, sf::RenderWindow* window);

	void render();
private:
	sf::RenderWindow* m_pWindow;
	CSprite* m_pSprite;
};

#endif /* GAMEELEMENT_STATIC_H_ */
