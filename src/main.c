#include "header.h"
#define GRAVITY 0.35f

void loadGame(GameState *game)
{
    SDL_Surface *surface = NULL;

    //Load images and create rendering textures from them
    // surface = IMG_Load("./resource/images/traps/spike_head.png");
    // if (surface == NULL)
    // {
    //     printf("Cannot find star.png!\n\n");
    //     SDL_Quit();
    //     exit(1);
    // }

    // game->star = SDL_CreateTextureFromSurface(game->renderer, surface);
    // SDL_FreeSurface(surface);

    surface = IMG_Load("./resource/images/main_hero/run/V_g(rn)0.png");
    if (surface == NULL)
    {
        printf("Cannot find V_g(rn)0.png");
        SDL_Quit();
        exit(1);
    }
    game->manFrames[0] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("./resource/images/main_hero/run/V_g(rn)1.png");
    if (surface == NULL)
    {
        printf("Cannot find V_g(rn)1.png");
        SDL_Quit();
        exit(1);
    }
    game->manFrames[1] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("./resource/images/main_hero/run/V_g(rn)2.png");
    if (surface == NULL)
    {
        printf("Cannot find V_g(rn)2.png");
        SDL_Quit();
        exit(1);
    }
    game->manFrames[2] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("./resource/images/main_hero/run/V_g(rn)3.png");
    if (surface == NULL)
    {
        printf("Cannot find V_g(rn)3.png");
        SDL_Quit();
        exit(1);
    }
    game->manFrames[3] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("./resource/images/main_hero/run/V_g(rn)4.png");
    if (surface == NULL)
    {
        printf("Cannot find V_g(rn)4.png");
        SDL_Quit();
        exit(1);
    }
    game->manFrames[4] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("./resource/images/main_hero/run/V_g(rn)5.png");
    if (surface == NULL)
    {
        printf("Cannot find V_g(rn)5.png");
        SDL_Quit();
        exit(1);
    }
    game->manFrames[5] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("./resource/images/main_hero/run/V_g(rn)6.png");
    if (surface == NULL)
    {
        printf("Cannot find V_g(rn)6.png");
        SDL_Quit();
        exit(1);
    }
    game->manFrames[6] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("./resource/images/main_hero/run/V_g(rn)7.png");
    if (surface == NULL)
    {
        printf("Cannot find V_g(rn)7.png");
        SDL_Quit();
        exit(1);
    }
    game->manFrames[7] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("./resource/images/main_hero/run/V_g(rn)8.png");
    if (surface == NULL)
    {
        printf("Cannot find V_g(rn)8.png");
        SDL_Quit();
        exit(1);
    }
    game->manFrames[8] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("./resource/images/main_hero/run/V_g(rn)9.png");
    if (surface == NULL)
    {
        printf("Cannot find V_g(rn)9.png");
        SDL_Quit();
        exit(1);
    }
    game->manFrames[9] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("./resource/images/main_hero/run/V_g(rn)10.png");
    if (surface == NULL)
    {
        printf("Cannot find V_g(rn)10.png");
        SDL_Quit();
        exit(1);
    }
    game->manFrames[10] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("./resource/images/main_hero/run/V_g(rn)11.png");
    if (surface == NULL)
    {
        printf("Cannot find V_g(rn)11.png");
        SDL_Quit();
        exit(1);
    }
    game->manFrames[11] = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("./resource/images/terrain/mud_block.png");
    game->brick = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    surface = IMG_Load("./resource/images/main_hero/death/fire.png");
    game->death = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    game->font = TTF_OpenFont("./resource/text/Fonts/crazy-pixel.ttf", 48);
    if (!game->font)
    {
        printf("Cannot find font file");
        SDL_Quit();
        exit(1);
    }

    surface = IMG_Load("./resource/images/enemies/enemies.png");
    if (surface == NULL)
    {
        printf("Cannot found enemy \n\n");
        SDL_Quit();
        exit(1);
    }
    game->enemyFrame = SDL_CreateTextureFromSurface(game->renderer, surface);
    SDL_FreeSurface(surface);

    game->label = NULL;

    // man init
    game->man.x = 320 - 40;
    game->man.y = 240 - 40;
    game->man.dy = 0;
    game->man.dx = 0;
    game->man.onLedge = 0;
    game->man.animFrame = 0;
    game->man.facingLeft = 0;
    game->man.slowingDown = 0;
    game->man.lives = 3;
    game->man.isDead = 0;
    game->statusState = STATUS_STATE_LIVES;

    // enemy init
    game->enemy.x = random() % 1000;
    game->enemy.y = 200;
    game->enemy.dy = 0;
    game->enemy.dx = 0;
    game->enemy.onLedge = 0;

    init_status_lives(game);

    game->time = 0;
    //game->scrollX = 0;
    game->deathCountdown = -1;
    
    for (int i = 0; i < 5; i++)
    {
        game->enemyValues[i].x = random() % 1000;
        game->enemyValues[i].y = 100;
        game->enemyValues[i].dy = 0;
        game->enemyValues[i].dx = 0;
    }


    //init stars
    // for (int i = 0; i < 100; i++)
    // {
    //     game->stars[i].x = 320 +random()%38400;
    //     game->stars[i].y = random()%720;
    // }

    //init ledges
    int i = 0;
    for (i = 0; i < 20; i++)
    {
        game->ledges[i].w = 64;
        game->ledges[i].h = 64;
        game->ledges[i].x = i * 64;
        game->ledges[i].y = 656;
    }
    for (i = 20; i < 32; i++)
    {
        game->ledges[i].w = 64;
        game->ledges[i].h = 64;
        game->ledges[i].x = 0;
        game->ledges[i].y = (i - 20) * 64;
    }
    for (i = 32; i < 44; i++)
    {
        game->ledges[i].w = 64;
        game->ledges[i].h = 64;
        game->ledges[i].x = 1216;
        game->ledges[i].y = (i - 32) * 64;
    }
    for (i = 44; i < 47; i++)
    { //1st (highest) layer
        game->ledges[i].w = 128;
        game->ledges[i].h = 32;
        game->ledges[i].x = (i - 43) * 352 - 128;
        game->ledges[i].y = 40;
    }
    for (i = 47; i < 51; i++)
    { //2nd layer
        game->ledges[i].w = 128;
        game->ledges[i].h = 32;
        game->ledges[i].x = (i - 46) * 340 - 275;
        game->ledges[i].y = 280;
    }
    for (i = 51; i < 53; i++)
    { //3rd layer
        game->ledges[i].w = 350;
        game->ledges[i].h = 32;
        game->ledges[i].x = (i - 50) * 540 - 350;
        game->ledges[i].y = 440;
    }
    game->ledges[i].w = 128; //lowest block
    game->ledges[i].h = 64;
    game->ledges[i].x = 580;
    game->ledges[i].y = 590;
	for (i = 54; i < 100; i++)
	{
		game->ledges[i].w = 64;
		game->ledges[i].h = 32;
		game->ledges[i].x = i*100;
		game->ledges[i].y =  -100;
}
}

