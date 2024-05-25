class Solution {
public boolean canConstruct(String s, int k) {

    int n = s.length();
    
    if(n<k)
    {
        return false;
    }
    
    HashMap<Character,Integer> map = new HashMap<>();
    
    for(int i=0;i<n;i++)
    {
        char c = s.charAt(i);
        map.put(c,map.getOrDefault(c,0)+1);
    }
    
    int ans = 0; 
    
    for(Map.Entry<Character,Integer> e:map.entrySet())
    {
        int v = e.getValue();
        
        if(v%2!=0)
        {
            ans++;
        }
    }
    
    return ans<=k;
}
}