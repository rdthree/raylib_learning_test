#ifndef BASE_CHARACTER_H
#define BASE_CHARACTER_H
#include "raylib.h"

class BaseCharacter
{
private:

protected:
    Texture2D texture{LoadTexture("characters/knight_idle_spritesheet.png")};
    Texture2D idle{LoadTexture("characters/knight_idle_spritesheet.png")};
    Texture2D run{LoadTexture("characters/knight_run_spritesheet.png")};
    Vector2 screenPos{};         //where to locate the character on the screen
    Vector2 worldPos{};          //used to get the map vector
    Vector2 worldPosLastFrame{}; // for map boundary limits
    Vector2 charOrigin{};        //to draw character with DrawTexturePro
    float charScale{4.0};
    int charSprites{6};
    float rightleft{1.0f}; //right = 1, left = -1

    //animation
    float runningTime{};
    int frame{};
    float speed{2.0f};
    float width{};
    float height{};
    const int maxFrames{charSprites};
    const float updateTime{1.0f / 16.0f};

public:
    //BaseCharacter(int screenW, int screenH);
    BaseCharacter();
    Vector2 getWorldPos() { return worldPos; }
    //void tick(float dt);
    Rectangle collisionRectangle{};
    void undoMovement(); // map boundaries
};

#endif