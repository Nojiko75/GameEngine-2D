#include "eden.hpp"

Eden::Eden(){
    name = "Eden Eternal";
    width = 300;
    height = 500;
    init();
}

Eden::Eden(std::string _name, int _width, int _height){
    name = _name;
    if(_width > 0){
        width = _width;
    } else {
        width = 300;
    }

    if(_height > 0){
        height = _height;
    } else {
        height = 500;
    }
    init();
}

Eden::~Eden(){
    SDL_Quit();
}

void Eden::init()
{
    m_running = false;
    SDL_Init(SDL_INIT_EVERYTHING);

    m_buffer = SDL_SetVideoMode(width, height, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
}

void Eden::run()
{
    m_running = true;
    while(m_running)
    {
        /** Gérer les évènements */
        SDL_PollEvent(&m_event);

        /** Effacement écran */
        SDL_

        /** Dessiner éléments */
        /** Passer à la frame suivante */
    }
}

void Eden::clear()
{
    m_running = false;
}
