#pragma once

#include "cocos2d.h"
USING_NS_CC;
#define SIZE Director::getInstance()->getVisibleSize()

class WelcomeLayer: public Layer
{

public:

	WelcomeLayer();
	~WelcomeLayer();
	virtual bool init();
	static Scene* createScene();
	CREATE_FUNC(WelcomeLayer);

	void addUI();
	void btnCallback(Ref* sender);
private:

};

