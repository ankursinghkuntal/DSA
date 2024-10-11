// There are n cities and m edges connected by some number of flights. You are given an array flights where flights[i] = [fromi, toi, pricei] 
// indicates that there is a flight from the city fromi to city toi with cost pricei.

// You are also given three integers src, dst, and k, return the cheapest price from src to dst with at most k stops. If there is no such route, 
// return -1.

// Note: The price from city A to B may be different From the price from city B to A.




    // int CheapestFLight(int n, vector<vector<int>>& flights, int src, int dst, int K) {
    //     vector<pair<int, int>> adj[n];
    //     for (int i = 0; i < flights.size(); i++) {
    //         int from = flights[i][0];
    //         int to = flights[i][1];
    //         int price = flights[i][2];
            
    //         adj[from].push_back({to, price});
    //     }
    
    //     vector<int> cost(n, 100000000);
    //     cost[src] = 0;
    
    //     queue<pair<int, pair<int, int>>> q;  // {node, {current cost, stops}}
    //     q.push({src, {0, 0}});
    
    //     while (!q.empty()) {
    //         int from = q.front().first;
    //         int current_price = q.front().second.first;
    //         int stops = q.front().second.second;
    //         q.pop();
    
    //         if (stops > K) continue;
    
    //         for (auto& it : adj[from]) {
    //             int to = it.first;
    //             int price_it = it.second;
    
    //             if (current_price + price_it < cost[to]) {
    //                 cost[to] = current_price + price_it;
    //                 q.push({to, {cost[to], stops + 1}});
    //             }
    //         }
    //     }
    
    //     return cost[dst] == 100000000 ? -1 : cost[dst];
    // }






    // int CheapestFLight(int n, vector<vector<int>>& flights, int src, int dst, int K) {
    // vector<pair<int, int>> adj[n];
    // for (int i = 0; i < flights.size(); i++) {
    //     int from = flights[i][0];
    //     int to = flights[i][1];
    //     int price = flights[i][2];
    //     adj[from].push_back({to, price});
    // }

    // vector<int> cost(n, INT_MAX);
    // cost[src] = 0;

    // priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    // pq.push({0, {src, 0}});  // {current price, {node, stops}}

    // while (!pq.empty()) {
    //     int current_price = pq.top().first;
    //     int from = pq.top().second.first;
    //     int stops = pq.top().second.second;
    //     pq.pop();

    //     if (from == dst) return current_price;
    //     if (stops > K) continue;

    //     for (auto& it : adj[from]) {
    //         int to = it.first;
    //         int price_it = it.second;

    //         if (current_price + price_it < cost[to] || stops < K) {
    //             cost[to] = current_price + price_it;
    //             pq.push({cost[to], {to, stops + 1}});
    //         }
    //     }
    // }

    // return -1;
    // }


    // TC  => ElogV