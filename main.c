#include "raylib.h"

/**
 *
 * Raylib (+ Raygui) VS Code Starter Template
 *
 * This assumes that raylib has been installed to the default location with the official installer.
 *
 * Hit F5 to Run/Debug the application.
 *
 * Happy Coding! :)
 *
 */

// Comment or delete the following two lines if you don't need raygui in your project
#define RAYGUI_IMPLEMENTATION
#include "deps/raygui.h"

int main(void)
{
    InitWindow(800, 450, "raylib [core] example - basic window");

    int showMessageBox = false;

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        if (GuiButton((Rectangle){.x = 300, .y = 280, .width = 200, .height = 60}, "Click Me :)"))
        {
            showMessageBox = !showMessageBox;
        }

        if (IsKeyPressed(KEY_ESCAPE))
        {
            showMessageBox = !showMessageBox;
        }

        if (showMessageBox)
        {
            int clickedBtn = GuiMessageBox((Rectangle){.x = 200, .y = 200, .width = 400, .height = 160}, "Hey", "I am free :)", "OK");

            // 0: [x] button, 1: OK button
            if (clickedBtn == 0 || clickedBtn == 1)
            {
                showMessageBox = false;
            }
        }
        EndDrawing();
    }

    CloseWindow();

    return 0;
}