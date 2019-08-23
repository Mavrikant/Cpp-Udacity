//
// Created by serdar on 23.08.2019.
//

/*The example for using cin from the video.
**There is an error in the video. The correct
**program is shown below.
*/

#include<iostream>
#include<string>

int main_35()
{
    std::string userName;
    std::cout<<"Tell me your nickname?: ";
    std::getline(std::cin, userName);

    std::cout<<"Hello "<<userName<<"\n";
    return 0;
}