package easy;

public class _1603 {

    int[] slot;
    
    public _1603(int big, int medium, int small) {
        slot = new int[3];
        slot[0] = big;
        slot[1] = medium;
        slot[2] = small;
    }

    public boolean addCar(int carType) {
        for (int i = 0; i < slot.length; i++) {
            if (carType == i+1) {
                if (slot[i] > 0) {
                    slot[i] = slot[i] - 1;
                    return true;
                }
            }
        }
        return false;
    }

    public static void main(String[] args) {

        _1603 parkingSystem = new _1603(1, 1, 0);

        System.out.println(parkingSystem.addCar(1));
        System.out.println(parkingSystem.addCar(2));
        System.out.println(parkingSystem.addCar(3));
        System.out.println(parkingSystem.addCar(1));

    }
}

/*
Design a parking system for a parking lot. 
The parking lot has three kinds of parking spaces: big, medium, and small, with a fixed number of slots for each size.

Implement the ParkingSystem class:

    ParkingSystem(int big, int medium, int small) Initializes object of the ParkingSystem class. 
    The number of slots for each parking space are given as part of the constructor.
    bool addCar(int carType) Checks whether there is a parking space of carType for the car that wants to get into the parking lot. carType can be of three kinds: big, medium, or small, which are represented by 1, 2, and 3 respectively. A car can only park in a parking space of its carType. 
    If there is no space available, return false, else park the car in that size space and return true.

*/
