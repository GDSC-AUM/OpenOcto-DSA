#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <string.h>

using namespace std;

/*>O(n^2)*/
vector<int> PrimsBruteForce(int N, vector<pair<int, int>> adj[])
{
    vector<int> key(N, INT_MAX); //store minimal distance
    vector<bool> MST(N, false);  //store is that node taken in MST or not
    vector<int> parent(N, -1);   //store parent of all node so we create MST

    //key first node as 0;
    key[0] = 0;

    //loop for N-1 nodes because first node is always pre processed
    for (int count = 1; count < N; count++)
    {
        int minIndex = 0;
        int minKeyValue = INT_MAX;
        //loop for find minkey value so we proceed further
        //we consider value which are not taken in MST
        //means MST[i] == false
        for (int i = 0; i < N; i++)
        {
            if (!MST[i] && key[i] < minKeyValue)
            {
                minKeyValue = key[i];
                minIndex = i;
            }
        }

        //node which has smallest value in key array we take in in out MST
        MST[minIndex] = true;

        //for all adjacent node of that are not taken in MST node
        //mark key[i] = min(key[i],weight)
        for (auto it : adj[minIndex])
        {
            //v = it.first;
            if (!MST[it.first] && it.second < key[it.first])
            {
                key[it.first] = it.second; //key[v] = weight
                parent[it.first] = minIndex;
            }
        }
    }
    return parent;
}

// O(N+E+nlogn) => O(nlogn)
//here we have optimised that inner for loop for finding min value in key
//here we used heap means pq in C++
vector<int> PrimsOptimised(int N, vector<pair<int, int>> adj[])
{
    vector<int> key(N, INT_MAX); //store minimal distance
    vector<bool> MST(N, false);  //store is that node taken in MST or not
    vector<int> parent(N, -1);   //store parent of all node so we create MST

    // priority queue search in logn
    // minimal pq adding
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    //key first node as 0;
    key[0] = 0;

    //{key[i],node}
    pq.push({0, 0});

    //loop for N-1 nodes because first node is always pre processed
    for (int count = 1; count < N; count++)
    {
        //top of pq give us node who have minimam value in key arr
        int minNode = pq.top().second;
        pq.pop(); //poped because it is processed

        //node which has smallest value in key array we take in in out MST
        MST[minNode] = true;

        //for all adjacent node of that are not taken in MST node
        //mark key[i] = min(key[i],weight)
        for (auto it : adj[minNode])
        {
            //v = it.first;
            if (!MST[it.first] && it.second < key[it.first])
            {
                key[it.first] = it.second; //key[v] = weight
                //pushing this new seted value in pq
                pq.push({key[it.first], it.first});
                parent[it.first] = minNode;
            }
        }
    }
    return parent;
}

int main()
{
    //graph generating
    vector<pair<int, int>> adj[6];

    adj[0].push_back({1, 2});
    adj[0].push_back({3, 6});

    adj[1].push_back({0, 2});
    adj[1].push_back({2, 3});
    adj[1].push_back({3, 8});
    adj[1].push_back({4, 5});

    adj[2].push_back({1, 3});
    adj[2].push_back({4, 7});

    adj[3].push_back({0, 6});
    adj[3].push_back({1, 8});

    adj[4].push_back({1, 5});
    adj[4].push_back({2, 7});

    //parent array to store parent of every node
    vector<int> parent = PrimsOptimised(5, adj);

    for (int i = 1; i < parent.size(); i++)
        cout << i << " " << parent[i] << "\n";

    return 0;
}