#pragma once
#include "Transform2D.h"
#include "Event.h"

struct Camera {
public:

    static Camera& mainCamera();

    Camera(ofVec2f position, float rotation, float scale, float windowW, float windowH);
    ~Camera();

    void bind();
    void unbind();
    void windowResized(int w, int h);

    ofVec2f screenToWorld(const ofVec2f& point);
    ofVec2f worldToScreen(const ofVec2f& point);
    ofVec2f halfScreenSize();

    Transform2D transform;

private:
    static Camera* s_instance;


    Event<int, int>::EventListener m_onWindowResizedCallback;
    ofVec2f m_halfWindowSize;
};