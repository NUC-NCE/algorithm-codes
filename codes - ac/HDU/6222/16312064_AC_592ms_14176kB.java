import java.util.*;
import java.math.*;
import java.util.HashSet;
import java.util.Scanner;
import java.math.BigInteger;
import java.math.BigDecimal;
public class Main {
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int t=sc.nextInt();
		BigInteger[] a = new BigInteger[1010];
		a[0]=BigInteger.valueOf(4);
		a[1]=BigInteger.valueOf(14);
		for(int i=2;i<=1000;i++) {
			a[i]=(a[i-1].multiply(a[0])).subtract(a[i-2]);
		}
		while(t>0){
			t--;
			BigInteger n;
			n=sc.nextBigInteger();
			for(int i=0;i<=1000;i++) {
				if(a[i].compareTo(n)>=0) {
					System.out.println(a[i]);
					break;
				}
			}
		}
	}
}
