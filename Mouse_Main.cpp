#include <iostream>
#include <windows.h>


int main(){



    while (true){

        if(GetAsyncKeyState(VK_CONTROL)){
            //std::cout<<"Control Pressed"<<std::endl;
            
            if(GetAsyncKeyState(VK_XBUTTON1)){
                std::cout<<"XButton1 pressed"<<std::endl;
                Sleep(200); }

            if(GetAsyncKeyState(VK_XBUTTON2)){
                std::cout<<"XButton2 pressed"<<std::endl;
                Sleep(200); }

    }
}






    return 0;
}