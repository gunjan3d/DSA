// Skip to content
 
// Search…
// All gists
// Back to GitHub
// @gunjan3d 
// @NazimCodes
// NazimCodes/SnakeGame.cpp
// Last active last month • Report abuse
// Star this gist
// Tip
// Code
// Revisions
// 3
// Stars
// 1
// <script src="https://gist.github.com/NazimCodes/45eb7fb2d03dc312d10500fab4d49695.js"></script>
// Snake Game made out of C++
// SnakeGame.cpp
/* Snake Game using C++ 
developed by TheKittyKat, 
improved by Nazim Nazari 
December 2017 */

#include <iostream>
#include <conio.h>
using namespace std;

void run();
void printMap();
void initMap();
void move(int dx, int dy);
void update();
void changeDirection(char key);
void clearScreen();
void generateFood();

char getMapValue(int value);

// Map dimensions
const int mapwidth = 20;
const int mapheight = 20;

const int s = mapwidth * mapheight;

// The tile values for the map
int map[s];

// Snake head details
int headxpos;
int headypos;
int direction;

// Amount of food the snake has (How long the body is)
int food = 4;

// Determine if game is running
bool running;

int main()
{
    run();
    return 0;
}

// Main game function
void run()
{
    // Initialize the map
    initMap();
    running = true;
    while (running) {
        // If a key is pressed
        if (kbhit()) {
            // Change to direction determined by key pressed
            changeDirection(getch());
        }
        // Update the map
        update();

        // Clear the screen
        clearScreen();

        // Print the map
        printMap();

        // delay 0.4 seconds
        _sleep(400);
    }

    // Game Text
    cout << "\t\tGame Over!" << endl << "\t\tYour score is: " << food;

    // Stop console from closing instantly
    cin.ignore();
}

// Changes snake direction from input
void changeDirection(char key) {
    /*
      W
    A + D
      S
      1
    4 + 2
      3
    */
    switch (key) {
    case 'w':
        if (direction != 2) direction = 0;
        break;
    case 'd':
        if (direction != 3) direction = 1;
        break;
    case 's':
        if (direction != 4) direction = 2;
        break;
    case 'a':
        if (direction != 5) direction = 3;
        break;
    }
}

// Moves snake head to new location
void move(int dx, int dy) {
    // determine new head position
    int newx = headxpos + dx;
    int newy = headypos + dy;

    // Check if there is food at location
    if (map[newx + newy * mapwidth] == -2) {
        // Increase food value (body length)
        food++;

        // Generate new food on map
        generateFood();
    }

    // Check location is free
    else if (map[newx + newy * mapwidth] != 0) {
        running = false;
    }

    // Move head to new location
    headxpos = newx;
    headypos = newy;
    map[headxpos + headypos * mapwidth] = food + 1;

}

// Clears screen
void clearScreen() {
    // Clear the screen
    system("cls");
}

// Generates new food on map
void generateFood() {
    int x = 0;
    int y = 0;
    do {
        // Generate random x and y values within the map
        x = rand() % (mapwidth - 2) + 1;
        y = rand() % (mapheight - 2) + 1;

        // If location is not free try again
    } while (map[x + y * mapwidth] != 0);

    // Place new food
    map[x + y * mapwidth] = -2;
}

// Updates the map
void update() {
    // Move in direction indicated
    switch (direction) {
    case 0: move(-1, 0);
        break;
    case 1: move(0, 1);
        break;
    case 2: move(1, 0);
        break;
    case 3: move(0, -1);
        break;
    }

    // Reduce snake values on map by 1
    for (int i = 0; i < s; i++) {
        if (map[i] > 0) map[i]--;
    }
}

// Initializes map
void initMap()
{
    // Places the initual head location in middle of map
    headxpos = mapwidth / 2;
    headypos = mapheight / 2;
    map[headxpos + headypos * mapwidth] = 1;

    // Places top and bottom walls 
    for (int x = 0; x < mapwidth; ++x) {
        map[x] = -1;
        map[x + (mapheight - 1) * mapwidth] = -1;
    }

    // Places left and right walls
    for (int y = 0; y < mapheight; y++) {
        map[0 + y * mapwidth] = -1;
        map[(mapwidth - 1) + y * mapwidth] = -1;
    }

    // Generates first food
    generateFood();
}

// Prints the map to console
void printMap()
{
    for (int x = 0; x < mapwidth; ++x) {
        for (int y = 0; y < mapheight; ++y) {
            // Prints the value at current x,y location
            cout << getMapValue(map[x + y * mapwidth]);
        }
        // Ends the line for next x value
        cout << endl;
    }
}

// Returns graphical character for display from map value
char getMapValue(int value)
{
    // Returns a part of snake body
    if (value > 0) return 'o';

    switch (value) {
        // Return wall
    case -1: return 'X';
        // Return food
    case -2: return 'O';
    }
}
// @CppManiacl
// Tip
// CppManiacl commented on Sep 18, 2022
// you made a mistake in "using namespace std;" you wrote "using namelist std;" l

// @Oureyelet
// Tip
// Oureyelet commented on Sep 25, 2022
// What is kbhit() funciton ?
// "‘kbhit’ was not declared in this scope"

// @Tilanmoksara96
// Tip
// Tilanmoksara96 commented on Oct 18, 2022
// What is the meaning of "kbhit" ?

// @NazimCodes
// Tip
// Author
// NazimCodes commented on Oct 19, 2022
// you made a mistake in "using namespace std;" you wrote "using namelist std;" l

// Thanks for pointing that out!

// @NazimCodes
// Tip
// Author
// NazimCodes commented on Oct 19, 2022
// What is kbhit() funciton ? "‘kbhit’ was not declared in this scope"

// kbhit() is a keyboard hit function that returns a nonnull value whenever it detects a keystroke. In this case, it will run changeDirection(getch()); . This function is included in <conio.h> if I'm not mistaken

// @NazimCodes
// Tip
// Author
// NazimCodes commented on Oct 19, 2022
// kbhit() is a keyboard hit function that returns a nonnull value whenever it detects a keystroke. In this case, it will run changeDirection(getch()); . This function is included in <conio.h> if I'm not mistaken

// kbhit() is a keyboard hit function that returns a nonnull value whenever it detects a keystroke. In this case, it will run changeDirection(getch()); . This function is included in <conio.h> if I'm not mistaken

// @supermuhu
// Tip
// supermuhu commented on Nov 21, 2022
// What is kbhit() funciton ? "‘kbhit’ was not declared in this scope"

// its a function in conio. it uses ASCII code is not the same with basic ASCII, exemple 72 is up, 80 is down. when you press any key, this function will return true or false , you can getch() this.

// @OViruSx
// Tip
// OViruSx commented on Feb 12
// I think the int sd should be changed to something else as it's used in std, overall a good code.

// @HideRebooter
// Tip
// HideRebooter commented on Apr 4
// _sleep(400); ?? Was not decleared !!!

// @jarvis10117
// Tip
// jarvis10117 commented last month • 
// Where to run this code and how ?
// Not working on my vs code by using terminal .
// @gunjan3d
 
// Add heading textAdd bold text, <Ctrl+b>Add italic text, <Ctrl+i>
// Add a quote, <Ctrl+Shift+.>Add code, <Ctrl+e>Add a link, <Ctrl+k>
// Add a bulleted list, <Ctrl+Shift+8>Add a numbered list, <Ctrl+Shift+7>Add a task list, <Ctrl+Shift+l>
// Directly mention a user or team
// Reference an issue or pull request
// Leave a comment
// No file chosen
// Attach files by dragging & dropping, selecting or pasting them.
// Styling with Markdown is supported
// Footer
// © 2023 GitHub, Inc.
// Footer navigation
// Terms
// Privacy
// Security
// Status
// Docs
// Contact GitHub
// Pricing
// API
// Training
// Blog
// About
