class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        
        int freq[10] = {0};

        for (int x : digits) {
            freq[x]++;
        }

        set<int> st;

        for (int i = 1; i <= 9; i++) {          
            for (int j = 0; j <= 9; j++) {      
                for (int k = 0; k <= 8; k += 2) { 

                    int need[10] = {0};

                    need[i]++;
                    need[j]++;
                    need[k]++;

                    bool possible = true;

                    for (int d = 0; d <= 9; d++) {
                        if (need[d] > freq[d]) {
                            possible = false;
                            break;
                        }
                    }

                    if (possible) {
                        int num = i * 100 + j * 10 + k;
                        st.insert(num);
                    }
                }
            }
        }

        return st.size();
    }
};