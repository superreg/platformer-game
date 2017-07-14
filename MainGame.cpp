#include "MainGame.h"

MainGame::MainGame(int *argc, char **argv) {
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(500, 350);
    glutInit(argc, argv);
    _window = glutCreateWindow("Platformer");
    glutDisplayFunc(display);
}

MainGame::~MainGame() {
    glutDestroyWindow(_window);

}

void MainGame::run() {
    glutMainLoop();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
}