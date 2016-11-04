
public class InterviewQs{

	public static void main(String[] args){
		testAll();	
	}
	public static void testAll(){
		testPermutation();
	}
	
	public static void testPermutation(){
		String s1 = "cat";
		String s2 = null;
		System.out.println("Is " + s1 + " and " + s2 + " a permutation? " + IsPermutation.isPermutation(s1, s2));
		s1 = "cat";
		s2 = "atc";
		System.out.println("Is " + s1 + " and " + s2 + " a permutation? " + IsPermutation.isPermutation(s1, s2));
		s1 = "cats";
		s2 = "atc";
		System.out.println("Is " + s1 + " and " + s2 + " a permutation? " + IsPermutation.isPermutation(s1, s2));
		s1 = "cbt";
		s2 = "atc";
		System.out.println("Is " + s1 + " and " + s2 + " a permutation? " + IsPermutation.isPermutation(s1, s2));
		s1 = "aat";
		s2 = "taa";
		System.out.println("Is " + s1 + " and " + s2 + " a permutation? " + IsPermutation.isPermutation(s1, s2));
		s1 = "#$*(efnaASDJagfj+_4a";
		s2 = "#Jfj+fn$*(eD_aASag4a";
		System.out.println("Is " + s1 + " and " + s2 + " a permutation? " + IsPermutation.isPermutation(s1, s2));
		
	}
	
}