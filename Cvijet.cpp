#include "Cvijet.h"
#include <vector>
#include <iostream>



Cvijet::Cvijet(sf::RenderWindow *window)
{
    this->window = window;
    
    //stickman-------------------------------------------------------------------------------------
    

    eye.setRadius(4);
    eye.setFillColor(sf::Color(255, 192, 203));
    eye.setScale(2,1);
    eye.setPosition(705, 275);
    
    reye.setRadius(4);
    reye.setFillColor(sf::Color(255, 192, 203));
    reye.setScale(2,1);
    reye.setPosition(725, 275);

    

    head.setRadius(27);
    head.setFillColor(sf::Color::Black);
    head.setPosition(700, 260);
    
    belly.setSize(sf::Vector2f(12.f, 180.f));
    belly.setPosition(720, 260);
    belly.setFillColor(sf::Color::Black);

    lArm.setSize(sf::Vector2f(12.f, 84.f));
    lArm.setPosition(720, 315);
    lArm.setRotation(15);
    lArm.setFillColor(sf::Color::Black);
    
    lArm2.setSize(sf::Vector2f(12.f, 42.f));
    lArm2.setFillColor(sf::Color::Black);

    rArm.setSize(sf::Vector2f(12.f, 84.f));
    rArm.setPosition(720, 315);
    rArm.setRotation(-25);
    rArm.setFillColor(sf::Color::Black);


    lLeg.setSize(sf::Vector2f(12.f, 90.f));
    lLeg.setPosition(720, 430);
    lLeg.setRotation(15);
    lLeg.setFillColor(sf::Color::Black);


    
    rLeg.setSize(sf::Vector2f(12.f, 90.f));
    rLeg.setPosition(720, 430);
    rLeg.setRotation(-15);
    rLeg.setFillColor(sf::Color::Black);



    //stickman-------------------------------------------------------------------------------------

    //cloud-------------------------------------------------------------------------------------

    cloud1_1.setRadius(45);
    cloud1_1.setFillColor(sf::Color::White);
    cloud1_1.setPosition(100,100);
    cloud1_2.setRadius(45);
    cloud1_2.setFillColor(sf::Color::White);
    cloud1_2.setPosition(145,100);
    cloud1_3.setRadius(45);
    cloud1_3.setFillColor(sf::Color::White);
    cloud1_3.setPosition(190,100);

    //cloud-------------------------------------------------------------------------------------


    //flower-------------------------------------------------------------------------------------

    //STEM!_______________________________________________

    stem.setSize(sf::Vector2f(12.f, 200.f));
    stem.setPosition(260, 325);
    stem.setFillColor(sf::Color::Green);

    //STEM!_______________________________________________

    //CVIJET!_______________________________________________

    krug.setRadius(25);
    krug.setFillColor(sf::Color::Yellow);
    krug.setPosition(243, 297);

    //CVIJET!_______________________________________________


    //petals!_______________________________________________

    petal.setRadius(10);
    petal.setScale(1, 6);
    petal.setFillColor(sf::Color::Red);
    petal.setPosition(270, 325);

    ground.setRadius(200);
    ground.setScale(3, 1);
    ground.setFillColor(sf::Color(139,69,19));
    ground.setPosition(-20, 450);




    petal1 = petal;
    petal2 = petal;
    petal3 = petal;
    petal4 = petal;
    petal5 = petal;
    petal6 = petal;
    petal7 = petal;
    petal8 = petal;
    
    petal.setRotation(0);
    petal1.setRotation(40);
    petal2.setRotation(80);
    petal3.setRotation(120);
    petal4.setRotation(160);
    petal5.setRotation(200);
    petal6.setRotation(240);
    petal7.setRotation(280);
    petal8.setRotation(320);

    //petals!_______________________________________________

    //flower-------------------------------------------------------------------------------------
    float y = 0;
    float x = 0;
    int color = 0;




    //txt

    font1.loadFromFile("arial.ttf");
    if (!font1.loadFromFile("arial.ttf"))
        cout << "error 404";
    

    text1.setFont(font1);
    text1.setCharacterSize(30);
    text1.setFillColor(sf::Color::Black);
    text1.setStyle(sf::Text::Italic);
    text1.setString("Oooo~ what a nice flower.");
    text1.setPosition(440, 200);
}

