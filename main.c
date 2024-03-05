#include "raylib.h"

/**
 * 
 * Raylib VS Code Starter Template
 * 
 * This assumes that raylib has been installed to the default location with the official installer.
 * 
 * Hit F5 to Run/Debug the application.
 * 
 * Happy Coding! :)
 * 
*/

int main(void)
{
    InitWindow(800, 450, "raylib [core] example - basic window");

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}