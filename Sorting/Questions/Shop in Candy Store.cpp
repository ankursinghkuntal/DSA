//  In a candy store, there are n different types of candies available and the prices of all the N different types of candies are provided to you. 
//  You are now provided with an attractive offer.
//  For every candy you buy from the store and get K other candies ( all are different types ) for free. Now you have to answer two questions. Firstly,
//  you have to find what is the minimum amount of money you have to spend to buy all the n different candies. Secondly, you have to find what is the
//  maximum amount of money you have to spend to buy all the n different candies.
//  In both the cases you must utilize the offer i.e. you buy one candy and get k other candies for free.
   
   
   
   
    // vector<int> candyStore(int candies[], int N, int K)
    // {
    //     // Write Your Code here
    //     sort(candies,candies+N);
    //     int m = N/(K+1);
    //     if(N%(K+1) != 0) m+=1;
    //     int minSum = 0, maxSum = 0;
    //     for(int i = 0; i < m; i++){
    //         minSum += candies[i];
    //         maxSum += candies[N-i-1];
    //     }
    //     return {minSum,maxSum};
    // }