void process(GameState *game)
{
    game->time++;

    if (game->time > 0)
    {
        shutdown_status_lives(game);
        game->statusState = STATUS_STATE_GAME;
    }

    for (int i = 0; i < 5; i++)
    {
        Enemies *enemy = &game->enemyValues[i];
        enemy->y += enemy->dy;

        
        if (enemy->y > game->man.y)
        {
            while (enemy->dy == 0 && enemy->y > game->man.y)
            {
                if (enemy->x > game->man.x)
                {
                    enemy->dx += 1;
                    if (enemy->dx >= 4)
                    {
                        enemy->dx = 4;
                    }
                }
                if (enemy->x < game->man.x)
                {
                    enemy->dx -= 1;
                    if (enemy->dx <= -4)
                    {
                        enemy->dx = -4;
                    }
                }
                enemy->dy -= 10;
            }
        }
        if (enemy->x + 6 < game->man.x)
        {
            if (enemy->dx == 0)
                enemy->dy = -6;
            enemy->x += enemy->dx;
            enemy->dx += 0.2;
            if (enemy->dx >= 4)
            {
                enemy->dx = 4;
            }

            // game->man.facingLeft = 1;
            game->enemy.slowingDown = 0;
        }
        else if (enemy->x - 6 > game->man.x)
        {
            if (enemy->dx == 0)
                enemy->dy = -6;

            enemy->x += enemy->dx;
            enemy->dx -= 0.2;
            if (enemy->dx <= -4)
            {
                enemy->dx = -4;
            }
            // game->man.facingLeft = 1;
            game->enemy.slowingDown = 0;
        }
        enemy->dy += GRAVITY;
    }

    if (game->statusState == STATUS_STATE_GAME)
    {
        if (!game->man.isDead)
        {
            // Man MOVEMENT
            Man *man = &game->man;
            man->x += man->dx;
            man->y += man->dy;

            if (man->dx != 0 && man->onLedge && !man->slowingDown)
            {
                if (game->time % 3 == 0)
                {
                    if (man->animFrame < 11)
                    {
                        man->animFrame++;
                    }
                    else
                    {
                        man->animFrame = 0;
                    }
                }
            }
            // if (man->dx == 0 && man->onLedge)
            // {
            //     man->animFrame = 0;
            // }

            man->dy += GRAVITY;
        }
        if (game->man.isDead && game->deathCountdown < 0)
        {
            game->deathCountdown = 120;
        }
        if (game->deathCountdown > 0)
        {
            game->deathCountdown--;
            if (game->deathCountdown < 0)
            {
                // init_game_over(game);
                // game->statusState = STATUS_STATE_GAMEOVER;
                init_status_lives(game);
            }
        }
    }
    // game->scrollX = -game->man.x + 320;
    // if (game->scrollX > 0)
    //     game->scrollX = 0;
}

int collide2d(float x1, float y1, float x2, float y2, float wt1, float ht1, float wt2, float ht2)
{
    return (!((x1 > (x2 + wt2)) || (x2 > (x1 + wt1)) || (y1 > (y2 + ht2)) || (y2 > (y1 + ht1))));
}

void collisionDetect(GameState *game)
{

    // //DEATH TOUCH
    // for (int i  = 0; i < 100; i++)
    // {
    //     if (collide2d(game->man.x, game->man.y, game->stars[i].x, game->stars[i].y, 50, 50, 50, 50))
    //     {
    //         game->man.isDead = 1;
    //     }
    // }

    // ENEMY COLISION DETECT
   
    for (int j = 0; j < 5; j++)
    {
        game->man.w = 48;
        game->man.h = 48;
        float mw = 48, mh = 48;
        float mx = game->enemyValues[j].x, my = game->enemyValues[j].y;
        float bx = game->man.x, by = game->man.y, bw = game->man.w, bh = game->man.h;

        if (mx + mw / 2 > bx && mx + mw / 2 < bx + bw)
        {
            //are we bumping our head?
            if (my < by + bh && my > by && game->enemyValues[j].dy < 0)
            {
                //correct y
                game->enemyValues[j].y = by + bh;
                my = by + bh;

                //bumped our head, stop any jump velocity
                game->enemyValues[j].dy = 0;
                game->enemy.onLedge = 1;
            }
        }
        if (mx + mw > bx && mx < bx + bw)
        {
            //are we landing on the ledge
            if (my + mh > by && my < by && game->enemyValues[j].dy > 0)
            {
                //correct y
                game->enemyValues[j].y = by - mh;
                my = by - mh;

                //landed on this ledge, stop any jump velocity
                game->enemyValues[j].dy = 0;
                game->enemy.onLedge = 1;
            }
        }

        if (my + mh > by && my < by + bh)
        {
            //rubbing against right edge
            if (mx < bx + bw && mx + mw > bx + bw && game->enemyValues[j].dx < 0)
            {
                //correct x
                game->enemyValues[j].x = bx + bw;
                mx = bx + bw;

                game->enemyValues[j].dx = 0;
            }
            //rubbing against left edge
            else if (mx + mw > bx && mx < bx && game->enemyValues[j].dx > 0)
            {
                //correct x
                game->enemyValues[j].x = bx - mw;
                mx = bx - mw;

                game->enemyValues[j].dx = 0;
            }
        }
    }
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 100; i++)
        {

            float mw = 48, mh = 48;
            float mx = game->enemyValues[j].x, my = game->enemyValues[j].y;
            float bx = game->ledges[i].x, by = game->ledges[i].y, bw = game->ledges[i].w, bh = game->ledges[i].h;

            if (mx + mw / 2 > bx && mx + mw / 2 < bx + bw)
            {
                //are we bumping our head?
                if (my < by + bh && my > by && game->enemyValues[j].dy < 0)
                {
                    //correct y
                    game->enemyValues[j].y = by + bh;
                    my = by + bh;

                    //bumped our head, stop any jump velocity
                    game->enemyValues[j].dy = 0;
                    game->enemy.onLedge = 1;
                }
            }
            if (mx + mw > bx && mx < bx + bw)
            {
                //are we landing on the ledge
                if (my + mh > by && my < by && game->enemyValues[j].dy > 0)
                {
                    //correct y
                    game->enemyValues[j].y = by - mh;
                    my = by - mh;

                    //landed on this ledge, stop any jump velocity
                    game->enemyValues[j].dy = 0;
                    game->enemy.onLedge = 1;
                }
            }

            if (my + mh > by && my < by + bh)
            {
                //rubbing against right edge
                if (mx < bx + bw && mx + mw > bx + bw && game->enemyValues[j].dx < 0)
                {
                    //correct x
                    game->enemyValues[j].x = bx + bw;
                    mx = bx + bw;

                    game->enemyValues[j].dx = 0;
                }
                //rubbing against left edge
                else if (mx + mw > bx && mx < bx && game->enemyValues[j].dx > 0)
                {
                    //correct x
                    game->enemyValues[j].x = bx - mw;
                    mx = bx - mw;

                    game->enemyValues[j].dx = 0;
                }
            }
        }
    }

    //Check for collision wit any ledges (brick blocks)
    for (int i = 0; i < 100; i++)
    {
        float mw = 48, mh = 48;
        float mx = game->man.x, my = game->man.y;
        float bx = game->ledges[i].x, by = game->ledges[i].y, bw = game->ledges[i].w, bh = game->ledges[i].h;

        if (mx + mw / 2 > bx && mx + mw / 2 < bx + bw)
        {
            //are we bumping our head?
            if (my < by + bh && my > by && game->man.dy < 0)
            {
                //correct y
                game->man.y = by + bh;
                my = by + bh;

                //bumped our head, stop any jump velocity ---------------------------------------------------commit "STOP JUMP"
                game->man.dy = 0;
                game->man.onLedge = 0;
            }
        }
        if (mx + mw > bx && mx < bx + bw)
        {
            //are we landing on the ledge
            if (my + mh > by && my < by && game->man.dy > 0)
            {
                //correct y
                game->man.y = by - mh;
                my = by - mh;

                //landed on this ledge, stop any jump velocity
                game->man.dy = 0;
                game->man.onLedge = 1;
            }
        }

        if (my + mh > by && my < by + bh)
        {
            //rubbing against right edge
            if (mx < bx + bw && mx + mw > bx + bw && game->man.dx < 0)
            {
                //correct x
                game->man.x = bx + bw;
                mx = bx + bw;

                game->man.dx = 0;
            }
            //rubbing against left edge
            else if (mx + mw > bx && mx < bx && game->man.dx > 0)
            {
                //correct x
                game->man.x = bx - mw;
                mx = bx - mw;

                game->man.dx = 0;
            }
        }
    }
    // COLLISION ENEMY TO ENEMY _________________________________________________________________________________________________________________________
     for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 5; i++) 
        {
        game->enemy = game->enemyValues[i];
        game->enemy.w = 48;
        game->enemy.h = 48;
        float mw = 48, mh = 48;
        float mx = game->enemyValues[j+1].x, my = game->enemyValues[j+1].y;
        float bx = game->enemy.x, by = game->enemy.y, bw = game->enemy.w, bh = game->enemy.h;

        if (mx + mw / 2 > bx && mx + mw / 2 < bx + bw)
        {
            //are we bumping our head?
            if (my < by + bh && my > by && game->enemyValues[j+1].dy < 0)
            {
                //correct y
                game->enemyValues[j+1].y = by + bh;
                my = by + bh;

                //bumped our head, stop any jump velocity
                game->enemyValues[j+1].dy = 0;
                game->enemy.onLedge = 1;
            }
        }
        if (mx + mw > bx && mx < bx + bw)
        {
            //are we landing on the ledge
            if (my + mh > by && my < by && game->enemyValues[j+1].dy > 0)
            {
                //correct y
                game->enemyValues[j+1].y = by - mh;
                my = by - mh;

                //landed on this ledge, stop any jump velocity
                game->enemyValues[j+1].dy = 0;
                game->enemy.onLedge = 1;
            }
        }

        if (my + mh > by && my < by + bh)
        {
            //rubbing against right edge
            if (mx < bx + bw && mx + mw > bx + bw && game->enemyValues[j+1].dx < 0)
            {
                //correct x
                game->enemyValues[j+1].x = bx + bw;
                mx = bx + bw;

                game->enemyValues[j+1].dx = 0;
            }
            //rubbing against left edge
            else if (mx + mw > bx && mx < bx && game->enemyValues[j+1].dx > 0)
            {
                //correct x
                game->enemyValues[j+1].x = bx - mw;
                mx = bx - mw;

                game->enemyValues[j+1].dx = 0;
            }
        }
        }
    }
}

