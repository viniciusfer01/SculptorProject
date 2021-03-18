#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <iomanip> 
#include "sculptor.h"

int main() {
    Sculptor Voxel(50,50,50);
    Voxel.setColor(0.00,0.00,0.93,1);
    Voxel.putEllipsoid(15,15,17,3,3,12); //corpo do foguete
    Voxel.cutBox(0,29,0,29,0,7);
    
    Voxel.setColor(1.00,0.00,0.0,1); //fogo do foguete
    Voxel.putEllipsoid(15,15,15,2,2,12); 

    Voxel.setColor(1.00,1.00,0.00,1); //aleta do foguete
    
    for (int i = 16; i > 8; i--)
    {
      Voxel.putVoxel(12, 15, i);
    }

    for (int i = 15; i > 7; i--)
    {
      Voxel.putVoxel(11, 15, i);
    }

    for (int i = 14; i > 6; i--)
    {
      Voxel.putVoxel(10, 15, i);
    }

    for (int i = 13; i > 5; i--)
    {
      Voxel.putVoxel(9, 15, i);
    }
    


    for (int i = 16; i > 8; i--)
    {
      Voxel.putVoxel(18, 15, i);
    }

    for (int i = 15; i > 7; i--)
    {
      Voxel.putVoxel(19, 15, i);
    }

    for (int i = 14; i > 6; i--)
    {
      Voxel.putVoxel(20, 15, i);
    }

    for (int i = 13; i > 5; i--)
    {
      Voxel.putVoxel(21, 15, i);
    }



    for (int i = 16; i > 8; i--)
    {
      Voxel.putVoxel(15, 12, i);
    }

    for (int i = 15; i > 7; i--)
    {
      Voxel.putVoxel(15, 11, i);
    }

    for (int i = 14; i > 6; i--)
    {
      Voxel.putVoxel(15, 10, i);
    }

    for (int i = 13; i > 5; i--)
    {
      Voxel.putVoxel(15, 9, i);
    }
    


    for (int i = 16; i > 8; i--)
    {
      Voxel.putVoxel(15, 18, i);
    }

    for (int i = 15; i > 7; i--)
    {
      Voxel.putVoxel(15, 19, i);
    }

    for (int i = 14; i > 6; i--)
    {
      Voxel.putVoxel(15, 20, i);
    }

    for (int i = 13; i > 5; i--)
    {
      Voxel.putVoxel(15, 21, i);
    } 

    Voxel.setColor(0.36,0.74,0.93,0.5); //janela
    Voxel.putVoxel(12, 15, 24); 
    Voxel.setColor(0.40,0.40,0.40,1);
    Voxel.putVoxel(12, 14, 24); 
    Voxel.putVoxel(12, 16, 24); 
    Voxel.putVoxel(12, 15, 25); 
    Voxel.putVoxel(12, 15, 23); 
    Voxel.setColor(0.20,0.20,0.20,1);
    Voxel.putVoxel(13, 14, 25); 
    Voxel.putVoxel(13, 16, 25); 
    Voxel.putVoxel(13, 14, 23); 
    Voxel.putVoxel(13, 16, 23); 
    Voxel.putVoxel(13, 14, 24); 
    Voxel.putVoxel(13, 16, 24); 
    Voxel.putVoxel(13, 15, 25); 
    
    Voxel.setColor(1,1,1,1); // estrelas
    int i = 0;
    while (i < 75)
    {
      int v1 = rand() % 50; 
      int v2 = rand() % 50;         
      int v3 = rand() % 50;
      if ((v1 > 19 || v1 < 11))
      {            
        Voxel.putVoxel(v1, v2, v3);
        i++;
      }
      else if ((v2 > 19 || v2 < 11))
      {            
        Voxel.putVoxel(v1, v2, v3);
        i++;
      }
    }    

    Voxel.putSphere(75,75,75,25);
    
    Voxel.writeOFF((char*)"fogueteComLua.off");

    return 0;
}

