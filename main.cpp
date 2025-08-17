#include <SFML/Graphics.hpp>


int main()
{
// Create a window with a title and dimensions
sf::RenderWindow window(sf::VideoMode(800, 600), "Asteroids");
// Main game loop that continues as long as the window is open

sf::Texture texture;
if (!texture.loadFromFile("space_background.jpg"))
    return EXIT_FAILURE;
sf::Sprite sprite(texture);

while (window.isOpen())
{

    // Event processing
    sf::Event event;
    while (window.pollEvent(event))
    {
        // "close requested" event: we close the window
        if (event.type == sf::Event::Closed)
            window.close();
    }

    // Clear the screen with a black color
    //window.clear(sf::Color::Black);

    window.draw(sprite);

    // Display everything that has been drawn
    window.display();
}

return 0;

}