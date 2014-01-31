#include "precompiled.h"


class Scene {
private:
    Collision[] collisions[]; // pekare?
    RigidBody[] bodies[];
    const float dt;

public:
    void checkCollisions();
    void applyForces();
    void integrateAcceleration();
    void integrateVelocities();
    void updatePosistions();
    void step();
    void draw();
}