#include<bits/stdc++.h>
using namespace std;

// Brute Force
    int winner(vector<bool> &players, int players_left, int n, int k , int ind){

        // Base case
        if(players_left == 1){
            for(int i = 0;i<n;i++){
                if(players[i] == 0)
                    return i+1;  // counting is from 1.
            }
        }

        // determining which player to eliminate
        int toEliminate = (k-1) % players_left;

        // getting the index of that player
        while(toEliminate--){
            ind = (ind+1)%n;   // To traverse the array in a circular way.

            // If the player is already eliminated, then don't count that.
            while(players[ind] == 1)
                ind = (ind + 1) % n;
        }

        // Got the index of the player that needs to be eliminated
        players[ind] = 1;

        // Setting the pointer to the player from where we need to start the game again.
        while(players[ind] == 1)
            ind = (ind + 1)%n;
        
        // Repeating the same process for all the players
        return winner(players, players_left-1,n,k,ind);
    }

int winner(int n, int k){
    if(n==1)
        return 1;
    
    return (winner(n-1,k)) % n ;
}

int main()
{
    cout<<winner(6,4);
 return 0;
}