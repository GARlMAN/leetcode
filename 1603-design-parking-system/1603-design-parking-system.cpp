class ParkingSystem {
public:
    int big_total;
    int small_total;
    int mid_Total;
    ParkingSystem(int big, int medium, int small) {
        big_total = big;
        small_total = small;
        mid_Total = medium;
    }
    
    bool addCar(int carType) {
        if(carType == 1){
            big_total--;
            return big_total >= 0;
        }
        else if(carType == 2){
            mid_Total--;
            return mid_Total >= 0;
        }
        else if(carType == 3){
            small_total--;
            return small_total >= 0;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */