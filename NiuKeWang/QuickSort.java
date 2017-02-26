package smote;

import java.util.Arrays;

public class QuickSort {
	
	int[] inn;

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int randomCount = 10;           //number of random array
		int[] arr = getRandomArray(randomCount);
		int start = 0;                  //start of sort
		int end = arr.length-1;         //end of sort
		//quickSort(arr,start,end);
		QuickSort qcs = new QuickSort(arr,start,end);
		qcs.print();
		//System.out.println(Arrays.toString(arr));
	}
	
	QuickSort(int[] arr, int start, int end)
	{
		inn = arr;
		quickSort(inn, start, end);
	}
	
	public void print()
	{
		System.out.println(Arrays.toString(inn));
	}
	
    /**
     * quick sort
     * @Author Min Chen
     * @param arr
     * @param start
     * @param end
     */
	private static void quickSort(int[] arr, int start, int end){
		if(start >=end){
			return;
		}else{
			int point = arr[start];   //referenced point
			int left = start + 1;     //set left pointer site
			int right = end;          //set right pointer site
			
			while(left <= right){
				if(arr[left] <= point){
					left++;
				}else{
					swap(arr,left,right);
					right--;
				}
			}
			
			swap(arr,start,left-1);
			quickSort(arr,start,right-1);
			quickSort(arr,right+1,end);
		}
	}
	
	/**
	 * exchange the value of two items in array
	 * @Author Min Chen
	 * @param arr
	 * @param left
	 * @param right
	 */
	private static void swap(int[] arr, int left, int right){
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
	}
	
	/**
	 * get a random array
	 * @Author Min Chen
	 * @param count
	 * @return
	 * int[]
	 */
	private static int[] getRandomArray(int count){
		int[] arr = new int[count];
		for(int i = 0; i < count; i++)
		{
			arr[i]=(int) ( Math.random() *100 );
		}
		return arr;
	}

}
