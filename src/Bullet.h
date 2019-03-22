#pragma once

#include "GameObject.h"
#include "Collider.h"
#include "ofVectorMath.h"
#include "ofImage.h"
#include "Team.h"

class Bullet : public GameObject, public Team {
private:

	ofImage* m_image;
	Collider m_collider;
	ofVec2f m_position;
	float m_rotation;
	float m_speed = 600.0f;	

public:
	Bullet(const ofVec2f& position, const float& rotation, TEAM team);
	~Bullet();

	// Inherited via GameObject
	virtual void setup() override;
	virtual void update(float dt) override;
	virtual void draw() override;
};

