#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int findMinDifference(vector<string> &timepoints)
{
    // step1 => convert time string into minute integer value
    int n= timepoints.size();
    vector<int>minutes;
    for(int i=0; i<n; i++)
    {
       minutes[i] = stoi(timepoints[i].substr(0,2))*60 + stoi(timepoints[i].substr(3,2)); // string to integer
    }
    // step2 => sort

    sort(minutes.begin(), minutes.end());
   
    // step3 => calculate min diffference

    int mini= INT8_MAX;
    
    for(int i=0; i<n-1; i++)
    {
        int diff= minutes[i+1]-minutes[i];
        mini= min(mini, diff);
    }

    //something missing
    int last_difference = (minutes[0] + 1440) - minutes[n-1];
    mini = min( mini, last_difference);

    return mini;


    
}

int main()
{
    vector<string> time;
    
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>time[i];
    }
    cout<<findMinDifference(time);
}