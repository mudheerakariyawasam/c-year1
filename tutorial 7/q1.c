#include <stdio.h>
#define MAX_CHARS_NAME 100

struct gps_point{
    double latitude;
    //enum latitude_pole{NORTH,SOUTH};;
    double longitude;
    //enum longitude_hemisphere{EAST,WEST};;
    char location_name[MAX_CHARS_NAME];
};

const char* convertLP(enum L_P lp){
    switch(lp){
        case NORTH: return "North";
        break;
        case SOUTH: return "South";
        break;
    }
}

const char* convertLH(enum L_H lh){
    switch(lh){
        case EAST: return "East";
        break;
        case WEST: return "West";
        break;
    }
}

int main(){
    struct gps_point ucsc,uom;

    ucsc.latitude=6.902037;
    //ucsc.latitude_pole=NORTH;
    ucsc.longitude=79.8585899;
    //ucsc.longitude_hemisphere=EAST;
    strcpy(ucsc.location_name,"University of Colombo School of Computing");

    uom.latitude=6.7968524;
    //uom.latitude_pole=NORTH;
    uom.longitude=79.8957385;
    //uom.longitude_hemisphere=EAST;
    strcpy(uom.location_name,"University of Moratuwa");

    printf("%s is situated at (Latitude: %s %lf, longitude: %s %lf).\n",ucsc.location_name,"NORTH",ucsc.latitude,"EAST",ucsc.longitude);
    printf("%s is situated at (Latitude: %s %lf, longitude: %s %lf).\n",uom.location_name,"NORTH",uom.latitude,"EAST",uom.longitude);

    return 0;
}