int processEvents(SDL_Window *window, GameState *game)
{
    SDL_Event event;
    int done = 0;

    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
        case SDL_WINDOWEVENT_CLOSE:
        {
            if (window)
            {
                SDL_DestroyWindow(window);
                window = NULL;
                done = 1;
            }
        }
        break;
        case SDL_KEYDOWN:
        {
            switch (event.key.keysym.sym)
            {
            case SDLK_ESCAPE:
                done = 1;
                break;
            case SDLK_UP:
                if (game->man.onLedge)
                {
                    game->man.dy = -10;
                    game->man.onLedge = 0;
                }
                break;
            }
        }
        break;
        case SDL_QUIT:
            //quit out of the game
            done = 1;
            break;
        }
    }
    const Uint8 *state = SDL_GetKeyboardState(NULL);
    if (state[SDL_SCANCODE_UP])
    {
        game->man.dy -= 0.15f;
    }
    if (state[SDL_SCANCODE_LEFT])
    {
        game->man.dx -= 0.5;
        if (game->man.dx < -6)
        {
            game->man.dx = -6;
        }
        game->man.facingLeft = 1;
        game->man.slowingDown = 0;
    }
    else if (state[SDL_SCANCODE_RIGHT])
    {
        game->man.dx += 0.5;
        if (game->man.dx > 6)
        {
            game->man.dx = 6;
        }
        game->man.facingLeft = 0;
        game->man.slowingDown = 0;
    }
    else
    {
        game->man.animFrame = 0;
        game->man.dx *= 0.8f;
        game->man.slowingDown = 1;
        if (fabsf(game->man.dx) < 0.1f)
        {
            game->man.dx = 0;
        }
    }

    // if (state[SDL_SCANCODE_UP])
    // {
    //     game->man.y -= 10;
    // }
    // if (state[SDL_SCANCODE_DOWN])
    // {
    //     game->man.y += 10;
    // }

    return done;
}

