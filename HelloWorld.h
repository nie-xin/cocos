#ifndef __HELLOWORLD_H__
#define __HELLOWORLD_H__
#include "cocos2d.h"

using namespace cocos2d;

class HelloWorld : public cocos2d::CCLayer {
protected:
	int _score;

public:
	HelloWorld();
	~HelloWorld();

	virtual bool init();
	static cocos2d::CCScene* scene();
	void update(float dt);
	inline int addTwoIntegers (int one, int two) {
		return one + two;
	}
};
#endif // __HELLOWORLD_H__