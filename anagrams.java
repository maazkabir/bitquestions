public class Solution {
    // DO NOT MODIFY THE LIST. IT IS READ ONLY
    public ArrayList<ArrayList<Integer>> anagrams(final List<String> A) {
        ArrayList<ArrayList<Integer>> result =new ArrayList<ArrayList<Integer>>();
        HashMap<String, ArrayList<Integer>> map= new HashMap<String, ArrayList<Integer>>();
        for(int i=0;i<A.size();i++)
        {
            char[] c=A.get(i).toCharArray();
            Arrays.sort(c);
            String t=String.valueOf(c);
            if(map.get(t)==null)
            {
                ArrayList<Integer> b=new ArrayList<Integer>();
                b.add(i+1);
                map.put(t,b);
            }
            else
            map.get(t).add(i+1);
        }
        for(ArrayList<Integer> b:map.values())
        {
            result.add(b);
        }
        return result;
        
        
        
         
    }
}
