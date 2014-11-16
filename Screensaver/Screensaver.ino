/*
  Screensaver.pde
 
##      ##    ###    ########  ##    ## #### ##    ##  ######   
##  ##  ##   ## ##   ##     ## ###   ##  ##  ###   ## ##    ##  
##  ##  ##  ##   ##  ##     ## ####  ##  ##  ####  ## ##        
##  ##  ## ##     ## ########  ## ## ##  ##  ## ## ## ##   #### 
##  ##  ## ######### ##   ##   ##  ####  ##  ##  #### ##    ##  
##  ##  ## ##     ## ##    ##  ##   ###  ##  ##   ### ##    ##  
 ###  ###  ##     ## ##     ## ##    ## #### ##    ##  ######   
 
Epilepsy Seizure Warning: This program could potentially trigger
seizures due to flashing lights and patterns. Caution is advised.
 
 File made with the help of The Meggy Jr Simplified Library (MJSL)
  from the Meggy Jr RGB library for Arduino
   
   This program lights up all the lights on the screen, changes 
   colors and design with differently timed delays, and loops.
   
 Copyright (c) 2014 Brennan Brown.  All right reserved.
 bbrown17@punahou.edu
 	  
 */

 

#include <MeggyJrSimple.h>        // Required code, line 1 of 2.
 
void setup()                    // run once, when the sketch starts
{

  MeggyJrSimpleSetup();     // Required code, line 2 of 2.

}  // End setup()


