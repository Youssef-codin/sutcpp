#include <iostream>

using namespace std;

struct professor {
    string name;
    int papers;
    int hours;
    string rank;
};

void rankResearchers(professor profs[], int size){

    enum requiredHours { 
        pointsPerPaper = 20,
        pointsPer50Hours = 10,

        assistMinPoints = 50,
        lecMinPoints = 80,
        AssocMinPoints = 120,
        profMinPoints = 150,
    };

    for(int i = 0; i < size; i++){
        int totalPoints = 0;

        totalPoints += pointsPer50Hours * (profs[i].hours / 50);
        totalPoints += pointsPerPaper * profs[i].papers;

        if(totalPoints >= profMinPoints){
            profs[i].rank = "Professor";

        }else if(totalPoints >= AssocMinPoints){
            profs[i].rank = "Associate";

        }else if (totalPoints >= lecMinPoints){
            profs[i].rank = "Lecturer";

        }else if(totalPoints >= assistMinPoints) {
            profs[i].rank = "Assistant";

        }else {
            profs[i].rank = "Unranked";
        }
    }
}

enum carTypes {
    car,
    bus,
    bike,
    misc,
};

struct vehicleRecipt {
    int id;
    carTypes type;
    bool isStaff;
    int entryT;
    int exitT;
    int total;
};

void parkingSys(vehicleRecipt vics[], int size){
    enum rates {
        carRate = 25,
        busRate = 45,
        bikeRate= 15,
        miscRate= 10,
    };

    for(int i = 0; i < size; i++){
        int totalTime = vics[i].exitT - vics[i].entryT;

        if(vics[i].type == car){
            vics[i].total = totalTime * carRate;

        }else if (vics[i].type == bus){
            vics[i].total = totalTime * busRate;

        }else if (vics[i].type == bike){
            vics[i].total = totalTime * bikeRate;

        }else {
            vics[i].total = totalTime * miscRate;

        }

        if(vics[i].isStaff){
            vics[i].total -= vics[i].total * 10/100;

        }
    }
}

string typeToString(carTypes type){
    switch (type){
        case car:
            return "Car";
        case bus:
            return "Bus";
        case bike:
            return "Bike";
        default:
            return "Misc";
    }
}

int main () {

    cout << "=== RANK PROFESSORS ===\n";

    professor profs[] = {
        {"Dr. Omar", 7, 120},
        {"Dr. Sara", 3, 180}, 
        {"Eng. Ahmed", 1, 200}, 
        {"Dr. Dalia",5 , 140},
        {"Eng. Mohamed", 0, 30},
    };

    rankResearchers(profs, sizeof(profs)/sizeof(profs[0]));

    for(auto prof : profs){
        cout << "Name: " << prof.name << " | ";
        cout << "Papers: " << prof.papers << " | ";
        cout << "Hours: " << prof.hours << " | ";
        cout << "Rank: " << prof.rank << '\n';
    }

    cout << "=== SMART PARKING SYS ===\n";

    vehicleRecipt vics[] = {
        {1, car, false, 8, 14},
        {2, bus, false, 7, 16},
        {3, car, true, 9, 13},
        {4, car, false, 10, 15},
        {5, car, true, 8, 14},
        {6, bike, false, 10, 15},
    };

    parkingSys(vics, sizeof(vics)/sizeof(vics[0]));

    for(auto vic : vics){
        cout << "Vic ID: " << vic.id << " | ";
        cout << "Type: " << typeToString(vic.type) << " | ";
        cout << "Entry: " << vic.entryT << " | ";
        cout << "Exit: " << vic.exitT << " | ";
        cout << "Total: " << vic.total << '\n';
    }

    return 0;
}
