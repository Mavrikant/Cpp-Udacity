//
// Created by serdar on 28.08.2019.
//

#include <iostream>
#include <string>

//Cost of materials for the remodel
#define PAINTCOST 0.50 //per square foot
#define WALLPAPERCOST 2.00 //per square foot
#define CARPETCOST 4.00 //per square foot
#define TILECOST 5.50 //per square foot
#define  WOODCOST 6.00 //per square foot

int getTaskAssignment();

std::string getRoomChoice();

void printTask(int task);

float calcTileCost(float floorArea);

float calcWoodFloor(float floorArea);

float calcCarpetCost(float floorArea);

float calcPaintCost(float wallSurfaceArea);

float calcWallPaperCost(float wallSurfaceArea);

float calcFloorArea(float roomWidth, float roomDepth);

void printWallCostComparisons(float paintCost, float wallpaperCost);

float calcWallSurfaceArea(float roomWidth, float roomDepth, float roomHeight);

void printFloorCostComparisons(float carpetCost, float tileCost, float woodFloorCost);

void getRoomInformation(int task, float &roomWidth, float &roomDepth, float &roomHeight);

void getUserInformation(std::string userName, std::string phoneNumber, std::string userAddress);

void printJobInformation(std::string userName, std::string phoneNumber, std::string userAddress, std::string remodelRoom, int task);


int main() {

    //user information
    std::string userName = " ";
    std::string phoneNumber = " ";
    std::string userAddress = " ";
    std::string remodelRoom = " ";
    float roomWidth = 0;
    float roomDepth = 0;
    float roomHeight = 0;
    float wallSurfaceArea = 0;
    float floorArea = 0;
    int task = 0;

    //estimate variables
    int paintCost = 0;
    int wallpaperCost = 0;
    int carpetCost = 0;
    int tileCost = 0;
    int woodFloorCost = 0;

    //the possible task list
    enum task {
        wallpaper, paint, carpet, tile, woodFloor
    };

    getUserInformation(userName, userAddress, phoneNumber);
    remodelRoom = getRoomChoice();
    task = getTaskAssignment();

    getRoomInformation(task, roomWidth, roomDepth, roomHeight);

    //print the information of the user and room
    printJobInformation(userName, phoneNumber, userAddress, remodelRoom, task);


    //If a wall treatment is to be done, get the wall surface area
    //assume all four walls of the room are to be redone
    if (task == paint or task == wallpaper) {
        //calculate and print the estimates
        wallSurfaceArea = calcWallSurfaceArea(roomWidth, roomDepth, roomHeight);
        paintCost = static_cast<int>(calcPaintCost(wallSurfaceArea));
        wallpaperCost = static_cast<int>(calcWallPaperCost(wallSurfaceArea));
        printWallCostComparisons(paintCost, wallpaperCost);
    }

    //if a floor is to be done, get the square footage of the room
    if (task == carpet or task == tile or task == woodFloor) {
        //calculate and print the estimates
        floorArea = calcFloorArea(roomWidth, roomDepth);
        carpetCost = static_cast<int>(calcCarpetCost(floorArea));
        tileCost = static_cast<int>(calcTileCost(floorArea));
        woodFloorCost = static_cast<int>(calcWoodFloor(floorArea));
        std::cout << "\n****  " << tileCost << "\n";
        printFloorCostComparisons(carpetCost, tileCost, woodFloorCost);
    }
    return 0;
}


void getUserInformation(std::string userName, std::string phoneNumber, std::string userAddress) {
    std::cout << "Customer Name: \n";
    getline(std::cin, userName);

    std::cout << "Customer Phone Number: \n";
    getline(std::cin, phoneNumber);

    std::cout << "Customer Address: \n";
    getline(std::cin, userAddress);
}

std::string getRoomChoice() {//We don't do anything with this information in the program
    std::string room;
    std::cout << "What room are we remodeling?: \n";
    getline(std::cin, room);
    return room;
}

int getTaskAssignment() {  //the possible task list
    //enum task {paint, wallpaper, carpet, tile, woodFloor};
    int task;
    std::cout << "What job needs to be done?\n";
    std::cout << "0: Wallpaper\n";
    std::cout << "1: Paint\n";
    std::cout << "2: Carpet\n";
    std::cout << "3: Tile\n";
    std::cout << "4: Wood Floor\n";
    std::cin >> task;
    return task;
}

void printTask(int task) {//depending on which task was selected, print the corresponding string
    switch (task) {
        case 0:
            std::cout << " Wallpaper ";
            break;
        case 1:
            std::cout << " Paint ";
            break;
        case 2:
            std::cout << " Carpet ";
            break;
        case 3:
            std::cout << " Tile ";
            break;
        case 4:
            std::cout << " Wood floor ";
            break;
        default:
            std::cout << " Invalid task ";
    }

}


void printFloorCostComparisons(float carpetCost, float tileCost, float woodFloorCost) {//print the estimates for the floor coverings
    std::cout << "\n\t\tCarpet Estimate: " << carpetCost;
    std::cout << "\n\t\tTile Estimate: " << tileCost;
    std::cout << "\n\t\tWood Estimate: " << woodFloorCost;
}

void getRoomInformation(int task, float &roomWidth, float &roomDepth, float &roomHeight) {//all the tasks require the width and depth.
    //wall treatments require the height also
    std::cout << "What is the room width? \n";
    std::cin >> roomWidth;
    std::cout << "What is the room depth? \n";
    std::cin >> roomDepth;
    if (task == 0 or task == 1) {
        std::cout << "What is the room height? \n";
        std::cin >> roomHeight;
    }
}

void printJobInformation(const std::string &userName, const std::string &phoneNumber, const std::string &userAddress, const std::string &remodelRoom, const int task) {
    //print user information. This is the only place the remodel room string is used
    std::cout << "\n\nPreparing order for:\n\n" << userName << "\n";
    std::cout << "\t" << phoneNumber << "\n";
    std::cout << "\t" << userAddress << "\n";
    std::cout << "\t" << "Remodeling the " << remodelRoom << " with";
    printTask(task);
}

float calcWallSurfaceArea(float roomWidth, float roomDepth, float roomHeight) {//Calculate the wall surface area. Assume the room is rectangluar
    //Assume the two walls opposite each other are the same
    float wallWide = roomWidth * roomHeight * 2;//two walls
    float wallDeep = roomDepth * roomHeight * 2;//two walls
    return wallWide + wallDeep;
}

float calcPaintCost(float wallSurfaceArea) {//cost estimates are simply surface area times material per sq. foot
    return static_cast<float>(PAINTCOST * wallSurfaceArea);
}

float calcWallPaperCost(float wallSurfaceArea) {//cost estimates are simply surface area times material per sq. foot
    return static_cast<float>(WALLPAPERCOST * wallSurfaceArea);
}

void printWallCostComparisons(float paintCost, float wallpaperCost) {//print the estimates for the wall coverings
    std::cout << "\nPaint Estimate: " << paintCost << "\n\n";
    std::cout << "Wallpaper Estimate: " << wallpaperCost << "\n\n";
}

float calcFloorArea(float roomWidth, float roomDepth) {
    return roomWidth * roomDepth;
}

float calcCarpetCost(float floorArea) {//cost estimates are simply surface area times material per sq. foot
    return static_cast<float>(CARPETCOST * floorArea);
}

float calcTileCost(float floorArea) {//cost estimates are simply surface area times material per sq. foot
    return static_cast<float>(TILECOST * floorArea);
}

float calcWoodFloor(float floorArea) {//cost estimates are simply surface area times material per sq. foot
    return static_cast<float>(WOODCOST * floorArea);
}


