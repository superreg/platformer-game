#include "MainGame.h"

int main(int argc, char **argv) {
    MainGame *game = new MainGame(&argc, argv);
    game->run();
    return 0;
}