#include "EventManager.h"

Event<int, int> EventManager::onMousePressed;
Event<int, int> EventManager::onMouseReleased;
Event<int, int> EventManager::onMouseMove;
Event<int, int, float, float> EventManager::onMouseScrolled;
Event<int, int> EventManager::onMouseDragged;
Event<int, int> EventManager::onWindowResized;

Event<IRenderable*> EventManager::onRendarableCreated;
Event<IRenderable*> EventManager::onRendarableDestroyed;
Event<GameObject*> EventManager::onObjectCreated;
Event<GameObject*> EventManager::onObjectDestroyed;