class Solution {
    public int romanToInt(String s) {
        HashMap<Character, Integer> hm= new HashMap<Character, Integer>();
        hm.put('I',1);
        hm.put('V',5);
        hm.put('X',10);
        hm.put('L',50);
        hm.put('C',100);
         hm.put('D',500);
        hm.put('M',1000);
        
        char c=' ';
        char k=' ';
        int i,a=0;
        for(i=0;i<s.length()-1;i++)
        {
            c=s.charAt(i);
            k=s.charAt(i+1);
            if(hm.get(c)>=hm.get(k))
            {
               a=a+hm.get(c);
            }
            else
            {
                a=a+(hm.get(k)-hm.get(c));
                i++;
            }
        }
         // System.out.println(i);
        if(s.length()-i==1)
        {
            a=a+hm.get(s.charAt(s.length()-1));
        }
        return a;
    }
}