#include "HelloWorld.h"

HelloWorld::HelloWorld() {

}

HelloWorld::~HelloWorld() {

} 

CCScene* HelloWorld::scene() {
	CCScene *scene = CCScene::create();

	HelloWorld *layer = HelloWorld::create();

	scene->addChild(layer);

	return scene;
}

bool HelloWorld::init() {
	if ( !CCLayer::init() ) {
		return false;
	}

	this->schedule(schedule_selector(HelloWorld::update));

	return true;
}

void HelloWorld::update(float dt) {
	
}