#pragma once

#include <GL/gl.h>
#include <GL/glut.h>

class MainGame {
public:
    MainGame(int *, char **);

    void run();

    ~MainGame();

private:
    int _window;
};

void display();