class ParkingSystem
{

    

public:
    int big;
    int medium;
    int small;
    
    ParkingSystem(int big1, int medium1, int small1)
    {
        big = big1;
        medium = medium1;
        small = small1;
    }

    bool addCar(int carType)
    {
        if (carType == 1)
        {
         
            if (big > 0)
            {
                big--;
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (carType == 2)
        {
            if (medium > 0)
            {
                medium--;
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (carType == 3)
        {
            if (small > 0)
            {
                small--;
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */