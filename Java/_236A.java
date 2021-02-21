import java.util.HashSet;
import java.util.Scanner;

public class _236A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s = in.next();
		HashSet<Character> hs = new HashSet<>();

		for (int i = 0; i < s.length(); i++) {
			hs.add(s.charAt(i));
		}

		if (hs.size() % 2 == 0) {
			System.out.println("CHAT WITH HER!");
		} else {
			System.out.println("IGNORE HIM!");
		}
	}

}
