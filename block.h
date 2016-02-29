#ifndef BLOCK_H
#define BLOCK_H
#include <SFML/Graphics.hpp>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace sf;

class Block: public Drawable
{
public:
    Block();
    FloatRect getFloatRectOfBlock(RectangleShape rect) const;
    std::vector <RectangleShape> blockContainer;
    void addBlock();

private:
    RectangleShape currBlock_PRIVATE;
    virtual void draw(RenderTarget &target, RenderStates states) const;

};

#endif // BLOCK_H
