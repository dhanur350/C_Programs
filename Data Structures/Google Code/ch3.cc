#include <bits/stdc++.h>
using namespace std;
vector<int> GetHIndexScore(vector<int> citations_per_paper)
{
    vector<int> h_index;
    // TODO: Calculate and return h-index score for each paper.

    int N = citations_per_paper.size();
    int H_score = 0;   // Will be used to update H score after iterating through every paper
    int C_tracker = 0; // Will keep track of number of papers that have more citations than current H score

    for (int i = 0; i < N; i++)
    {
        if (citations_per_paper[i] > H_score)
        {
            // Checking if number of papers which has higher citations than current H_score are more than current H_score
            if (C_tracker > H_score)
            {
                H_score = C_tracker; // Updating H_score
                C_tracker = 0;

                for (int j = 0; j <= i; j++)
                {
                    // Keeping track of number of papers which have more citations than current H_score
                    if (citations_per_paper[j] > H_score)
                    {
                        C_tracker++;
                    }
                }
            }
        }
        h_index.push_back(H_score);
    }
    return h_index;
}

int main()
{
    int tests;
    cin >> tests;

    for (int test_case = 1; test_case <= tests; test_case++)
    {
        // Get number of papers for this test case
        int paper_count;
        cin >> paper_count;
        // Get number of citations for each paper
        vector<int> citations(paper_count);

        for (int i = 0; i < paper_count; i++)
        {
            cin >> citations[i];
        }

        vector<int> answer = GetHIndexScore(citations);
        cout << "Case #" << test_case << ": ";

        for (int i = 0; i < answer.size(); i++)
        {
            cout << answer[i] << " ";
        }

        cout << endl;
    }
    return 0;
}