class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth,int need1, int need2) {
        unsigned long long totalcost = 0;
        if((cost1+cost2)>costBoth){
            totalcost+=(long long)costBoth*(long long)std::min(need1,need2);
            if(need1>need2){
                totalcost+=(cost1<costBoth)?((long long)cost1*(long long)std::abs(need1-need2)):((long long)costBoth*(long long)std::abs(need1-need2));
                std::cout << "1";
            }
            else{
                totalcost+=(cost2<costBoth)?((long long)cost2*(long long)std::abs(need1-need2)):((long long)costBoth*(long long)std::abs(need1-need2));
                std::cout << "2";
            }
        }
        else{
            totalcost = (long long)cost1*(long long)need1+(long long)cost2*(long long)need2;
        }
        return totalcost;
    }
};