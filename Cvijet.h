    #pragma once
    #include <SFML/Graphics.hpp>
    #include <vector>

    #include <math.h>

    using namespace std;

    class Cvijet{
    private:
        sf::RenderWindow* window;
        sf::Clock clock;

        sf::Text text1;
        sf::Font font1;


        sf::CircleShape krug;

        sf::CircleShape cloud1_1;
        sf::CircleShape cloud1_2;
        sf::CircleShape cloud1_3;

        sf::CircleShape  petal;
        sf::CircleShape  petal1;
        sf::CircleShape  petal2;
        sf::CircleShape  petal3;
        sf::CircleShape  petal4;
        sf::CircleShape  petal5;
        sf::CircleShape  petal6;
        sf::CircleShape  petal7;
        sf::CircleShape  petal8;

        sf::CircleShape  ground;
        sf::RectangleShape stem;

        sf::CircleShape  head;
        sf::CircleShape  eye;
        sf::CircleShape  reye;
        sf::RectangleShape belly;
        sf::RectangleShape lArm;
        sf::RectangleShape lArm2;
        sf::RectangleShape rArm;
        sf::RectangleShape lLeg;
        sf::RectangleShape rLeg;

        float y;
        float x;
        int color;

        //sf::ConvexShape leaf;
        

    public:
        Cvijet(sf::RenderWindow *window);
        void draw();

        void rotatepetal(int z);


    };  