void loop()           // run over and over again; start loop
{

  for (int i=0;i<4;i++)  
  
{   
  
  // 4x4 blue square bottom left 
  DrawPx(i,0,Blue); // draw 4 dots bottom left in a row
  DrawPx(i,1,Blue); DrawPx(i,2,Blue); DrawPx(i,3,Blue); // y columns 1,2,3
  
  // 4x4 yellow square bottom right; x columns 5,6,7,8 
  DrawPx(i+4,0,Yellow); // draw 4 dots bottom right in a row 
  DrawPx(i+4,1,Yellow); DrawPx(i+4,2,Yellow); DrawPx(i+4,3,Yellow); 
  
  // 4x4 red square top left 
  DrawPx(i,4,Red); // draw 4 dots bottom left in a row
  DrawPx(i,5,Red); DrawPx(i,6,Red); DrawPx(i,7,Red); // y columns 1,2,3
  
  // 4x4 green square top right; x columns 5,6,7,8 
  DrawPx(i+4,4,Green); // draw 4 dots bottom right in a row 
  DrawPx(i+4,5,Green); DrawPx(i+4,6,Green); DrawPx(i+4,7,Green);   
  
  DisplaySlate();         // Write the drawing to the screen.
  delay(500);             // wait one-half second for each dot drawing     
  
  ClearSlate();          // Erase drawing  
}
  
// 2014 Year Animation  

    // Red Green Blue Yellow 2014 frame

  // number 2 in order from top to bottom, left to right
  
  DrawPx(1,7,Red); DrawPx(2,7,Red); DrawPx(0,6,Red); DrawPx(3,6,Red); 
  DrawPx(2,5,Red); DrawPx(0,4,Red); DrawPx(1,4,Red); DrawPx(2,4,Red); 
  DrawPx(3,4,Red); 
  
  // number 0 in order from top to bottom, left to right
 
  DrawPx(5,7,Green); DrawPx(6,7,Green); DrawPx(4,6,Green); DrawPx(7,6,Green);         
  DrawPx(4,5,Green); DrawPx(7,5,Green); DrawPx(5,4,Green); DrawPx(6,4,Green);
  
  // number 1 in order from top to bottom, left to right  

  DrawPx(1,3,Blue); DrawPx(2,3,Blue); DrawPx(0,2,Blue); DrawPx(1,2,Blue);         
  DrawPx(2,2,Blue); DrawPx(1,1,Blue); DrawPx(2,1,Blue); DrawPx(0,0,Blue);
  DrawPx(1,0,Blue); DrawPx(2,0,Blue); DrawPx(3,0,Blue);  
  
  // number 4 in order from top to bottom, left to right  
  
  DrawPx(4,3,Yellow); DrawPx(6,3,Yellow); DrawPx(4,2,Yellow); DrawPx(5,2,Yellow);  
  DrawPx(6,2,Yellow); DrawPx(7,2,Yellow); DrawPx(5,1,Yellow); DrawPx(6,1,Yellow);
  DrawPx(5,0,Yellow); DrawPx(6,0,Yellow);
  
  DisplaySlate();           // Write the drawing to the screen.
  delay(1000);             // waits one second      
  
  ClearSlate();          // Erase drawing
  
    // Violet 2014 frame

  // number 2 in order from top to bottom, left to right
  
  DrawPx(1,7,Violet); DrawPx(2,7,Violet); DrawPx(0,6,Violet); DrawPx(3,6,Violet); 
  DrawPx(2,5,Violet); DrawPx(0,4,Violet); DrawPx(1,4,Violet); DrawPx(2,4,Violet); 
  DrawPx(3,4,Violet); 
  
  // number 0 in order from top to bottom, left to right
 
  DrawPx(5,7,Violet); DrawPx(6,7,Violet); DrawPx(4,6,Violet); DrawPx(7,6,Violet);         
  DrawPx(4,5,Violet); DrawPx(7,5,Violet); DrawPx(5,4,Violet); DrawPx(6,4,Violet);
  
  // number 1 in order from top to bottom, left to right  

  DrawPx(1,3,Violet); DrawPx(2,3,Violet); DrawPx(0,2,Violet); DrawPx(1,2,Violet);         
  DrawPx(2,2,Violet); DrawPx(1,1,Violet); DrawPx(2,1,Violet); DrawPx(0,0,Violet);
  DrawPx(1,0,Violet); DrawPx(2,0,Violet); DrawPx(3,0,Violet);  
  
  // number 4 in order from top to bottom, left to right  
  
  DrawPx(4,3,Violet); DrawPx(6,3,Violet); DrawPx(4,2,Violet); DrawPx(5,2,Violet);  
  DrawPx(6,2,Violet); DrawPx(7,2,Violet); DrawPx(5,1,Violet); DrawPx(6,1,Violet);
  DrawPx(5,0,Violet); DrawPx(6,0,Violet);
  
  DisplaySlate();           // Write the drawing to the screen.
  delay(1000);             // waits one second      
  
  ClearSlate();          // Erase drawing
  
    // Blue 2014 frame

  // number 2 in order from top to bottom, left to right
  
  DrawPx(1,7,Blue); DrawPx(2,7,Blue); DrawPx(0,6,Blue); DrawPx(3,6,Blue); 
  DrawPx(2,5,Blue); DrawPx(0,4,Blue); DrawPx(1,4,Blue); DrawPx(2,4,Blue); 
  DrawPx(3,4,Blue); 
  
  // number 0 in order from top to bottom, left to right
 
  DrawPx(5,7,Blue); DrawPx(6,7,Blue); DrawPx(4,6,Blue); DrawPx(7,6,Blue);         
  DrawPx(4,5,Blue); DrawPx(7,5,Blue); DrawPx(5,4,Blue); DrawPx(6,4,Blue);
  
  // number 1 in order from top to bottom, left to right  

  DrawPx(1,3,Blue); DrawPx(2,3,Blue); DrawPx(0,2,Blue); DrawPx(1,2,Blue);         
  DrawPx(2,2,Blue); DrawPx(1,1,Blue); DrawPx(2,1,Blue); DrawPx(0,0,Blue);
  DrawPx(1,0,Blue); DrawPx(2,0,Blue); DrawPx(3,0,Blue);  
  
  // number 4 in order from top to bottom, left to right  
  
  DrawPx(4,3,Blue); DrawPx(6,3,Blue); DrawPx(4,2,Blue); DrawPx(5,2,Blue);  
  DrawPx(6,2,Blue); DrawPx(7,2,Blue); DrawPx(5,1,Blue); DrawPx(6,1,Blue);
  DrawPx(5,0,Blue); DrawPx(6,0,Blue);
  
  DisplaySlate();           // Write the drawing to the screen.
  delay(1000);             // waits one second      
  
  ClearSlate();          // Erase drawing

    // DimAqua 2014 frame

  // number 2 in order from top to bottom, left to right
  
  DrawPx(1,7,DimAqua); DrawPx(2,7,DimAqua); DrawPx(0,6,DimAqua); DrawPx(3,6,DimAqua); 
  DrawPx(2,5,DimAqua); DrawPx(0,4,DimAqua); DrawPx(1,4,DimAqua); DrawPx(2,4,DimAqua); 
  DrawPx(3,4,DimAqua); 
  
  // number 0 in order from top to bottom, left to right
 
  DrawPx(5,7,DimAqua); DrawPx(6,7,DimAqua); DrawPx(4,6,DimAqua); DrawPx(7,6,DimAqua);         
  DrawPx(4,5,DimAqua); DrawPx(7,5,DimAqua); DrawPx(5,4,DimAqua); DrawPx(6,4,DimAqua);
  
  // number 1 in order from top to bottom, left to right  

  DrawPx(1,3,DimAqua); DrawPx(2,3,DimAqua); DrawPx(0,2,DimAqua); DrawPx(1,2,DimAqua);         
  DrawPx(2,2,DimAqua); DrawPx(1,1,DimAqua); DrawPx(2,1,DimAqua); DrawPx(0,0,DimAqua);
  DrawPx(1,0,DimAqua); DrawPx(2,0,DimAqua); DrawPx(3,0,DimAqua);  
  
  // number 4 in order from top to bottom, left to right  
  
  DrawPx(4,3,DimAqua); DrawPx(6,3,DimAqua); DrawPx(4,2,DimAqua); DrawPx(5,2,DimAqua);  
  DrawPx(6,2,DimAqua); DrawPx(7,2,DimAqua); DrawPx(5,1,DimAqua); DrawPx(6,1,DimAqua);
  DrawPx(5,0,DimAqua); DrawPx(6,0,DimAqua);
  
  DisplaySlate();           // Write the drawing to the screen.
  delay(1000);             // waits one second      
  
  ClearSlate();          // Erase drawing  
  
}   // End loop
