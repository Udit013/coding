import java.util.*;
public class Merge {
        public String mergeAlternately(String word1, String word2) {
          final int n = Math.min(word1.length(), word2.length());
            String s="";
          for (int i = 0; i < n; i++) {
            s+=word1.charAt(i);
            s+=word2.charAt(i);
          }
          return s+=word1.substring(n)+word2.substring(n);
        }
      public static void main(String[] args){
            Scanner sc= new Scanner (System.in);
          System.out.println("ENter two words: ");
            String w1=sc.next();
            String w2=sc.next();
            Merge obj=new Merge();
            
            System.out.println("the result is "+ obj.mergeAlternately(w1,w2));
      }
}
