import java.math.BigDecimal;
import java.util.Scanner;

public class Main {
    static BigDecimal sqrt_five, G;
    static BigDecimal two, five;
    public static void init() {
        two = new BigDecimal(2);
        five = new BigDecimal(5);
        BigDecimal low, high, mid;
        low = new BigDecimal(0);
        high = new BigDecimal(5);
        mid = new BigDecimal(0);
        for(int i = 0; i < 1000; i++) {
            mid = low.add(high).divide(two);
            if(mid.multiply(mid).compareTo(five) > 0) high = mid;
            else low = mid;
        }
        sqrt_five = mid;
        // G = (sqrt(5) + 1) / 2;
        G = sqrt_five.add(BigDecimal.ONE).divide(two);
    }

    public static void main(String[] argv) {
        BigDecimal a, b, c, left, right;
        init();
        Scanner input = new Scanner(System.in);
        while (input.hasNext()) {
            a = input.nextBigDecimal();
            b = input.nextBigDecimal();
            if (a.compareTo(b) > 0) {
                c = a;
                a = b;
                b = c;
            }
            left = b.subtract(a).multiply(G);
            right = a;
            left = left.setScale(0, BigDecimal.ROUND_DOWN);
            right = right.setScale(0, BigDecimal.ROUND_DOWN);

            if(left.compareTo(right) == 0) System.out.println("0");
            else System.out.println("1");
        }
        return;
    }
}