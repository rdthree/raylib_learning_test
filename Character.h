#include "raylib.h"
class Character
{
public:
    Character(int screenW, int screenH);
    Vector2 getWorldPos() { return worldPos; }
    void tick(float dt);
    void undoMovement(); // map boundaries

private:
    Texture2D texture{LoadTexture("characters/knight_idle_spritesheet.png")};
    Texture2D idle{LoadTexture("characters/knight_idle_spritesheet.png")};
    Texture2D run{LoadTexture("characters/knight_run_spritesheet.png")};
    Vector2 screenPos{}; //where to locate the character on the screen
    Vector2 worldPos{}; //used to get the map vector
    Vector2 worldPosLastFrame{}; // for map boundary limits
    Vector2 charOrigin{}; //to draw character with DrawTexturePro
    float charScale{4.0};
    int charSprites{6};
    //right = 1, left = -1
    float rightleft{1.0f};
    //animation
    float runningTime{};
    int frame{};
    float speed{2.0f};
    float width{};
    float height{};
    const int maxFrames{charSprites};
    const float updateTime{1.0f / 16.0f};
};

