#include <bits/stdc++.h>
using namespace std;

class RideSharingSystem {
public:
    RideSharingSystem() {
        // 3 1 [2,3]
        // 2 [2,3] 5
    }
    queue<int> rider;
    queue<int> driver;

    void addRider(int riderId) { rider.push(riderId); }

    void addDriver(int driverId) { driver.push(driverId); }

    vector<int> matchDriverWithRider() {
        if (driver.empty() || rider.empty())
            return {-1, -1};
        int riderId = rider.front();
        rider.pop();
        int driverId = driver.front();
        driver.pop();
        return {driverId, riderId};
    }

    void cancelRider(int riderId) {

        int size = rider.size();

        for (int i = 0; i < size; i++) {
            int current = rider.front();
            rider.pop();
            if (riderId != current) {
                rider.push(current);
            }
        }
        return;
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */