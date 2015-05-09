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

/*libère la SDL de la mémoire*/
Eden::~Eden(){
    SDL_Quit();
}

/*charge la SDL en mémoire*/
void Eden::init()
{
    m_running = false;
    /*charge tous les composants de la SDL: audio, vidéo, ...*/
    if (SDL_Init(SDL_INIT_EVERYTHING) == -1)
    {
        /*affiche l'erreur dans un fichier*/
        fprintf(stderr, "Erreur d'initialisation de la SDL : %s\n", SDL_GetError());
        exit(EXIT_FAILURE); /*quitte le programme*/
    }

    /** initialise le mode vidéo avec:
      * width: la largeur
      * height: la hauteur
      * 32: le nb de couleurs de la fenêtre en bits (nb maximal)
      * SDL_HWSURFACE: charge les données dans la carte graphique
      * SDL_DOUBLEBUF: rend les déplacements à l'écran plus fluide
      */
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
        //SDL_

        /** Dessiner éléments */
        /** Passer à la frame suivante */
    }
}

void Eden::clear()
{
    m_running = false;
}
