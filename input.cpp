#include <iostream>
#include <windows.h>


int main(){

while (true){

    Sleep(100);

    // Ctrl C
    if(GetAsyncKeyState(VK_XBUTTON2)){

        // Pressionar tecla CONTROL
        keybd_event(VK_LCONTROL, 0xA2, 0x0001, 0); 
        Sleep(50);

        // Pressionar tecla C
        keybd_event(0x43, 0x43, 0x0001, 0);
        Sleep(50);

        // Soltar tecla C 
        keybd_event(0x43, 0x43, 0x0002, 0);
        Sleep(50);

        // Soltar tecla CONTROL
        keybd_event(VK_LCONTROL, 0xA2, 0x0002, 0);
        Sleep(50);
        
        std::cout<<"Feito!"<<std::endl;
        

        
        Sleep(200); }

        if(GetAsyncKeyState(VK_XBUTTON1)){

        // Pressionar tecla CONTROL
        keybd_event(VK_LCONTROL, 0xA2, 0x0001, 0); 
        Sleep(50);

        // Pressionar tecla C
        keybd_event(0x56, 0x56, 0x0001, 0);
        Sleep(50);

        // Soltar tecla C 
        keybd_event(0x56, 0x56, 0x0002, 0);
        Sleep(50);

        // Soltar tecla CONTROL
        keybd_event(VK_LCONTROL, 0xA2, 0x0002, 0);
        Sleep(50);
        
        std::cout<<"Feito!"<<std::endl;
        

        
        Sleep(200); }



}

    return 0;
}