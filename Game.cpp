
#include "Game.h"

Game::Game()
    : window(sf::VideoMode(windowSize.x, windowSize.y), windowTitle)
{
    window.setFramerateLimit(framerateLimit);
};


void Game::Initialize()
{
    //Initialize objects
}

void Game::Update()
{
    // Update player
    player.Update();
}

void Game::Render()
{
    //Clear background
    window.clear(sf::Color::Black);

    // Begin rendering
    player.Render(window);

    //End render
    window.display();
}


void Game::Run()
{
    Initialize();

    //Event loop
    while (window.isOpen())
    {
        sf::Event event{};
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        Update();
        Render();
    }
}