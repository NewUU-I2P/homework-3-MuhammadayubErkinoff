void problemSolution1(float consumed_water) {
    float cost=13;
    if(consumed_water>=60) {
        cost+=12+2.4+14;
        cost+=(consumed_water-60)*1.5;
    }
    else if(consumed_water>=50) {
        cost+=12+2.4;
        cost+=(consumed_water-50)*1.4;
    }
    else if(consumed_water>=30) {
        cost+=12;
        cost+=(consumed_water-50)*0.12;
    }
    else{
        cost+=(consumed_water-50)*0.4;
    }
    return cost;
}
