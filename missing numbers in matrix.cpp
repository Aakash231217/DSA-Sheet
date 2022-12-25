 long long int MissingNo(vector<vector<int> >& matrix) {
        // Code here
         int n = matrix.size();
        
        unordered_set<long long> full;
        unordered_set<long long> missing;

        long long diag1 = 0,diag2 = 0;
        bool flag1 = 0,flag2 = 0;
        for(int i = 0; i < n; i++)
        {
            
            diag1 += matrix[i][i];//calculate left diagonal sum
            if(matrix[i][i] == 0) flag1 = 1;//mark the zero
            
            diag2 += matrix[i][n-1-i];//calculate right diagonal sum
            if(matrix[i][n-1-i] == 0) flag2 = 1;//mark the zero
            
            long long a = 0,b = 0 ;
            bool flaga = 0,flagb = 0;
            for(int j=0;j<n;j++)
            {
                a += matrix[i][j]; // calculate the rows sum
                if(matrix[i][j] == 0) flaga = 1; // mark the zero
                b += matrix[j][i];//calculate the col sum
                if(matrix[j][i] == 0) flagb = 1;//mark the zero
            }
            //insert the values in appropriate sets
            if(flaga)
                missing.insert(a);
            else
                full.insert(a);
            
            if(flagb)
                missing.insert(b);
            else
                full.insert(b);
            
        }
         
        if(flag1)
            missing.insert(diag1);
        else
            full.insert(diag1);
        if(flag2)
            missing.insert(diag2);
        else
            full.insert(diag2);
      
        //check for conditions and return the ans
        if(full.size()==1 && missing.size()==1)
        {
            if(*full.begin()<=*missing.begin())
            return -1;
            return *full.begin() - *missing.begin();
        }
        else
        return -1;
    }
};
