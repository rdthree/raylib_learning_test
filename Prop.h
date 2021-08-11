#include "raylib.h"
class Prop
{
public:
    Prop(Vector2 pos, Texture2D tex);
    void Render(Vector2 charVec);
    //void undoMovement();
    //void tick(float dt, Vector2 charVec);

private:
    Vector2 worldPos{};
    Texture2D texture{};
    //Vector2 worldPosLastFrame{};
    //float runningTime{};
    //const float updateTime{1.0f / 16.0f};
    Vector2 screenPos{};
    float scale{4.0f};
    //Vector2 origin{0.0f, 0.0f};
};
