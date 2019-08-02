import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;

public class Main{
	public static void main(String [] args) throws ParseException {
		Scanner sc = new Scanner(System.in);
		int tt=sc.nextInt();
		while(tt>0) {
			tt--;
			String stateTime;
			stateTime=sc.next();
			String s=stateTime.substring(0, 4);
			String t=stateTime.substring(4, 10);
			String ss=stateTime.substring(5, 7);
			String sss=stateTime.substring(8, 10);
			int a = Integer.parseInt(s);
			int b = Integer.parseInt(ss);
			int c = Integer.parseInt(sss);
			if(a%400==0){
				if(b==2&&c==29){
					System.out.println(-1);
					continue;
				}
	        }
	        if(a%100!=0&&a%4==0) {
	        	if(b==2&&c==29) {
	        		System.out.println(-1);
					continue;
	        	}
	        }
			a=a+18;
			String endTime=String.valueOf(a);
			endTime = endTime + t;
		    SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd");
		    Date state = sdf.parse(stateTime);
	        Date end  = sdf.parse(endTime);
	        long stateTimeLong = state.getTime();
	        long endTimeLong = end.getTime();
	        long day = (endTimeLong-stateTimeLong)/(24*60*60*1000); 
	        System.out.println(day);
		}
		
	}
}
