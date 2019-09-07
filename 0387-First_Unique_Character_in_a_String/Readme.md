## Learning from code

- solution:
    - I think this solution is very straight-foward.
    - By doing this->`if(word.find(s[i]) != word.end()) word[s[i]]++;
            else word[s[i]] = 1;` So map value can be initial as 0;
    
- Another solution is using two **for-loop**, but this can't pass the testing input, 'cc'.
    - And it may cause a lot of time since its time compacity is O(n^2).