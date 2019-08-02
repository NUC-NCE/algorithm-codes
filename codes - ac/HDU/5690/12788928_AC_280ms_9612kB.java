import java.math.BigInteger;
import java.util.Scanner;
public class Main {
	static int n;
	static int k;
	static long q(long x,long y) {
		if(y==1)return x;
		if(y==0)return 1;
		long ans=1;
		long temp=q(x,y/2);
		if(y%2==1)ans*=x;
		ans*=temp;
		ans%=(9*k);
		ans*=temp;
		ans%=(9*k);
		return ans%(9*k);
	}
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int t=in.nextInt();
		for(int cas=1;cas<=t;cas++) {
			int x=in.nextInt();
			long m=in.nextLong();
			k=in.nextInt();
			int c=in.nextInt();
			System.out.println("Case #"+cas+":");
			
			
			System.out.println((q(10,m)-1)%(9*k)/9*x%k==c%k?"Yes":"No");
		}
		in.close();
	}
}