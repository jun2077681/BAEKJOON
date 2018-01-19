import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        boolean[] numbers=new boolean[10001];
        for(int i=0;i<numbers.length;i++) {
            numbers[i]=false;
        }
        for(int i=1;i<numbers.length;i++) {
                try {
                    numbers[d_function(i)] = true;
                }
                catch(ArrayIndexOutOfBoundsException e){
                    continue;
                }
        }
            for(int i=1;i<numbers.length;i++) {
            if(numbers[i]==false) {
                System.out.println(i);
            }
        }
    }
    public static int d_function(int a) {
        int k=a;
        int d=a;
        while(k>0) {
            d=d+k%10;
            k/=10;
        }
        return d;
    }
}

