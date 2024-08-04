
#ifndef GAME_H
#define GAME_H

#include <Graphics.hpp>
#include <System.hpp>
#include <Window.hpp>
#include <Audio.hpp>
#include <Network.hpp>

#include "Player.h"

class Game
{
private:

    void Initialize();
    void Update();
    void Render();



    sf::Vector2u windowSize{1920, 1080};
    sf::String windowTitle{"SFLM Game class"};
    sf::RenderWindow window{};
    static constexpr unsigned short framerateLimit = 120;

    Player player;
public:
    Game();
    void Run();

};

#endif //GAME_H
