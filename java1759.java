import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) {
		BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
        try {
        	int x=Integer.parseInt(in.readLine());
        	for(int i=0;i<x;i++) {
        		if(i!=x-1) {
        		System.out.print("Ho ");
        		}else {
        			System.out.println("Ho!");
        		}
        	}
		} catch (Exception e) {
			
		}
	}

}