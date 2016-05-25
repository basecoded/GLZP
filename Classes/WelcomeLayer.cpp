#include "WelcomeLayer.h"
#include "HelloWorldScene.h"
#include "ui/UIButton.h"
using namespace ui;
WelcomeLayer::WelcomeLayer()
{
}

WelcomeLayer::~WelcomeLayer()
{
}

bool WelcomeLayer::init()
{
	if (!Layer::init())
	{
		return false;
	}
	addUI(); 
	return true;
}
Scene* WelcomeLayer::createScene()
{
	// 'scene' is an autorelease object
	auto scene = Scene::create();

	// 'layer' is an autorelease object
	auto layer = WelcomeLayer::create();

	// add layer as a child to scene
	scene->addChild(layer);

	// return the scene
	return scene;
}

void WelcomeLayer::addUI()
{
	auto btn = Button::create("CloseNormal.png");
	btn->addClickEventListener(CC_CALLBACK_1(WelcomeLayer::btnCallback,this));
	btn->setScale(5.0f);
	addChild(btn);
	btn->setPosition(Vec2(SIZE.width / 2, SIZE.height / 2));
}

void WelcomeLayer::btnCallback(Ref* sender)
{
	auto s = HelloWorld::createScene();
	Director::getInstance()->replaceScene(s);
}