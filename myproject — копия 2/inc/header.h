#pragma once

//our frameworks
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <SDL2_ttf/SDL_ttf.h>
#include <SDL2_mixer/SDL_mixer.h>

//system libraries
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <time.h>

#define STATUS_STATE_LIVES 0
#define STATUS_STATE_GAME 1
#define STATUS_STATE_GAMEOVER 2

#define NUM_STARS 100

typedef struct 
{
    float x, y, w, h;
    float dx, dy;
    int slowingDown, onLedge;
} Enemies;

typedef struct
{
    float x, y, w, h;
    float dx, dy;
    short lives;
    char *name;
    int onLedge, isDead;

    int animFrame, facingLeft, slowingDown;
} Man;

typedef struct
{
    int x, y;
} Star;

typedef struct
{
    int x, y, w, h;
} Ledge;

typedef struct
{
    // scroll thw world 
   // float scrollX;
    //Players
    Man man;
    Enemies enemy;
    Enemies enemyValues[5];

    //Stars
    Star stars[100];

    //Ledges
    Ledge ledges[100];

    //Images
    SDL_Texture *star;
    SDL_Texture *manFrames[12];
    SDL_Texture *brick;
    SDL_Texture *label;
    SDL_Texture *death;
    SDL_Texture *enemyFrame;
    int labelW, labelH;

    // Fonts
    TTF_Font *font;

    //Renderer
    SDL_Renderer *renderer;

    int time, deathCountdown;
    int statusState;
} GameState;

// PRototypes 

void loadGame(GameState *game);
void process(GameState *game);
void collisionDetect(GameState *game);
int processEvents(SDL_Window *window, GameState *game);
void doRender(SDL_Renderer *renderer, GameState *game);
void shutdown_status_lives (GameState *game);
void draw_status_lives(GameState *game);
void init_status_lives(GameState *game);
