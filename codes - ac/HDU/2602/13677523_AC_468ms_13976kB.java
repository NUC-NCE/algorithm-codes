import java.util.*;
import java.math.*;
public class Main {
	public static void main(String args[]){
		Scanner scanner = new Scanner(System.in);
		int t,k;
		t=scanner.nextInt();
		for(k=0;k<t;k++) {
			int i,j;
			int n;
			int W;
			n=scanner.nextInt();
			W=scanner.nextInt();
			int dp[]=new int[1100];
			for(i=0;i<=1000;i++) 
					dp[i]=0;
			int w[]=new int[1100];
			int v[]=new int[1100];
			for(i=1;i<=n;i++){
				int y;
				y=scanner.nextInt();
				v[i]=y;
			}
			for(i=1;i<=n;i++){
				int x;
				x=scanner.nextInt();
				w[i]=x;
			}
			for (i=1;i<=n;i++)
		            for(j=W;j-w[i]>=0;j--)
		                dp[j]=dp[j]>dp[j-w[i]]+v[i]?dp[j]:dp[j-w[i]]+v[i];
			System.out.println(dp[W]);
		}
	}
}
