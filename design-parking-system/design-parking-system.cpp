class ParkingSystem {
public:
    unordered_map<int,int> car;
    ParkingSystem(int big, int medium, int small) {
        car.insert(make_pair(1,big));
        car.insert(make_pair(2,medium));
        car.insert(make_pair(3,small));
    }
    
    bool addCar(int carType) {
        auto it=car.find(carType);
        if(it->second>0){
            it->second--;
            return(true);
        }
        return(false);
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */