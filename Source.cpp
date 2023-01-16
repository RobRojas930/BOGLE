
#include"SuperMarket.h"
#include <bogle/Game.h>
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

Game game;
int main()
{
   game = Game();
   game.setWindow(window,"BOGLE Template", 800.0f,600.0f, glm::vec3(0.2f, 0.3f, 0.3f));
   game.initCallbacks(    
       initscene_callback,
       draw_callback,
       release_callback,
       mouse_button_callback,
       processInput,
       joystick_callback,
       framebuffer_size_callback,
       mouse_callback,
       scroll_callback
       );
   game.initWindow();
   game.run(&camera);
   return 0;
}