void doRender(SDL_Renderer *renderer, GameState *game)
{

    if (game->statusState == STATUS_STATE_GAME)
    {

        //Set the drawing color to blue
        SDL_SetRenderDrawColor(renderer, 128, 128, 255, 255);

        //Clear the screen (to blue)
        SDL_RenderClear(renderer);

        //Set drawing color to white
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

        for (int i = 0; i < 100; i++)
        {
            SDL_Rect ledgeRect = {game->ledges[i].x, game->ledges[i].y, game->ledges[i].w, game->ledges[i].h};
            SDL_RenderCopy(renderer, game->brick, NULL, &ledgeRect);
        }
        for (int i = 0; i < 5; i++)
        {
            SDL_Rect enemy = {game->enemyValues[i].x, game->enemyValues[i].y, 54, 54};
            SDL_RenderCopy(renderer, game->enemyFrame, NULL, &enemy);
        }
        //Draw a rectangle at man's position
        SDL_Rect rect = {game->man.x, game->man.y, 54, 54};
        SDL_RenderCopyEx(renderer, game->manFrames[game->man.animFrame], NULL, &rect, 0, NULL, (game->man.facingLeft == 1));

        if (game->man.isDead)
        {
            SDL_Rect rect = {game->man.x, game->man.y - 10, 38, 83};
            SDL_RenderCopyEx(renderer, game->death, NULL, &rect, 0, NULL, (game->time % 20 < 10));
        }
    }
    //draw the trap image
    // for (int i = 0; i < 100; i++)
    // {
    //     SDL_Rect starRect = {game->stars[i].x, game->stars[i].y, 56, 56};
    //     SDL_RenderCopy(renderer, game->star, NULL, &starRect);
    // }

    if (game->statusState == STATUS_STATE_LIVES)
    {
        draw_status_lives(game);
    }
    //We are done drawing, "present" or show to the screen what wer've drawn
    SDL_RenderPresent(renderer);
}

