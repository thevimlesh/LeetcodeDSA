 vector<long long> nthRowOfPascalTriangle(int n) {
        vector<vector<long long>> triangle(n + 1, vector<long long>(n + 1, 0));
        
        for (int line = 0; line <= n; line++) {
            for (int i = 0; i <= line; i++) {
                if (i == 0 || i == line)
                    triangle[line][i] = 1;
                else
                    triangle[line][i] = (triangle[line - 1][i - 1] + triangle[line - 1][i]) % 1000000007;
            }
        }
        
        vector<long long> result;
        for (int i = 0; i < n; i++) {
            result.push_back(triangle[n - 1][i]);
        }
        
        return result;
    }
};