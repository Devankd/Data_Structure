#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        int n;
        cin >> n;  // Number of lights
        vector<int> switches(2 * n);
        
        // Read the states of the switches
        for (int i = 0; i < 2 * n; ++i) {
            cin >> switches[i];
        }
        
        // Count the number of switches that are on (1s)
        int count_1s = 0;
        for (int state : switches) {
            if (state == 1) {
                count_1s++;
            }
        }
        
        // Calculate minimum and maximum number of lights on
        int min_lights_on = 0;
        if (count_1s > 0) {
            min_lights_on = (count_1s == 1) ? 0 : (count_1s / 2);
        }
        
        int max_lights_on = min(n, count_1s);
        
        // Output the results for the current test case
        cout << min_lights_on << " " << max_lights_on << endl;
    }
    
    return 0;
}


// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         vector<int>switc(2*n);
//         for(int i=0; i<(2*n); i++)
//         {
//             cin>>switc[i];
//         }
//         int count1 = 0;
//         for(int i=0; i< (2*n); i++)
//         {
//             if(switc[i]==1)
//             {
//                 count1++;
//             }
//         }
//         int mini = count1 %2;
//         int maxi = min(n, count1);
//         cout<<mini<<" "<<maxi<<endl;
//     }
//   return 0;
// }