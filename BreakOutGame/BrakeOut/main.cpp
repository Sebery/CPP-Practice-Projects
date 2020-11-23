#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"


class BreakOut : public olc::PixelGameEngine
{
private:
    int margin{10};

    float playerPosX{20.0};
    float playerWidth{40.0};
    float playerHeight{10.0};
    float playerSpeed{120.0};
    float playerPosY{};

    float maxX{};
    float minX{};
    float maxY{};
    float minY{};

    olc::vf2d ballPos{128.0, 120.0};
    olc::vf2d  ballVelocity{-20.0, -35.0};
    float ballRadius{6.0};

    float ballMaxX{};
    float ballMinX{};
    float ballMinY{};

public:
    BreakOut() {
        sAppName = "BreakOut";
    }

public:
    bool OnUserCreate() override {
        maxX = ScreenWidth() - (float)margin - playerWidth - 1;
        minX = (float)margin + 1;
        playerPosY = ScreenHeight() - 20.0;

        ballMinY = (float)margin + ballRadius + 1;
        ballMaxX = ScreenWidth() - (float)margin - ballRadius - 1;
        ballMinX = (float)margin + 1 + ballRadius;

        return true;
    }

    bool OnUserUpdate(float fElapsedTime) override {
        //Moving The Player Around The X Axis
        if (GetKey(olc::Key::D).bHeld || GetKey(olc::Key::RIGHT).bHeld) playerPosX += playerSpeed * fElapsedTime;
        if (GetKey(olc::Key::A).bHeld || GetKey(olc::Key::LEFT).bHeld) playerPosX -= playerSpeed * fElapsedTime;

        //Checking For The Player Out Boundaries
        if (playerPosX >= maxX) playerPosX = maxX;
        if (playerPosX <= minX) playerPosX = minX;

        //Update The Ball
        ballPos += ballVelocity * fElapsedTime;

        //Check Ball Out Boundaries
        if (ballPos.y <= ballMinY) ballVelocity.y *= -1;
        if (ballPos.x >= ballMaxX || ballPos.x <= ballMinX) ballVelocity.x *= -1;

        //Reset Ball Position
        if (ballPos.y > ScreenHeight()) {
            ballPos.y = 120.0;
            ballVelocity = {20.0, -35.0};
        }

        //Check Player And Bat Collision
        if (ballPos.y >= (playerPosY - ballRadius) && ballPos.x > playerPosX && ballPos.x < (playerPosX + playerWidth)) {
            ballVelocity.y *= -1;
        }

        //Set Background Color
        Clear(olc::BLACK);

        //Draw Boundaries
        DrawLine(margin, margin, ScreenWidth() - margin, margin, olc::WHITE);
        DrawLine(margin, margin, margin, ScreenHeight() - margin, olc::WHITE);
        DrawLine(ScreenWidth() - margin, margin, ScreenWidth() - margin, ScreenHeight() - margin, olc::WHITE);

        //Draw Player
        DrawRect(playerPosX, playerPosY, playerWidth, playerHeight, olc::WHITE);

        //Draw The Ball
        DrawCircle(ballPos, ballRadius, olc::WHITE);

        return true;
    }
};

int main() {
    BreakOut game;
    if (game.Construct(256, 240, 2, 2))
        game.Start();

    return 0;
}
