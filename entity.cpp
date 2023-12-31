#include "entity.h"


Vector2f PADDLE_INIT_POS = Vector2f(400, 550);
float PADDLE_SPEED = 288.0f;

Vector2f BALL_INIT_POS = Vector2f(400, 300);
Vector2f BALL_SCALE = Vector2f(0.1f, 0.1f);
float BALL_SPEED = 350.0f;

Vector2f FIRST_BRICK_POS = Vector2f(0, 100);
Vector2f BRICK_SIZE = Vector2f(75.f, 25.f);
bool Entity::Colliding(FloatRect& rect)
{
	return this->getGlobalBounds().intersects(rect);
}

void Entity::setStatus(bool status)
{
	this->is_existing = status;
}
void Entity::changeStatus()
{
	this->is_existing = !this->is_existing;
}

bool Entity::getStatus()
{
	return this->is_existing;
}
