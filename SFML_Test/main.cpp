#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    RenderWindow window(VideoMode(200, 200), "Cuadrado Epico");
   RectangleShape square;
    square.setSize(Vector2f(100.f, 100.f));
    square.setOutlineColor(Color::Blue);
    square.setOutlineThickness(5);
    square.setPosition(50, 50);

    while (window.isOpen())
    {
       Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(square);
        window.display();
    }

    return 0;
}