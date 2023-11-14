#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    bool b=1;
    for(int i=0;i<17;i++){
        if(macAddress[i]!='F'&&macAddress[i]!=':'){
            b=0;
            break;
        }
    }
    if(b){
        return "Broadcast";
    }
    else{
        if(macAddress[1]=='0'||macAddress[1]=='2'||macAddress[1]=='4'||macAddress[1]=='6'||macAddress[1]=='8'||macAddress[1]=='A'||macAddress[1]=='C'||macAddress[1]=='E'){
            return "Unicast";
        }
        else{
            return "Multicast";
        }
    }
}