int main()
{
    GameState gameState;
    SDL_Window *window;     //Declare a window
    SDL_Renderer *renderer; //Declare a renderer

    SDL_Init(SDL_INIT_VIDEO); //Initialize SDL2

    srandom((int)time(NULL));

    //Create an application window  with the following settings:
    window = SDL_CreateWindow("Game Window",           //window title
                              SDL_WINDOWPOS_UNDEFINED, //initial x position
                              SDL_WINDOWPOS_UNDEFINED, //initial y position
                              1280,                    //width, in pixels
                              720,                     //height, in pixels
                              0                        //flags
    );
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    gameState.renderer = renderer;

    TTF_Init(); // init font system

    loadGame(&gameState);

    //The window is open: enter program loop (see SDL_PollEvent)
    int done = 0;

    //Event loop
    while (!done)
    {
        //Check for events
        done = processEvents(window, &gameState);

        process(&gameState);
        collisionDetect(&gameState);

        //Render display
        doRender(renderer, &gameState);

        //don't burn up the CPU
        //SDL_Delay(10);
    }

    //Shutdown game and umload all memory
    SDL_DestroyTexture(gameState.star);
    SDL_DestroyTexture(gameState.manFrames[0]);
    SDL_DestroyTexture(gameState.manFrames[1]);
    SDL_DestroyTexture(gameState.manFrames[2]);
    SDL_DestroyTexture(gameState.manFrames[3]);
    SDL_DestroyTexture(gameState.manFrames[4]);
    SDL_DestroyTexture(gameState.manFrames[5]);
    SDL_DestroyTexture(gameState.manFrames[6]);
    SDL_DestroyTexture(gameState.manFrames[7]);
    SDL_DestroyTexture(gameState.manFrames[8]);
    SDL_DestroyTexture(gameState.manFrames[9]);
    SDL_DestroyTexture(gameState.manFrames[10]);
    SDL_DestroyTexture(gameState.manFrames[11]);
    SDL_DestroyTexture(gameState.brick);
    if (gameState.label != NULL)
        SDL_DestroyTexture(gameState.label);
    TTF_CloseFont(gameState.font);

    //Close and destroy the window
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);

    //Clean up
    TTF_Quit();
    SDL_Quit();
    return 0;
}
