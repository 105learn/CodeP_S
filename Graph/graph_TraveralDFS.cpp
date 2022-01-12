// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;

// const int N=1e5+2;

// bool vis[N];
// vector<int>adjm[N];

// void dfs(int node)
// {
//     vis[node]=1;
//     cout<<node<<" ";
//     for(int nbr: adjm[node]){
//         if(!vis[nbr]){
//             dfs(nbr);
//         }
//     }
// }

// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     int x,y;
//     for(int i=0;i<m;i++){
//         cin>>x>>y;
//         adjm[x].push_back(y);
//         adjm[y].push_back(x);
//     }
//     dfs(1);
//     /**stack<int>s;
//     s.push(1);
//     vis[1]=true;
//     while(!s.empty())
//     {
//         int node=s.top();
//         s.pop();
//         cout<<node<<" ";

//         for(int nbr : adjm[node])
//         {
//             if(!vis[nbr])
//             {
//                 vis[nbr]=true;
//                 s.push(nbr);
//             }
//         }
//     }**/
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// const int N=1e5+2;

// bool vis[N];
// vector<int>g[N];

// void dfs(int source){
//     /*
//     take action on source or vertex after entering the
//     vertex.
//     */
//    cout<<source<<" ";
//    vis[source]=true;
//    for(int child:g[source]){
//        /*take action on child before entering the child*/
//     //    cout<<child<<" ";
//        if(vis[child])continue;
//        dfs(child);
//        /*take action on child after exiting the child*/
//    }cout<<endl;
//    /*take action on source or vertex before exiting the
//    source or vertex
//    */
// }

// int main(){
//     int n,m;
//     cin>>n>>m;
//     for(int i=0;i<m;i++){
//         int v1,v2;
//         cin>>v1>>v2;
//         g[v1].push_back(v2);
//         g[v2].push_back(v1);
//     }
//     dfs(0);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

const int N=1e5+2;
vector<int>g[N];
bool vis[N];

void dfs(int source){
    vis[source]=true;
    cout<<source<<" ";
    for(int child:g[source])
    {
        if(vis[child])continue;
        dfs(child);
    }
}

int main()
{
    int v,e;
    cin>>v>>e;
    for(int i=0;i<e;i++){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    dfs(0);
    return 0;
}