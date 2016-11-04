import java.util.Hashtable;

public class IsPermutation{
	public static boolean isPermutation(String s1, String s2){
		if(s1 == null || s2 == null || (s1.length() != s2.length()) ){
			return false;
		}
		
		int[] array = new int[128];
		int[] array2 = new int[128];
		Hashtable<Integer, Integer> ht = new Hashtable<Integer,Integer>();
		for(int i = 0; i < s1.length(); i++){
			array[s1.charAt(i)]++;
			ht.put(array[s1.charAt(i)]*s1.charAt(i), 1);
		}
		
		for(int i = 0; i < s2.length(); i++){
			array2[s2.charAt(i)]++;	
			if(ht.get(array2[s2.charAt(i)]*s2.charAt(i)) == null){
				return false;
			}
		}
		return true;
	}


}
