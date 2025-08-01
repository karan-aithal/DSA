1st question 
using System;
using System.Collections.Generic;

class Matchmaker
{
    public static void Solve()
    {
        int T = int.Parse(Console.ReadLine()); 
        for (int testCase = 0; testCase < T; testCase++)
        {
            int N = int.Parse(Console.ReadLine());
            string[] parts = Console.ReadLine().Split();
            int[] ratings = Array.ConvertAll(parts, int.Parse);
            int K = int.Parse(Console.ReadLine());

            int[] ans = new int[N];
            Array.Fill(ans, -1); // Initially mark all as unmatched

            List<int> unmatched = new List<int>();

            for (int i = 0; i < N; i++)
            {
                int lower = ratings[i] - K;
                int upper = ratings[i] + K;
                bool matched = false;

                for (int j = 0; j < unmatched.Count; j++)
                {
                    int idx = unmatched[j];
                    if (ratings[idx] >= lower && ratings[idx] <= upper)
                    {
                        ans[i] = idx + 1; 
                        ans[idx] = i + 1;
                        unmatched.RemoveAt(j);
                        matched = true;
                        break;
                    }
                }

                if (!matched)
                    unmatched.Add(i); 
            }

            for (int i = 0; i < N; i++)
                if (ans[i] == -1)
                    ans[i] = 0;

            Console.WriteLine(string.Join(" ", ans));
        }
    }

    static void Main()
    {
        Solve();
    }
}