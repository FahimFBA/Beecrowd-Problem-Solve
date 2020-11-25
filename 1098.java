public class Main {
	
	public static void main(String[] args) {

		for (float i = 0,j=1,k=0; i<2.1f;j++,k++ ) {
			
			
			if(k==3){
				i +=0.2f;
				j=1+i;
				k =0;
			}
			if(i<2.1f){
				
				if(i==1 || (i>2 && i<2.1) || i ==0)
					System.out.printf("I=%.0f J=%.0f\n",i,j);
				else
				
				System.out.printf("I=%.1f J=%.1f\n",i,j);
			}
			
		}
		
		
	}

}