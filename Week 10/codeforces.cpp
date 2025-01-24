// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,s,m;
//         cin>>n>>s>>m;
//         int a[n][n];

//         for(int i=0;i<n;i++)
//         {
//            cin>>a[i][0]>>a[i][1];
//         }
//         int count=0;
//         if(a[0][0]>=s)
//         {
//             count++;
//         }
//         for(int i=0;i<n;i++)
//         {
            
//             if(i<n-1)
//             {
//                 if((a[i+1][0]-a[i][1])>=s)
//                 {
//                     count++;
//                 }
//             }
//             else
//             {
//                 if((m-a[i][1])>=s)
//                 {
//                    count++;
//                 }
//             }
//         }
//         if(count==0)
//         { cout<<"NO"<<endl;}
//         else{
//             cout<<"YES"<<endl;}
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int a1,a2,b1,b2;
//         cin>>a1>>a2>>b1>>b2;
//         int count=0;
//         if(a1>b1 && a2>b2)
//         {
//             count++;
//         }
//         if(a1>b2 && a2>b1)
//         {
//             count++;
//         }
//         if(a2>b1 && a1>b2)
//         {
//             count++;
//         }
//         if(a2>b2 && a1>b1)
//         {
//             count++;
//         }
//         cout<<count<<endl;
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

// Function to determine if Suneet wins given the flipped cards
bool doesSuneetWin(int s1, int s2, int sl1, int sl2) {
    int suneetWins = 0;
    int slavicWins = 0;

    if (s1 > sl1) suneetWins++;
    if (s1 < sl1) slavicWins++;
    if (s2 > sl2) suneetWins++;
    if (s2 < sl2) slavicWins++;

    return suneetWins > slavicWins;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int suneetWins = 0;

        if (doesSuneetWin(a1, a2, b1, b2)) suneetWins++;
        
        if (doesSuneetWin(a1, a2, b2, b1)) suneetWins++;

        if (doesSuneetWin(a2, a1, b1, b2)) suneetWins++;
        
        if (doesSuneetWin(a2, a1, b2, b1)) suneetWins++;

        cout << suneetWins << endl;
    }

    return 0;

}


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        
        vector<pair<int, int>> intervals(n);
        for (int i = 0; i < n; i++) {
            cin >> intervals[i].first >> intervals[i].second;
        }
        
        bool canShower = false;

        // Check the time before the first task
        if (intervals[0].first >= s) {
            canShower = true;
        }

        // Check between tasks
        for (int i = 1; i < n; i++) {
            if (intervals[i].first - intervals[i-1].second >= s) {
                canShower = true;
                break;
            }
        }

        // Check after the last task
        if (m - intervals[n-1].second >= s) {
            canShower = true;
        }

        cout << (canShower ? "YES" : "NO") << endl;
    }
    
    return 0;
}

