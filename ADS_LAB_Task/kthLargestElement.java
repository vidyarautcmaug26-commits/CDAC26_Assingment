import java.util.Arrays;

public class kthLargestElement{
	static int ktlargest(int[] arr ,int k) {
		Arrays.sort(arr);
		return arr[arr.length-k];
	}
	
	public static void main(String[] args) {
		int[]arr= {20,45,78,12,3};
		
		int k=2;
		int result=ktlargest(arr,k);
		System.out.println("k_th Largets Number:"+result);
		for(int num:arr) {
		System.out.println(num);
		}
	}
}
