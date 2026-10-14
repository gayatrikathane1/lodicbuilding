
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;

        for (int i = 0; i < sentences.size(); i++) {
            int count = 1;

            for (int j = 0; j < sentences[i].size(); j++) {
                if (sentences[i][j] == ' ') {
                    count++;
                }
            }

            if (count > maxi) {
                maxi = count;
            }
        }

        return maxi;
    }
};

int main() {
    Solution obj;

    vector<string> sentences = {
        "I love coding",
        "I am learning DSA",
        "Hello"
    };

    cout << obj.mostWordsFound(sentences);

    return 0;
}