void Cvijet::draw(/*sf::RenderTarget& target, sf::RenderStates states*/)
{
    sf::Color customColor(173, 216, 250);
    window->clear(customColor);

    double elapsedTime = clock.getElapsedTime().asSeconds();

    float b = round(elapsedTime * 100.0) / 100.0;
    //cout << b;


    cout << b << "\n";
    int z = 5;



    cloud1_1.setRadius(45);
    cloud1_1.setPosition(100, 100);
    cloud1_2.setRadius(45);
    cloud1_2.setPosition(145, 100);
    cloud1_3.setRadius(45);
    cloud1_3.setPosition(190, 100);

    window->draw(cloud1_1);
    window->draw(cloud1_2);
    window->draw(cloud1_3);

    cloud1_1.setPosition(560,120);
    cloud1_1.setRadius(60);
    cloud1_2.setPosition(620,120);
    cloud1_2.setRadius(60);
    cloud1_3.setPosition(680,120);
    cloud1_3.setRadius(60);

    window->draw(cloud1_1);
    window->draw(cloud1_2);
    window->draw(cloud1_3);


    window->draw(ground);    
    window->draw(stem);



       // petal.rotate(petal.getRotation()+0.1f); 
        
        petal.rotate(z);
        petal1.rotate(z);
        petal2.rotate(z);
        petal3.rotate(z);
        petal4.rotate(z);
        petal5.rotate(z);
        petal6.rotate(z);
        petal7.rotate(z);
        petal8.rotate(z);

    
    window->draw(petal);
    window->draw(petal1);
    window->draw(petal2);
    window->draw(petal3);
    window->draw(petal4);
    window->draw(petal5);
    window->draw(petal6);
    window->draw(petal7);
    window->draw(petal8);

    //dirt
    window->draw(krug);
    //dirt



    //Stickman______________

    window->draw(reye);
    window->draw(head);
    window->draw(belly);
    window->draw(lArm);
    window->draw(rArm);
    window->draw(lLeg);
    window->draw(rLeg);
    window->draw(eye);
    window->draw(reye);

    if (b > 12.5) {
        window->draw(lArm2);

    }
   
    //Stickman______________

    
    //animacije_________________________________________________

     
   if (b <= 1)
       window->draw(text1);

     
    //could be made smoother but 
    if (b >= 1 and b <= 8) {
        belly.setPosition(720 - y, 260);
     
        eye.setPosition(705 - y, 275);
        reye.setPosition(725 - y, 275);

        head.setPosition(700 - y, 260);
        lArm.setPosition(720 - y, 315);
        rArm.setPosition(720 - y, 315);
        lLeg.setPosition(720 - y, 430);
        rLeg.setPosition(720 - y, 430);
        y += 0.5;

        text1.setPosition(400, 200);
        window->draw(text1);


    }
    


    if (b >= 1 and b <= 2.5)
    {
        
        text1.setString("I need to touch it");

        lArm.rotate(-0.26);
        rArm.rotate(0.26);

        lLeg.rotate(-0.26);
        rLeg.rotate(0.26);


    }
    else if (b >= 2.51 && b <= 5)
    {

        text1.setString("wonder why its spinning");


        lArm.rotate(0.26);
        rArm.rotate(-0.26);

        lLeg.rotate(0.26);
        rLeg.rotate(-0.26);

    }
    else if (b >= 5.01 && b <= 7.5)
    {
        text1.setString("can't hurt to touch...");


        lArm.rotate(-0.26);
        rArm.rotate(0.26);

        lLeg.rotate(-0.26);
        rLeg.rotate(0.26);

    }
    else if(b >= 7.51 && b <= 8)
    {
        lArm.rotate(0.26);
        rArm.rotate(-0.26);

        lLeg.rotate(0.26);
        rLeg.rotate(-0.26);

    }    
    else if(b >= 8.01 && b <= 10)
    {
        text1.setString("right?..");
        window->draw(text1);


        lArm.rotate(0.26);
     // rArm.rotate(-0.26);

    }
    else if (b >= 10.01 && b <= 12)
    {
        text1.setString("Imma do it!");
        window->draw(text1);

        lArm.rotate(0.26);

        lArm2.setPosition(329, 314);
        lArm2.setRotation(lArm.getRotation());
    

    }
    else if (b > 12.5){

        lArm.setSize(sf::Vector2f(12.f, 42.f));

        eye.setScale(1, 1);
        reye.setScale(1, 1);



        if(color != 255){
            head.setFillColor(sf::Color(color, 0, 0));
            lArm.setFillColor(sf::Color(color, 0, 0));
            rArm.setFillColor(sf::Color(color, 0, 0));
            lLeg.setFillColor(sf::Color(color, 0, 0));
            rLeg.setFillColor(sf::Color(color, 0, 0));
            belly.setFillColor(sf::Color(color, 0, 0));

        color++;
        }
     
    }

    if (b >= 13 and b <= 13.05) {
        
        text1.setString("AAAAAAA!!!");
        text1.setStyle(sf::Text::Bold);
        window->draw(text1);

        belly.setPosition(720 - y, 260 + x);
        head.setPosition(700 - y, 260 + x);
        lArm.setPosition(720 - y, 315 + x);
        rArm.setPosition(720 - y, 315 + x);
        lLeg.setPosition(720 - y, 430 + x);
        rLeg.setPosition(720 - y, 430 + x);

        eye.setPosition(705 - y, 275 + x);
        reye.setPosition(725 - y, 275 + x);



        x -= 6;
    }
    else if (b >= 13.06 && b <= 14) {
        window->draw(text1);


        belly.setPosition(720 - y, 260 + x);
        head.setPosition(700 - y, 260 + x);
        lArm.setPosition(720 - y, 315 + x);
        rArm.setPosition(720 - y, 315 + x);
        lLeg.setPosition(720 - y, 430 + x);
        rLeg.setPosition(720 - y, 430 + x);


        eye.setPosition(705 - y, 275 + x);
        reye.setPosition(725 - y, 275 + x);


        belly.rotate(-1);
        head.rotate(-2.5);
        lArm.rotate(-1.3);
        rArm.rotate(-1.3);
        lLeg.rotate(-1.1);
        rLeg.rotate(-1);

        x += 7;


    }

  









   
}


/*void Cvijet::rotatepetal(int z)
{
    this->petal.rotate(z);
}
*/