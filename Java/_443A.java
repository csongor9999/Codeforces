import java.util.HashSet;
import java.util.Scanner;

public class _443A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s = in.nextLine();
		String[] arr = s.substring(1, s.length() - 1).split("\\s*,\\s*");

		HashSet<String> set = new HashSet<>();

		for (int i = 0; i < arr.length; i++) {
			set.add(arr[i]);
		}

		if (s.length() > 2) {
			System.out.println(set.size());
		} else {
			System.out.println(0);
		}

	}

}
