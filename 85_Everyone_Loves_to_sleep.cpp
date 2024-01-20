#include <iostream>
#include <map>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) { // Loop through each test case
        int n; // number of alarm clocks
        int H; // Hours
        int M; // minutes
        cin >> n >> H >> M; // Read the number of alarm clocks, hours, and minutes for each test case

        map<int, int> mp; // Map to store alarm times

        // Read the alarm times for each clock and store them in the map
        for (int i = 0; i < n; ++i) {
            int h, m;
            cin >> h >> m;
            int min_converted = h * 60 + m; // Convert hours and minutes to total minutes
            mp[min_converted]++; // Increment the count for this minute in the map (indicating an alarm at this time)
        }

        int total = H * 60 + M; // Convert the input hours and minutes to total minutes
        int t = 0; // Counter for the solution

        // Loop until an alarm time is found in the map
        while (!mp[total % (24 * 60)]) {
            total++; // Increment the time by one minute
            t++; // Increment the counter
        }


        // while (!mp[total % (24 * 60)])
        // {
        //     total++;
        //     t++;
        // }


        

        t = t % (24 * 60); // Ensure the time is within the 24-hour range

        // Output the found alarm time after converting back to hours and minutes
        cout << t / 60 << " " << t % 60 << endl;
    }
    return 0;
}


        
       