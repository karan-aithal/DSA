class Solution {
public:
    int countCollisions(string directions) {
        stack<char> stck;

        int count = 0;
        int n = directions.size();

        for (int i = 0; i < n; i++) {

            if (directions[i] == 'R')
                stck.push('R');

            else if (directions[i] == 'S') {
                //if (!stck.empty() && stck.top() == 'L')
                    // do nothing
                    if (!stck.empty() && stck.top() == 'R') {
                        count++;
                        stck.pop();
                        stck.push('S');
                    }
                    else
                    stck.push('S');
            }

            else if (directions[i] == 'L') {
                if (!stck.empty() && stck.top() == 'S')
                    count++;

                if (!stck.empty() && stck.top() == 'R') {
                    count = count + 2;
                    stck.pop();
                    stck.push('S');
                }

                // if (stck.top() == 'L')
                // do nothing
            }
        }

        while (!stck.empty()) {
            if (stck.top() == 'S') {
                stck.pop();
                while (!stck.empty() && stck.top() == 'R') {
                    // All reamaining R s are collided to the last S
                    count++;
                    stck.pop();
                }

            } else
                stck.pop(); // if Only R or L present keep poping
        }
        return count;
    }
};