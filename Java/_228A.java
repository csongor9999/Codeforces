import java.util.HashSet;
import java.util.Scanner;

public class _228A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		
		HashSet<Integer> set = new HashSet<>();
		
		set.add(in.nextInt());
		set.add(in.nextInt());
		set.add(in.nextInt());
		set.add(in.nextInt());
		
		System.out.print(4-set.size());

	}

}
