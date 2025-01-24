#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //upper flipped solid diamond
    for(int row=0;row<n;row++)
    {   //left half pyramyd
        for(int col=0;col<n-row;col++)
        {cout<<"*";}
        // mid full pyramid
        for(int col=0;col<2*row+1;col++)
        {cout<<" ";}
        //right half pyramid
        for(int col=0;col<n-row;col++)
        {cout<<"*";}
        cout<<endl;
    }

    // lower flipped solid diamond

    for(int row=0;row<n;row++)
    {   //left half pyramyd
        for(int col=0;col<row+1;col++)
        {cout<<"*";}
        // mid full pyramid
        for(int col=0;col<2*n-2*row-1;col++)
        {cout<<" ";}
        //right half pyramid
        for(int col=0;col<row+1;col++)
        {cout<<"*";}
        cout<<endl;
    }
    return 0;
}





// below code is formed by using hollow diamond

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//      for(int row=0; row<n; row=row+1)
//     {   
//         //spaces
//         for(int col=0; col<n-row-1;col++)
//         {
//             cout<<"*";
//         }
//         // print * 
//         for(int col=0;col<2*row+1;col++)
//         {   if(col==0 || col==2*row)
//             cout<<"*";  
//             else{cout<<" ";}
//         }
//         for(int col=0; col<n-row-1;col++)
//         {cout<<"*";}
//         cout<<endl;
//     }
//     // inverted pyramid
//     for (int row=0;row<n;row++)
//     {
//         for(int col=0;col<row;col++)
//         {cout<<"*";}
//         for(int col=0;col<2*n-2*row-1;col++)
//         {   //first and last *
//             if(col==0||col==2*n-2*row-2)
//             {cout<<"*";}
//             // other spaces
//             else{ cout<<" ";}
//         } 
//         for(int col=0; col<row;col++)
//         {cout<<"*";}
//         cout<<endl;

//     }
//     return 0;
// }