import java.util.Scanner;
 
public class _231A {
 
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int count = 0;
 
		for (int i = 0; i < n; i++) {
			int a = in.nextInt();
			int b = in.nextInt();
			int c = in.nextInt();
			if ((a == 1 && b == 1) || (a == 1 && c == 1) || (b == 1 && c == 1)) {
				count++;
			}
		}
 
		System.out.println(count);
 
	}
 
}