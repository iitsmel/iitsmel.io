import java.util.Arrays;
 
public class RecursiveBubble {
    static void swapping(int after[], int i){
        int temp = after[i];
        after[i] = after[i+1];
        after[i+1] = temp;
    }
    
    static void bubbleSort(int after[], int length){
        for (int i = 0; length - 1 > i ; i++)
            if (after[i] > after[i+1])
                swapping( after, i );
      
        if ( length != 1 )
            bubbleSort(after, length - 1);
    }
     
    public static void main(String[] args){
        int original[] = { 5, 3, 2, 4, 1 };
        int after[] = { 5, 3, 2, 4, 1 };
        bubbleSort(after, after.length);
        System.out.println( "Original order" );
        System.out.println(Arrays.toString(original));
        System.out.println( "After Recursive Bubble Sort" );
        System.out.println(Arrays.toString(after));
    }
}