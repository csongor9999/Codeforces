import java.util.Scanner;

public class _479A {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int a = in.nextInt();
		int b = in.nextInt();
		int c = in.nextInt();

		int ans = a + b + c;
		
		ans = Math.max(ans, (a+b)*c);
		ans = Math.max(ans, (b+c)*a);
		ans = Math.max(ans, a*b*c);
		
		System.out.print(ans);

	}

}
